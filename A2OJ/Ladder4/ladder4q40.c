#include<stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  int a[100];
  for(int i=0;i<n;++i)
    scanf("%d", &a[i]);
  int chest=0,biceps=0,back=0;
  for(int i=0;i<n;++i)
  {
    if(i%3==0)
    {
      chest+=a[i];
    }
    else if(i%3==1)
    {
      biceps+=a[i];
    }
    else
    {
      back+=a[i];
    }
  }
  if(chest>=biceps && chest>=back)
  {
    printf("chest");
  }
  else if(biceps>=chest && biceps>=back)
  {
    printf("biceps");
  }
  else
  {
    printf("back");
  }
  return 0;
}
