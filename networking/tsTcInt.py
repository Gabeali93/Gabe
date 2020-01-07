#!/usr/bin/env python
from ipaddress import IPv4Address
from socket import *
import sys


def main():
	BUFSIZ = 1024
	
	setup()
	tcpCliSock = socket(AF_INET, SOCK_STREAM)
	print('5')
	tcpCliSock.close()

def setup():
	
	choiceHost = input('Do you wish to input your own Host? (yes or no): ')
	if choiceHost.lower() == 'yes':
		HOST = input('Please provide the IP address for the host. (Note: IPv4 only): ')
		
		validate(HOST)
	elif choiceHost.lower() == 'no':
		HOST = '127.0.0.1'
	else:
		print('Not a valid choice!!!')
		return False
	
	choicePort = input('Do you wish to input your own Port? (yes or no): ')
	if choicePort.lower() == 'yes':
		
		try:
			PORT = int(input('Please provide the Port number you wish to use. 					(1025-65,535): '))
			print('2')
			if 1024 <= PORT <= 65535:
				return True
				print('2a')
			else:
				raise ValueError
				print('2b')
		except ValueError:
			print('invalid port number')
			print('2c')
	elif choicePort.lower() == 'no':
		PORT = 21567
	else:
		print('Not a valid choice!!!')
		return False
	print('3')
	ADDR = (HOST, PORT)
	print('4')
	
	tcpCliSock.connect(ADDR)
	connection(HOST, PORT)


def validate(HOST):
	print('1')
	try:
		IPv4Address(HOST)
		
	except ValueError:
		print('Not a valid choice!!!')
		return False
		
	print('1a')
	return True
def connection(HOST, PORT):

	while True:
		data = raw_input('> ')
		if not data:
			break
		data = tcpCliSock.recv(BUFSIZ)
		if not data:
			break
		print(data)

main()
