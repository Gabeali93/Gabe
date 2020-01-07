#!/usr/bin/env python

from socket import *

class ChatClient():
	def __init__(self, bufsiz):
		self.HOST = raw_input(Enter host: ')
		if not self.HOST:
			self.HOST = 'localhost'
		self.PORT = raw_input('Enter port: ')
		if not self.PORT:
			self.PORT = 33001
		else:
			self.PORT = int(self.PORT)

		self.BUFSIZ = bufsiz
		self.hostAddr = (self.HOST, self.PORT)

		self.chatCliSock = socket(AF_INET, SOCK_STREAM)

	def run(self):
		self.chatCliSock.connect(self.hostAddr)

		while True:
			msg = self.chatCliSock.recv(self.BUFSIZ)

			if msg == 'quit()':
				print"Server left the chat."
				break
			print('Server: ', msg)

			msg = ""
			while msg == "":
				msg = raw_input("-|->")
			if msg == 'quit()':
				self.chatCliSock.send(msg)
				break
			self.chatCliSock.send(msg)
		self.chatCliSock.close()


if __name__ == '__main__':
	chatClient = ChatClient(1024)
	chatClient.run()

