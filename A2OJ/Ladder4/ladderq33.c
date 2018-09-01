#include<stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  getchar();
  char a[100][100];
  for(int i=0;i<n;++i)
  {
    for(int j=0;j<n;++j)
    {
      scanf("%c", &a[i][j]);
    }
    getchar();
  }
  int ocounter=0;
  for(int i=1;i<n-1;++i)
  {
    ocounter=0;
    for(int j=1;j<n-1;++j)
    {
      if(a[i-1][j]=='o')
      ocounter++;
      if (a[i][j-1]=='o')
      ocounter++;
      if (a[i+1][j]=='o')
      ocounter++;
      if (a[i][j+1]=='o')
      ocounter++;
    }
    if(ocounter%2!=0)
    {
      printf("NO");
      return 0;
    }
  }
  ocounter=0;
  for(int i=1;i<n-1;i++)
  {
    ocounter=0;
    if(a[0][i+1]=='o')
    ocounter++;
    if(a[1][i]=='o')
    ocounter++;
    if(a[0][i-1]=='o')
    ocounter++;
    if(ocounter%2!=0)
    {
      printf("NO");
      return 0;
    }
  }
  ocounter=0;
  for(int i=1;i<n-1;i++)
  {
    ocounter=0;
    if(a[i+1][0]=='o')
    ocounter++;
    if(a[i][1]=='o')
    ocounter++;
    if(a[i-1][0]=='o')
    ocounter++;
    if(ocounter%2!=0)
    {
      printf("NO");
      return 0;
    }
  }
  ocounter=0;
  for(int i=1;i<n-1;i++)
  {
    ocounter=0;
    if(a[n-1][i+1]=='o')
    ocounter++;
    if(a[n-2][i]=='o')
    ocounter++;
    if(a[n-1][i-1]=='o')
    ocounter++;
    if(ocounter%2!=0)
    {
      printf("NO");
      return 0;
    }
  }
  ocounter=0;
  for(int i=1;i<n-1;i++)
  {
    ocounter=0;
    if(a[i+1][n-1]=='o')
    ocounter++;
    if(a[i][n-2]=='o')
    ocounter++;
    if(a[i-1][n-1]=='o')
    ocounter++;
    if(ocounter%2!=0)
    {
      printf("NO");
      return 0;
    }
  }
  ocounter=0;
  if(a[0][1]=='o')
  ocounter++;
  if(a[1][0]=='o')
  ocounter++;
  if(ocounter%2!=0)
  {
    printf("NO");
    return 0;
  }
  ocounter=0;
  if(a[0][n-2]=='o')
  ocounter++;
  if(a[1][n-1]=='o')
  ocounter++;
  if(ocounter%2!=0)
  {
    printf("NO");
    return 0;
  }
  ocounter=0;
  if(a[n-1][1]=='o')
  ocounter++;
  if(a[n-2][0]=='o')
  ocounter++;
  if(ocounter%2!=0)
  {
    printf("NO");
    return 0;
  }
  ocounter=0;
  if(a[n-1][n-2]=='o')
  ocounter++;
  if(a[n-2][n-1]=='o')
  ocounter++;
  if(ocounter%2!=0)
  {
    printf("NO");
    return 0;
  }
  printf("YES");
  return 0;
}
