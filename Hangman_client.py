#!usr/bin/python

from socket import socket as Socket
from socket import AF_INET, SOCK_STREAM

HOSTNAME = 'localhost'
PORTNUMBER = 11271
BUFFER = 80


DEALER = (HOSTNAME, PORTNUMBER)
PLAYER = Socket(AF_INET, SOCK_STREAM)
PLAYER.connect(DEALER)


print('player is ready to guess')
while True:
	GUESS = input("Enter a letter: ")
	PLAYER.send(GUESS.encode())
	REPLY = PLAYER.recv(BUFFER).decode()



PLAYER.close()
