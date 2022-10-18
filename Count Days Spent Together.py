arriveAlice = "10-01"
leaveAlice = "10-31"
arriveBob = "11-01"
leaveBob = "12-31"
def min_sorter(a,b):
	day1=int(a[3:])
	day2=int(b[3:])
	if day1<day2:
		a,b=b,a
	mon1=int(a[:2])
	mon2=int(b[:2])
	if mon1<mon2:
		a,b=b,a
	return b
def max_sorter(a,b):
	day1=int(a[3:])
	day2=int(b[3:])
	if day1<day2:
		a,b=b,a
	mon1=int(a[:2])
	mon2=int(b[:2])
	if mon1<mon2:
		a,b=b,a
	return a
def difference(a,b):
	count=0
	day1=int(a[3:])
	day2=int(b[3:])
	count+=abs(day1-day2)+1
	return count
	
	
	
temp1=max_sorter(arriveAlice,arriveBob)
temp2=min_sorter(leaveAlice,leaveBob)
final=difference(temp1,temp2)
print(final)