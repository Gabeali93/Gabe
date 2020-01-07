#!usr/bin/python

import scapy.all as scapy

def scan(ip):
	arp_request = scapy.ARP(pdst=ip)
	arp_request.show()
	broadcast = scapy.Ether(dst="ff:ff:ff:ff:ff:ff")
	arp_request_broadcast = broadcast/arp_request
	arp_request_broadcast.show()	
	#scapy.ls(scapy.Ether())
	#print(arp_request_broadcast.summary())

scan("10.0.2.0/24")
