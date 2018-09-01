#import random
def quicksort(a,l,r,b):
    if l < r:
        q=partition(a,l,r,b)
        quicksort(a,l,q-1,b)
        quicksort(a,q+1,r,b)

def partition(a,l,r,b):
    x=a[r]
    i=l-1
    j=l
    while(j<r):
        if a[j]<x:
            i+=1
            temp=a[i]
            a[i]=a[j]
            a[j]=temp
            temp1=b[i]
            b[i]=b[j]
            b[j]=temp1
        j+=1
    temp=a[i+1]
    a[i+1]=a[r]
    a[r]=temp
    temp1=b[i+1]
    b[i+1]=b[r]
    b[r]=temp1
    return i+1
'''
def randpart(a,l,r,b): #randpart is not used
    q=random.randint(0,10000)
    q%=(l-r)
    q+=l
    temp=a[r]
    a[r]=a[q]
    a[q]=temp
    temp1=b[r]
    b[r]=b[q]
    b[q]=temp1
    return partition(a,l,r,b)
'''
n=input()
i=0
l1=[]
l2=[]
while(i<n):
    k=[int(x) for x in raw_input().split()]
    l1.append(k[0])
    l2.append(k[1])
    i+=1
quicksort(l1,0,n-1,l2)
for i in range(n-1):
    if(l2[i]>l2[i+1]):
        print "Happy Alex"
        exit()
print "Poor Alex"
