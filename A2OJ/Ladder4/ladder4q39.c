#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n;
  scanf("%d", &n);
  int *a=malloc(n*sizeof(int));
  for(int i=0;i<n;++i)
    scanf("%d", &a[i]);
  int diff,mindiff,temp;
  for(int i=1;i<n-1;++i)
  {
    diff=a[i+1]-a[i-1];
    temp=a[i+1]-a[i-1];
    for(int k=0;k<n-1;++k)
    {
      if(k==i)
      {
        temp=a[k+1]-a[k-1];
        if(temp>diff)
        diff=temp;
      }
      else if(k==i-1)
      {
        temp=a[k+2]-a[k];
        if(temp>diff)
        diff=temp;
      }
      else
      {
        temp=a[k+1]-a[k];
        if(temp>diff)
        diff=temp;
      }
    }
    if(i==1)
    mindiff=diff;
    else
    if(diff<mindiff)
    mindiff=diff;
  }
  printf("%d\n", mindiff);
  return 0;
}
