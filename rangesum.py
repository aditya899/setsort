    n,q=map(int,input().split())
    li=list(map(int,input().split()))
    for i in range(1,n):
        li[i]=li[i-1]+li[i]
    li.insert(0,0)
    while(q>0):
        s=input().split()
        a=int(s[0])
        b=int(s[1])
        print(li[b]-li[a-1])
        q-=1
