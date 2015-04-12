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


