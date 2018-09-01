#include <stdio.h>
int main()
{
  int n,c;
  scanf("%d %d", &n, &c);
  int a[100];
  for(int i=0;i<n;++i)
  scanf("%d", &a[i]);
  int profit,maxprofit=0;
  for(int i=1;i<n;++i)
  {
    profit=a[i-1]-a[i]-c;
    if(profit>maxprofit)
    maxprofit=profit;
  }
  printf("%d\n", maxprofit);
  return 0;
}
