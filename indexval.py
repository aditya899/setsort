n=int(input())
lst=list(map(int,input().split()))
for i,val in enumerate(lst):
	if(val==i):
		print(val,end=" ")
