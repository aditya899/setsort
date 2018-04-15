imp=input()
no=list(map(str,input().split()))
for i in range(len(no)-1):
    for j in range(i+1,len(no)):
        if(no[i]+no[j]<no[j]+no[i]):
            temp=no[i]
            no[i]=no[j]
            no[j]=temp
print(''.join(no))
