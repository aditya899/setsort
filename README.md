# setsort
def printRepeating(arr, size):
	

	
	for i in range(0, size):
		
		if arr[abs(arr[i])] >= 0:
			arr[abs(arr[i])] = -arr[abs(arr[i])]
		else:
			print (abs(arr[i]), end = " ")
			
n=int(input())
arr = list(map(int,input().split()))
arr.sort()


printRepeating(arr, n)



