a,b,c,d=map(int,input().split())
e=str(input())
t=0
for i in e:
	if i=='1':
		t+=a
	elif i=='2':
		t+=b
	elif i=='3':
		t+=c
	elif i=='4':
		t+=d
print(t)		