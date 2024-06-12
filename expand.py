import os
import sys
import pathlib
import re
if os.path.exists("./tmp.cpp"):
    os.system("rm tmp.cpp")
os.system("touch tmp.cpp")
originalsource=[]
with open("./main.cpp",encoding="utf-8",newline="\r\n") as f:
    originalsource=f.readlines()
for i in originalsource:
    i=i.rstrip()
newsource=[]
for i in originalsource:
    res=re.match("#include.*<template(.*)>.*",i)
    if res:
        templatesource=[]
        with open(f"../template/{res.groups()[0]}",encoding="utf-8",newline="\n") as f:
            templatesource=f.readlines()
        newsource=newsource+templatesource
    else:
        newsource.append(i)
with open("./tmp.cpp",mode='w',encoding="utf-8",newline="\n") as f:
    f.writelines(newsource)
