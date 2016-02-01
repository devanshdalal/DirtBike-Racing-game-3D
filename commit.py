# Copyright (c) 2015 Angus H. (4148)
# Distributed under the GNU General Public License v3.0 (GPLv3).

from datetime import date, timedelta
from random import randint
from time import sleep
import sys
import subprocess
import os

# returns a date string for the date that is N days before STARTDATE
def get_date_string(n, startdate):
	d = startdate - timedelta(days=n)
	rtn = d.strftime("%a %b %d %X %Y %z -0400")
	return rtn

# main app
def main(argv):
	if len(argv) <1 or len(argv)>= 3:
		print "Error: Bad input."
		sys.exit(1)
	m = int(argv[0])
	startdate = date.today()# - timedelta(days=m)
	print startdate
	curdate = get_date_string(m, startdate)
	# subprocess.call("echo '" + curdate + str(randint(0, 1000000)) +"' > realwork.txt; git add realwork.txt; GIT_AUTHOR_DATE='" + curdate + "' GIT_COMMITTER_DATE='" + curdate + "' git commit -m 'update'; git push;", shell=True)
	# subprocess.call("git rm realwork.txt; git commit -m 'delete'; git push;", shell=True)
	if len(argv)==2:
		message = argv[1];
		subprocess.call("GIT_AUTHOR_DATE=\'" + curdate + "\' GIT_COMMITTER_DATE=\'" + curdate + "\' git commit -am \'"+ message + "\' ;", shell=True)
	else:
		subprocess.call("GIT_AUTHOR_DATE=\'" + curdate + "\' GIT_COMMITTER_DATE=\'" + curdate + "\' git commit -a ", shell=True)


if __name__ == "__main__":
	main(sys.argv[1:])


# python commit.py <m> <message> 