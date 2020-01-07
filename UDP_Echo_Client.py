#!/ysr/bin/python

import socket

#Create a UDP socket
sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

#Connect the socket to the port where the server is listening
server_address = ('localhost', 10002)
message = b'This is our message. It will be sent all at once'

try:

	#send data
	print('sending {!r}'.format(message))
	sent = sock.sendto(message, server_address)

	#receive response
	print('waiting to receive')
	data, server = sock.recvfrom(4096)
	print('received {!r}'.format(data))

finally:
	print('closing socket')
	sock.close()
