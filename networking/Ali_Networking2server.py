#Receives string from client side, reverses input, and sends it back to client

import socket #imports socket lilbrary


s = socket.socket() #creates a socket object
print("socket created successfully")


port = 3427 #creates port to listen on

s.bind(('', port))	#binds port
print("socket binded to %s" %(port))

s.listen(5) #puts socket into listening mode
print("socket is listening")

while True: #creates a loop

	c, addr = s.accept()
	print("got connection from", addr) #establishes connection with client
	
	data = c.recv(1024) 	#get data from client

	data = data[::-1]	#reverses data from client

	if not data:
		break

	c.sendall(data)	#sends back reversed data to client

	c.close() 	#close connection with client
