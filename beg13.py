# -*- coding: utf-8 -*-
"""
Created on Wed Jul 31 17:20:16 2019

@author: K Bharathi
"""
f=0
n=(int) (input("\0"))
for x in range(2,((int)(n/2))):
    if (n%x==0):
        f=f+1
        break
if(f==0):
    print("yes")
else:
    print("no")