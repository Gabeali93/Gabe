#!usr/bin/python
import subprocess
def main():
	print("your current directory is: ")
	
	subprocess.call(["pwd"]) #prints present working directory
	
	print("Files located in this directory: ")

	subprocess.call(["ls -l"]) #displays all file and directories in the current directory

main()	


