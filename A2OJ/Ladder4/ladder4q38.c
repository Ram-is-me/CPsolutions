#include<stdio.h>
#include<stdlib.h>
int main()
{
  int p1,p2;
  scanf("%d %d", &p1, &p2);
  int d=1;
  int diffa,diffb;
  int ans1=0,ans2=0,ans3=0;
  for(;d<7;++d)
  {
    diffa=abs(d-p1);
    diffb=abs(d-p2);
    if(diffa<diffb)
    {
      ans1++;
    }
    else if(diffa==diffb)
    {
      ans2++;
    }
    else
    {
      ans3++;
    }
  }
  printf("%d %d %d", ans1, ans2, ans3);
  return 0;
}
