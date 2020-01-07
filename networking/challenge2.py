import requests			#import requests module
from bs4 import BeautifulSoup	#import BeautifulSoup from bs4 module



def main():	#initialize main()
	web_search()	#call web_search() function

def web_search():	#initialize web_search() function
	url = input("Enter name of website: ")	#create variable 'url' through user input
	url = f'https://{url}'#adds 'https://' in front of 'url'
	request = requests.get(url) #makes a get request with variable 'url'
	if request.statues_code == 200:	#if the server response is '200'
		print('Web site exists')	#web site exists
	else:
		print('Web site does not exist')	#anything else 'website does not exist'

main()
