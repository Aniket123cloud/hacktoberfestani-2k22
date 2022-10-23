n=int(input())
if n==0:
	print(1)
else:
	b=len(str(n))
	if b<=2:
		d=(8**b)
		print(d[-1])
	else:
		c=str(n)[-2]
	