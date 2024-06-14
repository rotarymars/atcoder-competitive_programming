import os
import sys
import pathlib
import re
if os.path.exists("./tmp.cpp"):
    os.system("rm tmp.cpp")
os.system("cp main.cpp tmp.cpp")
originalsource=[]
with open("./tmp.cpp",encoding="utf-8",newline="\n") as f:
    originalsource=f.readlines()
for i in originalsource:
    i=i.rstrip()
while True:
    nothingtochange=True
    newsource=[]
    for i in originalsource:
        res=re.match("#include.*<template/(.*)>.*",i)
        if res:
            nothingtochange=False
            templatesource=[]
            with open(f"../template/{res.groups()[0]}",encoding="utf-8",newline="\n") as f:
                templatesource=f.readlines()
            newsource=newsource+templatesource
        else:
            newsource.append(i)
    if nothingtochange:
        with open("./tmp.cpp",mode='w',encoding="utf-8",newline="\n") as f:
            f.writelines(newsource)
        break
    else:
        originalsource=newsource
