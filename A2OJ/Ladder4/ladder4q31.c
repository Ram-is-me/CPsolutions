#include<stdio.h>
int main()
{
  int r,c;
  scanf("%d %d", &r, &c);
  getchar();
  char a[10][10];
  for(int i=0;i<r;++i)
  {
    for(int j=0;j<c;++j)
    {
      scanf("%c", &a[i][j]);
    }
    getchar();
  }
  // for(int i=0;i<r;++i)
  // {
  //   for(int j=0;j<c;++j)
  //   {
  //     printf("%c", a[i][j]);
  //   }
  //   printf("\n");
  // }
  int b[10][10]={0};
  for(int i=0;i<r;++i)
  {
    for(int j=0;j<c;++j)
    {
      if(a[i][j]=='S')
      {
        b[i][j]++;
      }
    }
  }
  int count=0;
  // for(int i=0;i<r;++i)
  // {
  //   for(int j=0;j<c;++j)
  //   {
  //     printf("%d ", b[i][j]);
  //   }
  //   printf("\n");
  // }
  int es=0,valid=0;
  for(int i=0;i<r;++i)
  {
    valid=0;
    es=0;
    for(int j=0;j<c;++j)
    {
      if(b[i][j]==0)
      {
        valid=1;
      }
      if(b[i][j]==1)
      {
        es=1;
        break;
      }
    }
    if(es==0 && valid==1)
    {
      for(int k=0;k<c;++k)
      {
        b[i][k]--;
        if(b[i][k]==-1)
        count++;
      }
    }
  }
  for(int i=0;i<c;++i)
  {
    valid=0;
    es=0;
    for(int j=0;j<r;++j)
    {
      if(b[j][i]==0)
      {
        valid=1;
      }
      if(b[j][i]==1)
      {
        es=1;
        break;
      }
    }
    if(es==0 && valid==1)
    {
      for(int k=0;k<r;++k)
      {
        b[k][i]--;
        if(b[k][i]==-1)
        count++;
      }
    }
  }
  printf("%d\n", count);
  return 0;
}
