from urllib.request import urlopen

data = urlopen("http://data.pr4e.org/romeo.txt").read(3000)
print(data)
