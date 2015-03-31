LPIC 101
====
based on "CBT Nuggets - LPI 101 LPIC-1 Linux System Architecture" videos


Session 1
-----------
Introductions

Session 2
-----------
* /proc /sys /dev directories
* lsmod lspci lsusb commands
* add/remove kernel modules using rmmod and modeprobe & /etc/sysctl.conf
* HAL dbus udev
* devices UUID

session 3
-----------

* BIOS
* Bootloader
	- LILO
	- grub
* kernel
* dmesg , /var/log/messages
* /var/log/dmesg vs dmesg command
* init
* /boot directory

Session 4
----------
* runlevels
	- 0 - Halt
	- 1 - Single user mode (recovery mode)
	- 2 - Debian based default 
	- 3 - Redhat / SUSE text mode
	- 4 - Wild card (not used by default)
	- 5 - Redhat / SUSE GUI mode
	- 6 - Reboot
* /etc/init.d direcory
* /etc/rc{0,1,2,3,4,5,6}.d directories
* shutdown / restart commands
* upstart / systemd
