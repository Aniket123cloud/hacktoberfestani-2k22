
n=int(input())
for _ in range(n):
	a=int(input())
	b=input()
	if b=='10':
		print(10)
	else:
		a=[i for i in b]
		a.sort()
		final=""
		for i in a:
			final+=i
		print(final)
		# one_count=b.count('1')
		# zero_count=b.count('0')
		# print()