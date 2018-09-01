def coprime(n1,n2):
    valid=1
    i=2
    while(i<=30000):
        if(n1%i==0 and n2%i==0):
            valid=0
            break
        i+=1
    if valid==1:
        return 1
    else:
        return 0
listing=[int(x) for x in raw_input().split()]
l=listing[0]
r=listing[1]
i=l
j=l+1
k=l+2
while i<=r-2:
    while j<=r-1:
        while k<=r:
            if(coprime(i,j)==1 and coprime(j,k)==1 and coprime(i,k)==0):
                print i,j,k
                exit()
            k+=1
        j+=1
    i+=1
print -1
exit();
