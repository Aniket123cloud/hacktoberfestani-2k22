s = "leetcode"

a=s[::-1]
print(a)
flag=0
for i in range(len(s)):
	print("-----")
	print(s.find(s[i]))
	print(len(s)-a.find(s[i])-1)
	print("--------")
	if s.find(s[i])==len(s)-a.find(s[i]):
		flag=1
		print( i)
		break
if flag==0:
	print(-1)