#Sends a string to server and receives string back from server in reversed order

import socket 	#import socket module

s = socket.socket()	#creates socket object

port = 3427	#defines port to connect on
	
s.connect(('127.0.0.1', port))	#connect to server on local box

payload = raw_input("Enter data you want to send->")	#creates variable for sendable data to server

s.sendall(payload)	#sends data server

print(s.recv(1024))	#prints data server sent back

s.close()	#closes connection with server
