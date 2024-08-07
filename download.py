import requests
from bs4 import BeautifulSoup
import pathlib
import os
import re
import sys
LOGIN_URL = "https://atcoder.jp/login"
def returnurl():
    args=sys.argv
    if len(args)==2:
        return args[1]
    nowdirectory=pathlib.Path(os.getcwd()).name
    for i in range(len(nowdirectory)):
        if nowdirectory[len(nowdirectory) - 1 - i] == "_":
            return f"https://atcoder.jp/contests/{nowdirectory[0:(len(nowdirectory)-1-i)]}/tasks/{nowdirectory}"
def main():
    os.system(f"oj d {returnurl()}")

if __name__=="__main__":
    main()
