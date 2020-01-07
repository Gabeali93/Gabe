#!usr/bin/python

from socket import socket as Socket
from socket import AF_INET, SOCK_STREAM

HOSTNAME = ''       #blank so any address can be used
PORTNUMBER = 41267  #number for port
BUFFER = 80         #size of the buffer

SERVER_ADDRESS = (HOSTNAME, PORTNUMBER)
SERVER = Socket(AF_INET, SOCK_STREAM)
SERVER.bind(SERVER_ADDRESS)
SERVER.listen(2)

print('server waits for connection')
CLIENT, CLIENT_ADDRESS = SERVER.accept()
print('server accepted connection request from ',\
	CLIENT_ADDRESS)

print('server waits for data')
DATA = CLIENT.recv(BUFFER).decode()
print('server received \%s' %DATA)

SERVER.close()
