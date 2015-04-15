CCNP notes
===========
Here I leave my notes on CCNP courses
scnario files can be found in https://github.com/mrafieee/cisco

Session 1
-----------
Course generals and basic knowledge on cisco environment

* cisco catos & IOS
* Standard IOS vs Enhanced IOS
* Being L2 or L3 is based on addressing 
	- in L2 devices addressing is based on MAC Address
	- in L3 devices addressing is based on IP address
* instead of L3 device we call MLS or Multi layer devices
* Connecting to devices
	- Console
	- Aux port (phone line)
	- telnet
	- SSH
	- HTTP
	- TFTP
* Cisco ASA plays as IPS & IDS Role in network
* Command line modes
	- usermode 		>
	- priviledge mode	#
	- config mode		(config)#
* ctl+shift+6 is important ;)
* inter vlan routing scnario 
* encapsulation
	- dot1q
	- ISL (cisco)

Session 2
-----------
Introduction to course tools GNS3, Pachet tracer 

* We need to add read IOS binary files into GNS3
* interfaces status
	- Administratively down
	- Down
	- UP
* Basic Configuration on every device
	- hostname
	- service password encryption
	- securing enable
	- ssh configuration
	- connection to local machine

* Line vty
	- 15 for fifteen users
	- by default 0-4 for five users
* Design & Documentation
	* standard design
	* documentation is more important than network itself
* Documentation
	- Topology (physical)
		* Detailed physical information
	- Logical topology
		* What's happening
		* Processes
		* Layers
	- Configurations
		* config files
		* monitoring
	- Schematics
		* edraw
		* visio
* Cisco standard network architecture
	- Access Layer
	- Distribute Layer
	- Core layer
		* Server Farm
	- WAN

* Routing protocols
	- Link state - BW is important
		* OSPF
		* IS-IS
	- Distance vector - Hop count & delay is important
		* RIP v1,v2
		* BGP
	- Hybrid - BW, load, truput, reliability is important
		* EIGRP
* Static Routing
