    n,k = map(int,input().split())
    dic = {}
    lis = list(map(int,input().split()))
    flag = 0
    for i in lis:
    	if((k-i) in dic):
    		print("yes")
    		flag = 1
    		exit()
    	else:
    		dic[i] = 1
    print("no")
