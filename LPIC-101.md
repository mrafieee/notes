LPIC 101
====
Based on "CBT Nuggets - LPI 101 LPIC-1 Linux System Architecture" videos
Heare I leave some notes about this series.

[LPIC 101 exam highlights](https://www.lpi.org/study-resources/lpic-1-101-exam-objectives/)

Session 1
-----------
No weight - Introductions to LPIC exam and certification

Session 2
-----------
Weight 2
* /proc /sys /dev directories
* lsmod lspci lsusb commands
* add/remove kernel modules using rmmod and modeprobe & /etc/sysctl.conf
* HAL dbus udev
* devices UUID

session 3
-----------
Weight 3
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
Weight 3
* Runlevels
	- 0 - Halt
	- 1 - Single user mode (recovery mode)
	- 2 - Debian based default 
	- 3 - Redhat / SUSE text mode
	- 4 - Wild card (not used by default)
	- 5 - Redhat / SUSE GUI mode
	- 6 - Reboot
* /etc/init.d direcory
* /etc/rc{0,1,2,3,4,5,6}.d directories
* Shutdown / restart commands
* Upstart / systemd

Session 5
----------
Weight 2 - Hard drive layout

* Partitions / Disks
* Filesystems
* Mount points
* Swape space
* Design considerations
	- Desktop
	- Network Workstation
	- Servers

Session 6
----------
Wright 2
* Lilo
* Grub
* Backup MBR

Session 7
----------
Weight 1 - Manage Shared Libraries

* Shared Libraries
* Determining associated libs
* Configuring System
* ldd , ldconfig
* ld.so.cache , ld.so.conf.d 

Session 8
----------
Weight 3 - Debian package management

* dpkg
* dpkg-reconfigure
* apt
	- ape-get , apt-cache
	- configuration
* aptitude

Session 9
----------
Weight 3 - RPM & YUM Packages

* RPM
* rpm2cpio
* cpio
* YUM
	- /etc/yum.conf
	- /etc/yum.repos.d/
* yumdownloader

Session 10
-----------
Weight 4 - Work with the command line

* Bash
	- Shell environment
	- PATH
	- history
	- environment variables
	- completion
* Commands
	- exec, pwd, ls, unset, env, export, set

Session 11
----------
Weight 3 - Processing text streams using filters

* Text utiles
cat, cut, expand, *fmt*, head, *od*, *join*, *nl*, *paste*, *pr*, *sed*, *sort*, *split*, tail, *tr*, *unexpand*, uniq, wc

Session 12
----------
Weight 4 - Basic file management

* Copy, move, delete
* Wildcards (golbbing)
* Find files based on type, size, date
* tar, cpio, dd
* bzipz, gunzip


Session 13
----------
Weight 4 - Use streams, pipes, and reddirects

* stdin, stdout, stderr
* pipes
* tee
* xargs

Session 14
----------
Weight 4 - Create monitor, kill process

* Background & forground - jobs
* Persistent prcesses
* Interact with processes
* Sort running processes


