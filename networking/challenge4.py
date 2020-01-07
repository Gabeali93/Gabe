import requests			#import requests module
from bs4 import BeautifulSoup	#import BeautifulSoup from bs4 module


def main():	#initialize main()
	web_search()	#call web_search() function

def web_search():	#initialize web_search() function
	url = input("Enter name of website: ")	#create variable 'url' through user input
	url = f'https://{url}'#adds 'https://' in front of 'url'
	request = requests.get(url).json() #makes a get request with variable 'url
	print("Active Users Right Now:")	#simple print statement
	print(j['data'][0]['active_visitors'])	#using json parses text to look for 'active_vistors' inside the 'data variable' and prints the value associated with 'active_visitors'

main()


	
