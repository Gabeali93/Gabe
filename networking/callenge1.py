#python script to extract h1 tag from example.com or any site

import requests			#import requests module
from bs4 import BeautifulSoup	#import BeautifulSoup from bs4 module

def main():	#initialize main()
	web_scrape()	#call web_scrape() function

def web_scrape():	#initialize web_scrape() function
	url = input("Enter name of website: ")	#create variable 'url' through user input
	url = f'https://{url}'#adds 'https://' in front of 'url'
	option = input("Choose from the following options: \n1) Print\n2) Scrape\nResponse: "	#creates variable 'option' through user input
	option = input_validation(option)	#passes option to input_validation function
	reqs = requests.get(url)	#creates 'reqs' variable that '=' the 'get' request of 'url'
	if option == 1:	#when 'option' = '1'
		soup = BeautifulSoup(reqs.text, 'html.parser')	#Prints the contents of reqs.text to soup
		print(soup.prettify())	#prints soup in an easily read format
	elif option == 2:	#when 'option' = '2'
		tags = input("How many tags would you like to scrape? \nResponse: ")	#tags variable '=' the input
		tags = input_validation(tags)	#tags variable is passed to input_validation()
		tag_list = [] #list called 'tag_list' is created
		for i in range(tags):	#for loop that counts through the number of tags
			tag = input(f"({i+1} of {tags}) Enter tag: ")	#tag variable = which tag you wish to search for
			tag_list.append(tag)	#appends tag variable to tag_list
		soup = BeautifulSoup(reqs.text, 'html.parser')	#prints contents of reqs.text to soup
		for heading in soup.find_all(tag_list):	#finds all of the contents in tag_list in soup
			print(f'{heading.name}{heading.text.strip()}')	#prints heading followed by the text associated with it

def input_validation(num):	#creates function input_validation()
	while str.isnumeric(num) == False:	#checks variable 'num' to see if it is an integer
		num = input("Invalid inpu! Enter an integer: ")	#assigns text to variable num if while == False
	return int(num)

main()
