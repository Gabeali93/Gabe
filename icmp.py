#!usr/bin/python

from scapy.all import *

dst_ip = input("Enter IP you wish to ping: ")

pkt = IP(dst=dst_ip)/ICMP()/"You're being pinged"
send(pkt)
