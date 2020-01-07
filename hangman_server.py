#!usr/bin/python

import random
from socket import socket as Socket
from socket import AF_INET, SOCK_STREAM

HOSTNAME = 'localhost'
PORTNAME = 11271
BUFFER = 80

DEALER_ADDRESS = (HOSTNAME, PORTNAME)
DEALER = Socket(AF_INET, SOCK_STREAM)
DEALER.bind(DEALER_ADDRESS)
DEALER.listen(1)

print('dealer waits for player to connect')
PLAYER, PLAYER_ADDRESS = DEALER.accept()
print('dealer accepted connection request from ',\
	PLAYER_ADDRESS)

WORDS = ['GoNavy']

word = WORDS

secret_word = []

count = 1
while True:
	for letter in word:
		secret_word.append('_')
	secret_word[0] = word[0]

	GUESS = PLAYER.recv(BUFFER).decode()
	print(GUESS)
	if GUESS in word:
			
		REPLY = print("Correct letter.")
		PLAYER.send(REPLY.encode())
			
		for letter in range(len(word)):
			if GUESS == word[letter]:
				count += 1
				secret_word[letter] = word[letter]
		if count == len(word):
			print("You win!")

