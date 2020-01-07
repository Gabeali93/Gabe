#1.) ###Prompt for 'url'###> 2.)read JSON data from the 'url' USING URLLIB 3.) parse and extract the comment #counts JSON data 4.)compute the sum of the numbers in the file and enter below
#using python3 in terminal
import urllib.request
import json


	
	

url = input("Enter name of website: ")	#create variable 'url' through user input
#url = "http://py4e-data.dr-chuck.net/comments_42.json"
	
response = urllib.request.urlopen(urllib.request.Request(url)).read().decode('utf-8')	#response variable '=' 'url' variable opened and decoded
data = json.loads(response)	#'data' '=' json.loads which takes a file object, reads the data and uses the string to create an object
counts = list()	#creates list counts


comments = data['comments']	#comments variable '=' looks for comments in 'data'
for comment in comments:
	counts.append(comment['count']) #appends 'count' to 'counts' list

print(sum(counts))	#prints sum of 'counts' list

	
