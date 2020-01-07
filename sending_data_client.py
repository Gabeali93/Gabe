#!usr/bin/python

from socket import socket as Socket
from socket import AF_INET, SOCK_STREAM

HOSTNAME = ''       #blank so any address can be used
PORTNUMBER = 41267  #number for port
BUFFER = 80         #size of the buffer

SERVER_ADDRESS = (HOSTNAME, PORTNUMBER)
CLIENT = Socket(AF_INET, SOCK_STREAM)
CLIENT.connect(SERVER_ADDRESS)

print('client is connected')
DATA = input('Give message: ')
CLIENT.send(DATA.encode())
