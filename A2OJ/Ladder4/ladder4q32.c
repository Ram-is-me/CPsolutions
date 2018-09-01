#include<stdio.h>
int main()
{
  long n,v;
  scanf("%ld %ld", &n, &v);
  int ans[50];
  long int temp[50][50]={0};
  int k[50];
  for(int i=0;i<n;++i)
  {
    scanf("%d", &k[i]);
    for(int j=0;j<k[i];++j)
    scanf("%ld", &temp[i][j]);
    getchar();
  }
  // for(int i=0;i<n;++i)
  // {
  //   for(int j=0;temp[i][j]!=0;++j)
  //   {
  //     printf("%ld ", temp[i][j]);
  //   }
  //   printf("\n");
  // }
  for(int i=0;i<n;++i)
  {
    for(int j=0;j<k[i];++j)
    {
      if(v>temp[i][j])
      ans[i]=1;
    }
  }
  int counter=0;
  for(int i=0;i<n;++i)
  if(ans[i]==1)
  counter++;
  printf("%d\n", counter);
  for(int i=0;i<n;++i)
  if(ans[i]==1)
  printf("%d ", i+1);
  return 0;
}
