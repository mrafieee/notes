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

Session 3
-----------
* EIGRP
	* Hybrid routing protocol
	* Recommanded by cisco
	* Supported by other companies

* EIGRP Convergency
	* Neighbor discovery
	* Topology table
	* Routing table

* EIGRP negotiation between A router and B router
	* A sends hello message
		- multicast
		- 224.0.0.10/32
	* B replies with an update message
		- if this is the first hello from that interface B sends a full update message
		- after first time partial updates will be tranfered between routers
	* A replies with ACK 
	* A sends an update message
	* B sends ACK 

* Updates are sent via RTP (Reliable Transfer Protocol)

* Route priority criterias
	- BW  - like link state protocols
	- delay - like distance vetor protocols
	- L , R , T

* HELLO message
	- hello interval time - default 5 s
		* the time that each router send hello to neighbors
	- hello hold time - default 15 s
		* after this time if no hello recived the destination will be removed from routing/neighbor table
	- passive-interfaces will not recieve hello messages

* Reporting commands
	- show ip eigrp topology 
	- show ip route eigrp
	- show ip eigrp neighbors

* neighbor table fields
	- Address
	- Interface
	- Hold time (seconds)
	- SRTT
	- RTO
	- Q
	- Seq Number

* EIGRP Authentication
	- Create a key chain
		* needs at least 1 key & 1 password
		* runs in conf t
	- Enabling MD5 on specific int in eigrp
		* runs in int
	- Assigning key chain to eigrp
		* runs in int
