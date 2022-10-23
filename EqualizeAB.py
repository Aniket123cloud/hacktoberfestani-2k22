n=int(input())
for _ in range(n):
	a,b,x=map(int,input().split())
	if (b-a)%(2*x)==0:
		print("YES")
	else:
		print("NO")