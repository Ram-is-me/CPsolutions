#include<bits/stdc++.h>
using namespace std;
int main()
{
  set <char> s[10000];
  int n;
  cin>>n;
  string answer;
  int k=0,limit;
  char array[10000];
  int arraypos=0;
  for(int i=0;i<n;i++)
  {
    cin>>answer;
    limit=i;
    for(int j=0;j<answer.length();j++)
    {
      array[arraypos++]=answer[j];
    }
    int z=0;
    for(int q=0;q<arraypos;q++)
    {
      s[i].insert(array[q]);
    }
    for(;z<limit;z++)
    {
      if(!(s[z].empty())&&s[z]==s[i])
        s[i].clear();
    }
    arraypos=0;
  }
  int counter=0;
  for(int o=0;o<n;o++)
  {
    if(s[o].empty()==false)
    counter++;
  }
  cout<<counter;
  return 0;
}
