notes over ceph
===============

ceph is a storage distributed clustering tool on linux
http://ceph.com/docs/master/start/intro/
https://wiki.debian.org/OpenStackCephHowto

I followed the following instaructions:

General instructions
------------------

 /etc/hosts & /etc/hostname configurations for ceph1, ceph2
* fdisk /dev/sdb
* mkfs -t xfs -f /dev/sdb1
* mkdir -p /srv/ceph/{mon1,osd11}
* mount /dev/sdb1 /srv/ceph/osd11
* ssh-keygen
* sync .ssh/ ceph2:/root/.ssh/
# /etc/fstab configuration

Ceph instructions
--------------------

* apt-get install -y ceph xfsprogs
* # /etc/ceph/ceph.conf configuration
* mkcephfs -a -c /etc/ceph/ceph.conf -k /etc/ceph/keyring.admin
* ceph-osd -i 11 -c /etc/ceph/ceph.conf
* ssh ceph2 ceph-osd -i 21 -c /etc/ceph/ceph.conf
* /etc/init.d/ceph -a start
* ceph -k /etc/ceph/keyring.admin -c /etc/ceph/ceph.conf health
* ceph -s

RBD instructions
-------------------

* ceph-authtool --print-key /etc/ceph/keyring.admin | tee client.admin
* rados lspools
* rados mkpool nova
* rbd --pool nova create --size 1024 rbd-test
* rbd --pool nova ls
* modprobe rbd 
* rbd map rbd-test --pool nova --secret client.admin
* dmesg | tail
* mkfs.btrfs /dev/rbd0
* mount /dev/rbd0 /mnt
* ls /mnt/
* rbd showmapped
* umount /mnt
* rbd unmap /dev/rbd/nova/rbd-test
* rbd --pool nova rm rbd-test
* rbd --pool nova ls

