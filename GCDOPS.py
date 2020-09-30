for _ in range(int(input())):
    n = int(input())
    l = list(map(int,input().split()))
    for i in range(n):
        if l[i]>0 and (i+1)%l[i]==0 and l[i]<=(i+1):
            continue
        else:
            print('NO')
            break
    else:
        print('YES')
