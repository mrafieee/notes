LPIC 101
====
Based on "CBT Nuggets - LPI 101 LPIC-1 Linux System Architecture" videos
Hear I leave some notes about this series.

[LPIC 101 exam highlights](https://www.lpi.org/study-resources/lpic-1-101-exam-objectives/)

Session 1
-----------
No weight - Introductions to LPIC exam and certification

Session 2
-----------
Weight 2
* /proc /sys /dev directories
* lsmod, lspci, lsusb, usb-devices commands
* add/remove kernel modules using rmmod and modeprobe & /etc/sysctl.conf
* HAL dbus udev
* devices UUID
* the scnario is udevd detects the hardwares and populate the /dev/ directory with HAL and another daemon dbusd notified with this changes and notifies the desktop manager or tty to sho the custom message
* sysfs is trying to be replace procfs from kernel 2.5
* udev came from kernel 2.6

session 3
-----------
Weight 3
* BIOS/UEFI
* Bootloader
	- LILO - LInux LOader
	- GRUB - GRand Unified Bootloader
* kernel
* dmesg , /var/log/messages
* /var/log/dmesg vs dmesg command
* init
* /boot directory
* scnario -- start a system > bios/uefi > MBR > Grub > initrd > kernel > init > running system

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
* init/ telinit commands

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
* GRUB - Grand Unified Boot Loader
* Backup MBR

* changing root password using grub menu
* init programs
	- sysVinit
		* based on sequences (number) of sh files
	- upstart
		* running startup services async
	- systemd
		* /etc/systemd/system
		* systemctl get-default
		* systemctl set-default multi-user.target
		* systemctl isolate multi-user.target
	- bsd init - slakware

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

* Background & forground - jobs, fg, bg, &
* Persistent prcesses - nohup
* Interact with processes
* Sort running processes

Session 15
----------
Weight 2 - Process priorities

* niceness explained
* ps
* pstree
* top
* nice
* renice

Session 16
----------
Weight  2 - Search text files with regular experssions

* grep, fgrep, egrep, sed
* Regex

Session 17
----------
Weight 3 - Basic text file editing with vi

* vi
	- insert/command modes - i/<esc>
	- HJKL instead of arrows inn command mode
	- a , i , o
	- copy(yank)/paste - y[y|w|l]/p
	- cut/paste - d[d|w|l]/p
	- search / or ? - n next/ N previous
	- ZZ , :wq , :w newfile , :q!
	- change c[c|w|l]

Session 18
----------
Weight 2 - Create patitions and filesystems

* Partition
* Create filesystem
	- vfat, ext2, ext3, xfs, reiserfs
* make swap space

Session 19
----------
Weight 2 - Maintain the integrity of filesystems

* Check the integrity - fsck
* Monitor free space/inodes - df, du
* Repaire some problems - debugfs, tune2fs, dumpe2fs, xfs tools

Session 20
----------
Weight 3 - Mounting and unmounting filesystems

* Manual mounting/umounting
* Mounting on bootup (/etc/fstab)
* User mountable filesystems
* Automount

Session 21
----------
Weight 1 - Manage Disk quotas

* Setup quotas on disk - quota, quotaoff, quotacheck, edquota, repquota
* Edit settings
* Check Quotas
* Generate reports
* Hard limits, Soft limits

Session 22
----------
Weight 3 - Manage file ownership and permissions

* Ownership
	- chown
	- chgrp
* Permissions
	- files & folders
	- chmod
	- octal
	- umask
* Special permissions
	- SUID, GUID, Sticky bit

Session 23
----------
Weight 2 - Create and change hard and symbolic links

* Hard links
* Soft (symbolic) links
* ln

Session 24
----------
weight 2 - Find system files, and place file in correct location

* FHS (File Hierarchy Standard)
* Find diles and commands
* Find, locate, updatedb, whereis, which, type
* /etc/updatedb.conf
