LPIC 102
====
Based on "CBT Nuggets - LPI Linux LPIC-1 102 and CompTIA Linux+" videos
Hear I leave some notes about this series.

[LPIC 102 exam highlights](https://www.lpi.org/study-resources/lpic-1-102-exam-objectives/)

Session 1
-----------
Weight 0 - just introduction of exam objectives

Session 2
-----------
Weight 4 - 105.1 - Customized and use the shell environment

* Profiles, rc files
	- /etc/profile, ~/.profile
	- /etc/bassh, bashrc
* Maintain skeleton directories
	- /etc/skl/
* Write bash functions
	- function names which are defined in .bashrc or /etc/bashrc are callable.
* Set environment variables
	- can be accessed in current terminal and every child process
* Set command search path

Session 3
-----------
Weight 4 - l05.2 - Customize or write shell scripts

* Standard sh syntax
	- #! is called <shebang>
	- giving root suid permission to script files is dangerios !!!
* Command substitution
* Conditionaal tests
	- test option experssions
		* -x is an exec. file
		* -e does the file exists
		* -eq are equal
		* -ne are the values not equal
		* -z does it have value
	- exit codes - 0(True) not 0(false) the value assigne to $
	- Mail to superuser 
		- mail -s "Subject" user < message.txt
		- echo "message" | mail -s "Subject" user 
* Loops
	- for
	- while
* Manage location, permission, ownership, and suid rights
* Read input from command line

Session 4
-----------
Weight 2 - 105.3 - SQL Data Management

* Basic commands
	- open database
* Manipulate Data
	- insert, update, select, delete, join
	- from, where, groupby,orderby
 
Session 5
-----------
Weight 2 - 106.1 - Install and configure X11

* Verify video and monitor are supported by x server
* Know what the x font server is and does
* Understand the basics of the X configuration file
	- sudo X -configure
* Xorg.conf, xhost, xwininfo, xdpyinfo, X, DISPLAY, startx

Session 6
-----------
Weight 2 - 106.2 - Setup a display manager

* GDM, KDM, XDM
	- turn on/off
		* centos /etc/inittab change default init
		* ubuntu /etc/default/grub GRUB_CMDLINE_LINUX="text"
	- debian based /etc/X11 for changing default display manager
	- redhat based /etc/sysconfig/desktop DISPLAYMANAGER='KDE'
	- change the greeting
		* /etc/X11/xdm
		* kdmrc
	- change default color depth
	- configure for use by remote x stations
		* xdm-config - Display manager.requestport Xaccess

Session 7
-----------
Weight 1 - 106.3 - Accessibility features

* keyboard settings
* visual settings
* Assistive technology

Session 8
-----------
Weight 5 - 107.1 - Manage user and group accounts and related files

number of days since jan/1st/1970 !!!!!!

* Sahadow password system
* useradd, userdel, usermod
* groupadd, groupdel, groupmod
* chage, passwd
* Suspend accounts, manage special & limited accounts

Session 9
------------
Weight 4 - 107.2 Automate system administration tasks by scheduling jobs

* Cron
* anacrone
* at
* access controls

/etc/crontab
/etc/cron.d/
/etc/cron.{hourly,daily,weekly,monthly}
/var/spool/cron

Session 10
-----------
Weight 3 - 107.3 - Localisation and internationalisation

* Locale Settings
	- Languages
	- Formats & dates, etc
	- Character formats
	- Converting formats
* Timezone settings
	- Setting timezone
	- Setting date & time

Session 11
-----------
Weight 3 - 108.1 - Maintain System Time

* Set System date & time
* Set hardware clock to UTC
	- hwclock -w
* Basic NTP configuration
* pool.ntp.org

-- timezone info --

Session 12
-----------
Weight 2 - 108.2 - System logging

* Logs
	- facilities
		* mail
		* cron
		* auth
		* kern
		* ...
	- priorities
		* emerg, panic
		* alert
		* crit
		* err, error
		* warn, warning
		* notice
		* info 
		* debug
	- actions
		* files		, /var/log/name.log
		* remote host 	, @host name or ip
		* user		, /dev/console
		* pipe		,
	
	- - basiclly means do not flush cache files
* Syslog
	* configuration
	* sendto remote server
	* act as central server
	* facilities, actions

* klogd
	* same config file

Session 13
-----------
Weight 3 - 108.3 -Mail Teansfer agent (MTA) Basics

* Know common MTA Programms
* Understand sendmail emulation layer
* Create email aliases
* Configure email forwarding
* Use commandline "mail" program

Session 14
------------
Weight 2 - 108.4 - Manage Printers & printing

* Basic CUPS Configuration
	- local printers
	- network printers
* Manage print queues
* Troubleshoot printing problems
* Add and remove jobs from printer queues
* lpd leagacy interface
	- lpr, lprm, lpq

Session 15
------------
Weight 4 - 109.1 - Fundamentals of internet protocols

* IP addressing and network masks
	- 4 octed numbers
	- CIDR notation
* Public and private dotted-quad IP addresses
* How to set a default route
* Understand the differences ad major features of UDP, TCP, and ICMP
* Knowlwdge of the differences between IPv4 and IPv6
* Know common TCP and UDP ports
	- 20, 21, 22, 23, 25, 53, 80, 110, 119, 139, 143, 161, 443,465, 993,995
