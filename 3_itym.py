#This program is based on a research paper idea...
#To see the problem visit: sumiransubedi.com.np/Pics/Itym.png

from math import floor
from math import log2

#I have figured out that as block increases, it depends on the previous block + a predefined pattern

def a(n, k, x): #Here I have defined a function that does the recursion...
    if k == 2:
        x.append(floor(n/2))
        return
    else:
        for i in range (floor(n/2), pow(2, k-2) -1, -1):
            a(i, k-1, x)




for n in range(1, 101):
    k = floor(log2(2*n))
    x = []

    for j in range(k, 1, -1):
        a(n, j, x)

    s = sum(x)+1
    print("a("+str(n).strip()+") =",s)