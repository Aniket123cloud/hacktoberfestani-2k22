nums=[4,2,4]

def funt(nums):
	flag=False
	for i in range(len(nums)-2):
		temp=nums[i]+nums[i+1]
		for j in range(i+1,len(nums)-1):
			temp1=nums[j]+nums[j+1]
			if temp==temp1:
				flag=True	
				break
	return flag
		
print(funt(nums))
		