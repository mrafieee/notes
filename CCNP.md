CCNP notes
===========
CBT Nugget Series notes

Session 1
-----------
* Why cisco certification is valuable!
* CCENT - CCNA - CCNP (R/S/T) - CCIE (R/S)
* Certs renewal
* Lab suggestions
	- Tree 2600 Routers (How?)
	- GNS3 - Free & Open source
* HOw to do this:
	- REPEAT, REPEAT, REPEAT
	- Take note
	- Build a lab
	- Dig Deeper
	- Fall in love

Session 2
------------
GNS3 - Graphical Network Simolator
* GNS3 is develped as a GUI on another project called Dynamips
* Installing and configurations
	- importing IOS
	- Idle PC per IOS
	- Wireshark captures
* Tips and tricks to save hours

Session 3
-------------
Network Design and Documentation
* Having a big picture of network in mind
* Perfection Aproch:
	- Identify needs
	- Plan the solution
	- Implemant solution
	- Document solution
* PPDIO (Prepare, Plane, Design, Impliment, Oprimize)
* Cisco suggestd Phases:
	- Necessary information/data
		* Network diagram
		* IP address diagram
		* Configuration commands
		* Hardware required
		* Equipment list
		* Link utilization
		* Timeline
		* Relevent contact information
	- Implimentation plan
		* Identify devices and tasks
		* List configurations
		* Verificaton and testing
		* List necessary software version
	- Documentation
		* Network diagram
		* Current configuration
		* Known issues
		* Network Equipments

Session 4
-----------
EIGRP:
* keeps backup routes as a Feasible Successor (FS)
* Fast and Simple to config
* Both link state and distance vectore made it Hybrid
* summerization and flexibility
* unequal cost load balancing, intelligentally

Terminalogy:
* Neighbor table
* Topology table
	- Successor - the best route to destination
	- Feasible Successors - potential route but as an alternative
* Routing Table
	- Feasible Distance - How far is destination
	- Advertised distance - How far is destination from your neighbor
	- Active route - router is activly looking for a backup
	- Passive route - routing taable is complete and everything is find

"To be considered a feasible successor, 
the AD must be less than the FD of the Successor"

* 224.0.0.10 multicast frequency
* Messages:
	- Hello - Forms relationships
	- Update - Sends update and topology table
	- Query - Asks aboute routes
	- Reply - Response to query
	- ACK - aknowledges the update, querry, reply, hello messages

* EIGRP Metric parametrs:
	- Bandwidth 	K1	default 1
	- Delay 	K3	default	1
	- Reliability	K4, K5	default	0
	- Loading	K2	default	0
	- MTU - actually not important
Metric = (K1*BW + ((K2*BW)/(256-Load)) + K3*delay) * (K5/(relyability+K4))
Rely Metric = 256*slowest_BW + ALL_LINKS_DELAY

IGRP does not have 256 in formula above

Session 5
------------
Basic EIGRP Configuration (Link to gns3 project)
calssless - no auto summerization
classfull - auto summarization

(config)# ip default-network 192.168.1.0
(config-router)# passive-interface default
# conf t
# int s0/0
# ip summary-address eigrp 90 172.30.0.0 255.255.248.0

* Load balancing in eigrp
# router eigrp 90
# variance 2

variance is by default 1 in eigrp it means it only balances the bandwith between the very same cost links 
by changing the variance to 2 eigrp will balance the bandwidth between the links which are 2 times bad than the successor

Session 6
------------
* NBMA - None Broadcast Multi Access Network
* Generations of NBMA Connections
	- X.25
	- Frame Relay
	- ATM
	- MPLS
* Frame Relay PVC Design
	- Hub and spoke
	- Full mesh - VOIP deployments
	- Partial mesh
* Pseudo-Broadcast














Mr Kia Seissions
===================
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

Session 4
-----------
* Refurbish, Used & DEM Terms

* EIGRP main actions
	- Neighbor discovery, using hello packets
	- Sending updates, mainly topology tables
	- Creating a reliable routing table

* EIGRP disadjancy events
	- Not matched AS numbers
	- Authenticaion
	- Passive interface
	- Hello/Hold time conflicts
	- Metrics modifications

* EIGRP messages
	- Hello
	- Update
	- ACK
	- Query
	- Reply

* Exchanging Data (Update packets)
	* Data
		- Address (Prefix)
		- Prefix length (Mask)
		- Metric
		- MTU
		- ...
	* Update process is unicast
	* Updates are sended via RTP

Interfaces Delay/Bandwidth table

| Interface | Delay | Bandwidth |
|:---------:|:-----:|:---------:|
| Serial | 2000 | 1544 |
| Gig | 1 | 1,000,000 |
| Fast | 10 | 100,000 |
| Ethe | 100 |10,000|

Session 5
---------------
Framerelay networks
* WAN connections
	- Framerelay
		* point to point
		* point to multi point
		* mesh
	- ATM
	- MPLS

