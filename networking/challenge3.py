import requests			#import requests module
from bs4 import BeautifulSoup	#import BeautifulSoup from bs4 module


def main():	#initialize main()
	web_search()	#call web_search() function

def web_search():	#initialize web_search() function
	url = input("Enter name of website: ")	#create variable 'url' through user input
	url = f'https://{url}'#adds 'https://' in front of 'url'
	request = requests.get(url) #makes a get request with variable 'url
	soup = BeautifulSoup(response.text, 'html.parser')	#Prints the contents of reqs.text to soup
	title = soup.findAll(text = re.compile('title'))	#creates variable 'title' = find all instances of variable 'text' in soup
	print(title)	#print 'title'

main()
