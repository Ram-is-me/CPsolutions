#include<bits/stdc++.h>
using namespace std;
int main()
{
  char C;
  long long rb=0,rs=0,rc=0;
  char input[100];
  cin>>input;
  for(int i=0;input[i]!='\0';i++)
  {
    if(input[i]=='B')
      rb++;
    else if(input[i]=='S')
      rs++;
    else
      rc++;
  }
  long long nb,ns,nc;
  cin>>nb;
  cin>>ns;
  cin>>nc;
  long long pb,ps,pc;
  cin>>pb;
  cin>>ps;
  cin>>pc;
  long long balance;
  cin>>balance;

  long long nohb,nohs,nohc;
  nohb=nb/rb;
  nohs=ns/rs;
  nohc=nc/rc;

  long long tmin=min(nohb,nohs);
  long long realmin=min(tmin,nohc);
  int state;
  if(realmin==nohb) state=1;
  else if(realmin==nohs) state=2;
  else if(realmin==nohc) state=3;

  long long answer=0;
  answer+=realmin;

  if(state==1)
  {
    long long secmin=min(nohs,nohc);
    
  }
  else if(state==2)
  {

  }
  else
  {

  }

  return 0;
}
