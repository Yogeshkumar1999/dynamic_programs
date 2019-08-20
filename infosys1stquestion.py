n, q = map(int,input().split())
a = list(map(int, input().split()))
size = len(a)
count = 0
while(len(a) - size !=1):
    if(count == 0):
        for i in range(0, size, 2):
            a.append(a[i] + a[i+1])
        count += 1
        continue
        
    count+=1
    
    if(count%2 != 0):
        size1 = len(a)
        for i in range(size, len(a), 2):
            a.append(a[i] + a[i+1])
        del a[size:size1]
        
        
    else:
        size1 = len(a)
        for i in range(size, len(a), 2):
            a.append(abs(a[i] - a[i+1]))
        del a[size:size1]
        
print(a[size])

while(q > 0):
    r, num = map(int, input().split())
    a[r - 1] = num
    size = len(a)
    count = 0
    while(len(a) - size !=1):
        if(count == 0):
            for i in range(0, size, 2):
                a.append(a[i] + a[i+1])
            count += 1
            continue
        
        count+=1
    
        if(count%2 != 0):
            size1 = len(a)
            for i in range(size, len(a), 2):
                a.append(a[i] + a[i+1])
            del a[size:size1]
        
        
        else:
            size1 = len(a)
            for i in range(size, len(a), 2):
                a.append(abs(a[i] - a[i+1]))
            del a[size:size1]
        
    print(a[size])
    q-=1





