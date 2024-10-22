# Basics

## Computer Networks

Computers connected with each other with cables or wireless called computer network.

`Network`: System of interconnected people or items.

`Internet`: Network of computer networks. Complex web of interconnected computer networks.

## History of Internet

In 1957 US launches `ARPA` for research.

In 70s US built communication system for ARPA's network to talk.

1969 -> ARPANET formed.

1990s CERN used hyperlink based document.

## Terminologies in Computer Networks

**_Protocols_**
Network Protocols are set of rules and regulation setup to communicate and share information over network. eg: HTTP, UDP, TCP, SMTP etc.

**_Packets_**
In order to share data, the small chunk of data is shared called packets.

**_Address_**
Sending messages over the network requires the destination details, this detail uniquely identify the end system called address.

**_PORTS_**
Any machine could be running many network apps. In order to distinguish these apps for receiving messages use ports. (PORT Number)
Ip-address+Port --> Socket

- Every process has 16 bit port number.(0 - 2^16)
- 0 - 1023: Well known ports. eg: Port 80 -> http, port 443 -> https.
- 1024 - 49152: Registered Ports, they are used by specific potentially proprieties apps/process that are known but not system defined.
- 49152 - 65535: Dynamic ports.

## Access Networks

These are the media which end systems connect to the internet.

**_Network Interface Adapter_**
It is hardware which enables a computer to attach to a network. As there are different type of networks, it act as single suit to connect to any network.

**_Digital Subscriber Line (DSL)_**
DSL uses the existing telephone groundwork lines for interent connections. Generally DSL is provided by same company which supplies telephone service.

`ISP(Internet Service Provider)`: It is company that provides end users internet.

## Network Protocol Stack

**_OSI_** (7 layers)

Application --> Presentation --> Session --> Transport --> Network --> Data Link --> Physical

**_TCP/IP_** (5 Layers)

Application --> Transport --> Network --> Data Link --> Physical

`Application`: Email service, chat service.
`Presentation`: Presentation of data, compression, encryption.
`Session`: User session Management.
`Transport`: Divides big chunk of data coming from above to small chunks and manage these chunks.
`Network`: How routing of packets will be done on the Network.
`Data Link`: Error/Flow control, multiplexing & demultiplexing, handle addressing.
`Physical`: Wires etc.

### Application Layer

It exists on end system only.
eg: instant messaging, www, voip, email.

**_Roles_**

1. Writing/providing data off to the network.
2. Reading the data from user.
3. Contains application that helps users to interact on the network.
4. Error handling & recovery can also be done.

**_Client-Server Architecture_**
It is two level architecture.
Client side and server side.

`server`: Controls access to centralized resrource or service such as website/webapp.
`client`: Where user interacts.

**_P2P architecture_**
Peer to Peer Architecture, there are multiple end system all the end system connected to each other in decentralised nature. eg: torrent

**_Hybrid architecture_**
client side + p2p architecture.

## HTTP

It stands for hyper text transfer protocol.

- It defines how client and server will interact.
- http is also categorised as request-resposne protocol.
- http is stateless protocol.

Lot of application layer depends on lower level protocols of transport layer.

In transport layer there are 2 main protocols

1. TCP
2. UDP

HTTP depends on TCP

There are two types of HTTP connections:-

1. Persistent http
2. non-persistent http.

`Objects`: Web pages are the main object that contains othre objects. some other objects can be mp3 file, png, jpg. every object has a URL.

**_URL_**
URL: protocol+ hostname + location of file/object + arguements
EG: https://flipkart.com/image/book.png?q=20

### HTTP req and res message

Any http message are plain ASCII text.
eg: host, mehtod, status code, Referral-policy, method, url, http version.

`user-agent`: It specifies the client, Useful when server has different web pages that exits for diffent devices.
`accept-lang`: specifies the preferred language.
`connection`

## Cookies

These are mainly concern towards privacy.
Cookies provide way to add additional information of webpage.

Cookeis are unique identifiable strings. These are set by servers, cookies are sent to subsequent server request.

`Set-Cookie`: When server wants to set a cookie it includes "set-cookie: value" in the http response.

## SMTP

For executing the functionality of email, SMTP is used.
One more protocol POP3 is used in combination with SMTP. One is used to send emails that are stored in the users inbox and other is used to retrive emails sent to user.

SMTP also uses TCP protoocl from transport layer.

Connection for SMTP is setup on port 25.

Mail client gives the actual UI for end users.

**_How SMTP Works_**
Simple mail transfer protocol

When an email is sent, it is sent to the senders smtp server using smtp protocol.
Also SMTP server is configured in the mail client.

The SMTP server places the email on a message queue, then smtp server intitiates a connection with receivers smtp server and conducts initial smtp handshake.

Then finally send the emals to recepient smtp server.

Then email is downloaded from receivers smtp serer and then client can see the email.

SMTP --> Push Protocol.
POP3/IMAP --> Pull protocols.

If recepient server is offline, the sender smtp server tries again and again after some delta minutes. There is a set threshold after which it stops sending the email and marks it not delivered.

## POP (Post office protocol)

It downloads emails in 4 phases.

1. Connect
2. Authorize
3. Transactions
4. Update

Two modes of POP:

1. Download and keep
2. Download and delete

## IMAP (Internet message access protocol)

Emails are kept on server and not deleted, local copies of the emails are cached on each device.

If an email is deleted by user manually then only it gets deleted from server.

## Torrent

1. Protocol for peer to peer file sharing, A bit torrent client is an application that uses this protocl.
2. A bit torrent follows a hybrid architecture of P2P.
3. Data is downloaded and uploaded directly to and by peers.
4. Allow easy eachange of large files.
5. A bittorrent client request files form multiple clients in parallel.
6. Samll chunks of data is called peers.
7. If a client downloads a piece successfully, bittorrent tells other clients that ok, this clinet has this peice of data downlaoded so they can downlaod it too.
8. These collection of collaborating clients are called `Swarms`

**_Torrent file_**
Client joins a swarm by downloading a (.torrent) file that tells the following info.

1. Gives info about the file liek how big it is, the size of it's pieces and how it starts interacting other clients.
2. Gives detail about a Tracker (Server that traces who is participating in the swarm).

When client joins a swarm, it request a list of client from the tracker, and starts communication with these client over TCP (initially as `leecher`)

When the size of swarm increases we can use somthing like trackerless torrents that uses Distributed hash table.
