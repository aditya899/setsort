
def subset(m,n, arr1, arr2):
    
    if n>m:
        return "NO"
    hash_a1 = {}
    for i,m in enumerate(arr1):
        hash_a1[m] = i
    
    for n in arr2:
        if n not in hash_a1:
            return "NO"
    
    return "YES"
    
    
    
    
test_case = int(input())
for i in range(test_case):
    m,n = list(map(int, input().split()))
    arr1 = list(map(int, input().split()))
    arr2 = list(map(int, input().split()))
    result = subset(m,n, arr1, arr2)
    print (result)
