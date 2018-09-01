#include <stdio.h>
int main()
{
  int n,k;
  scanf("%d %d", &n, &k);
  int  joy,maxjoy=0,f,t;
  for(int i=0;i<n;++i)
  {
    scanf("%d %d", &f, &t);
    if(t>k)
    {
      joy=f-(t-k);
    }
    else
    {
      joy=f;
    }
    if(i==0)
    {
      maxjoy=joy;
    }
    else
    {
      if(joy>maxjoy)
      {
        maxjoy=joy;
      }
    }
  }
  printf("%d\n", maxjoy);
  return 0;
}
