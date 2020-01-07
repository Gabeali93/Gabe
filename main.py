from simple_ls import *
from icmp import *

ROOT_DIR = "Target"

create_dir(ROOT_DIR)

def get_stuff():
	simple_ls = get_simple_ls()
	icmp = get_icmp()

	create_stuff(simple_ls, icmp)

def create_stuff(simple_ls, icmp):
	stuff_dir = ROOT_DIR + "/" + name
	create_dir(stuff_dir)
