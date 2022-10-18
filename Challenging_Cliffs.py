from sympy import *
from functools import reduce

def div(n):    
    return list(set(reduce(list.__add__, 
                ([i, n//i] for i in range(1, int(n**0.5) + 1) if n % i == 0))))

k=int(input())
for i in range(k):
	a=int(input())
	total=0
	factor=0
	mx=0
	if isprime(a)==True or a==1:
		print('Bob')
	else:
		while a>1:
			
			factor=div(a)
			
			factor.pop(factor.index(a))
			factor.pop(factor.index(1))
			# print(factor)
			if len(factor)>1:
				mx=max(factor)
			else:mx=1
			a=a-mx
			total+=1
	if total%2==0:
		print('Alice')	
	else:
		print('Bob')
			