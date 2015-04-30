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


Session 14 - Alternative DNS Servers
----------------
* alternatives to bind9
	- dnsmasq
		* dns/dhcp server
		* great for small deployments
	- djbdns
		* known for security
	- PowerDNS


