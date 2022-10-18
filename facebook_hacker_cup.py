import math
sol=[]
n=int(input())
for i in range(n):
	a,b=map(int,input().split())
	lis=list(map(int,input().split()))
	if len(lis)>2*b:
		sol.append('NO')
	else:
		temp=list(set(lis))
		if len(temp)<-(len(lis) // -2):
			sol.append("NO")
		else:
			sol.append("YES")
				
for i in range(len(sol)):
	print(f"Case #{i+1}: {sol[i]}")