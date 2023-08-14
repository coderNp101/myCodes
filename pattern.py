

p = 0
q = 0
k = 0
N = p ** 2 + q ** 3
D = list(range(1,10))

#This was to find

def check(X):
  C = []
  for i in range (1,11):
    A = X % 10**i
    B = int(A / 10**(i-1))
    if B in C:
      break
    else:
      C.append(B)
  if len(C) == 10:
    print(X)
    return True
  else:
    return False

for p in range (100000):
    for q in range (2200):
      N = p ** 2 + q ** 3
      M = int(N / 10**9)
      if M in D:
        if check(N):
          k += 1


print(k)