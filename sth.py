

n = 3*2**5
a = [0]*n
v=0
c=0
s=0

while True:
    if 0 in a:

        if  a[c] == 0:
            if s % 2 == 0:
                v+=1
                a[c] = v
            s += 1
        c += 1
        c %= n
    else:
        break

print(a[n-1])