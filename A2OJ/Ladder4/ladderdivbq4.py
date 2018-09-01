import math
l=[int(x) for x in raw_input().split()]
n=l[0]
m=l[1]
ndiv=m-1
def round(k):
    ksize=k*10
    size=0
    if int(ksize)%10>=5:
        size=math.ceil(k)
    else:
        size=math.floor(k)
    return size
def comb(n,m):
    ans=(n*(n-1))/2
    return ans
def maxno(n,ndiv):
    n=n-ndiv
    #print n
    k=comb(n,2)
    #print k
    return k
def minno(n,ndiv):
    kmn=((n/m)*((n/m)-1))/2
    if n%m==0:
        kmn*=m
    else:
        kmn*=m-(n%m)
        lft=(((n/m)+1)*(n/m))/2
        kmn+=lft*(n%m)
    return kmn
a1=maxno(n,ndiv)
a2=minno(n,ndiv)
print long(a2),long(a1)

