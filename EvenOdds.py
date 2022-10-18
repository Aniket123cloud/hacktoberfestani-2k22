a,b=map(int,input().split())
even=[]
odd=[]
for i in range(1,a+1):
	if i%2==0:
		even.append(i)
	else:
		odd.append(i)
odd.extend(even)
print(odd)
print(odd[b-1])