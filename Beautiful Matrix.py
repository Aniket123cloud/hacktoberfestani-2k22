a=list(map(int,input().split()))
b=list(map(int,input().split()))
c=list(map(int,input().split()))
d=list(map(int,input().split()))
e=list(map(int,input().split()))
i=0
j=0
if 1 in a:
	i+=1
	j=a.index(1)+1
elif 1 in b:
	i+=2
	j=b.index(1)+1	
elif 1 in c:
	i+=3
	j=c.index(1)+1
elif 1 in d:
	i+=4
	j=d.index(1)+1	
elif 1 in e:
	i+=5
	j=e.index(1)+1	
print(i)
print(j)
