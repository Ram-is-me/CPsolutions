#include<stdio.h>
int coprime(long n1, long n2);
int main()
{
  long a,b,c,l,r,i,j,k;
  scanf("%ld %ld", &l, &r);
  for(i=l;i<=r-2;++i)
  {
    for(j=l+1;j<=r-1;++j)
    {
      for(k=l+2;k<=r;++k)
      {
        if(coprime(i,j)==1 && coprime(j,k)==1 && coprime(i,k)==0)
        {
          // printf("%d %d %d\n", coprime(i,j), coprime(j,k), coprime(i,k));
          printf("%ld %ld %ld", i, j, k);
          return 0;
        }
      }
    }
  }
  printf("-1");
  return 0;
}
int coprime(long n1, long n2)
{
  // int min=(n1>n2)?n2:n1;
  int valid=1;
  for(int i=2;i<=30;++i)
  {
    if(n1%i==0 && n2%i==0)
    {
      valid=0;
      break;
    }
  }
  if(valid==1)
  return 1;
  else
  return 0;
}
