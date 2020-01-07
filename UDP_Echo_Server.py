#!/ysr/bin/python

import socket

#Create a UDP socket

sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

#Bind the socket to the port
server_address = ('localhost', 10002)
print('Starting up on {} port {}'.format(*server_address))
sock.bind(server_address)

#Listen for incoming connections
sock.listen(1)

while True:
	#Wait for a connection
	print('waiting for a connection')
	data, address = sock.recvfrom(4096)

	print('received {} bytes from {}'.format(
		len(data), address))
	print(data)
	
	if data:
		sent = sock.sendto(data, address)
		print('sent {} bytes back to {}'.format(
			sent, address))
	

