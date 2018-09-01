#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,q;
  cin>>n;
  cin>>q;
  long long strength[300000];
  long long arrows[300000];
  for(int i=0;i<n;i++)
  cin>>strength[i];
  for(int i=0;i<q;i++)
  cin>>arrows[i];
  long long cumustr[300000];
  cumustr[0]=strength[0];
  for(int i=1;i<n;i++)
  cumustr[i]=cumustr[i-1]+strength[i];
  long arrowpos=0;
  long curarrow=0;
  while(arrowpos<q)
  {
    if(curarrow==0)
    curarrow=arrows[arrowpos++];
    else
    curarrow+=arr  //Some shit is there
    
  }
  return 0;
}
