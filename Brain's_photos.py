color=0
n,m=map(int,input().split())
for i in range(n):
	a=input().split()
	if 'C'  in a:
		color=True
	if 'Y'  in a:
		color=True
	if 'M'  in a:
		color=True
if color==True:
	print('#Color')
else:
	print('#Black&White')