import numpy as np

a = 108
s = []
b = []
c = 0
n = 0

for i in np.arange(1,a+1,1):
    if a%i == 0:
        s.append(i)

for i in range(len(s)):
    for j in range(len(s)):
        for k in range(len(s)):
            product = s[i]*s[j]*s[k]
            if s[k]>s[i] and s[k]>s[j] \
               and s[j]>s[i] and s[j]<s[k]:
                if product == a:
                    b.append([s[i],s[j],s[k]])
                    

                
                