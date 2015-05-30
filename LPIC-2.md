LPIC 2
====
Based on theurbanpenguin.com clips, based on opensuse 11

Session 1 - Basic DNS Server
----------------
* DNS - Domain Name Server
* zypper is something like apt-get or yum
* installing using zypper in suse
	- zypper info bind
	- zypper -n --no-remote in bind
* changing the name server to localhost in /etc/resolv.conf
* host / dig commands
	- dig -t mx www.google.com
* rndc command
	- rndc status
	- rndc flush


Session 2 - Alternative DNS Servers
----------------
* alternatives to bind9
	- dnsmasq
		* dns/dhcp server
		* great for small deployments
	- djbdns
		* known for security
		* the same programmer of qmail
	- PowerDNS

Session 3 - Create and maintain DNS zones
----------------

* When we just install a DNS server it works as a DNS caching server only 
* /etc/named.conf
* /var/lib/named where root is defined
* adding new zone, all dns names ends with .
* type can be master or secondary
* file name for new zone should be mentioned also in the named file, always with .zone 
* .zone file
	- TTL - other server can cache this records for the time we mention there
	- Serial - we can use date for this field
	- Refresh - slave server should connect to server with this interval
	- retry - if salves fail to refresh they can try every 4 hours
	- expiry - slaves should expire their records if they can not connect to master server after this period
	- minimum - intervals that the changes in this dns may happen like TTL time
* A record - Address record
* CNAME record - Common name record this can be another a record also, name of dns server instead of ip
* MX record - Mail exchange record
* PTR record - for reverse ip/host lookup

* named-checkconf -v /etc/named.conf
* named-checkzone domain.com. name.zone 

* for reverse ip lookup e.g: host 127.0.0.1 we use another zone file defining PTR records 

* "cd -" command to switch to the latest working directory
* "nano !$" command tries to nano the last argument
* "!tail" command will procee latest command starts with tail

Session 4 - Securing DNS Server
---------------
* dig -t axfr domain.com  -- fully query on a zone, zone transfer!
* rndc status
* when configuring slave servers we shoulp pay attention that the named service should have writ permissions to write to the /var/lib/named directory as well as root user

* restricing the allowed IPs who can transfer the zone files.
	- allow-transfer {127.0.0.1; };
* encryption as well as authentication through the keys
	- dnssec-keygen -a HMAC-MD5 -b 128 -r /dev/urandom -n HOST file_key
	- chown named:named file*
	- using the private key in named.conf - defining a key section
		* algotithm 
		* key 
		* adding the key section to allow-transfer ection
		* add key section to the slave node.

Session 5 - using diff and patch
---------------

* diff -u orignal-file modified-file > patch.patch
* patch < patch.patch
* gcc file.c -o binary-name


Session 6 - Netstat, lsof, iptables
---------------

* lsof -i {4,6} -- listening port
* netstat -i INTERFACE
* netstat -s  -- statistics
* iptables -L
* iptables -nvL INPUT
* iptables -Z INPUT -- learing out the iptables history of packets

