#include<bits/stdc++.h>
using namespace std;
void SOE(long n,long po, long[] arr)
{
  bool prime[n+1];
  memset(prime, true, sizeof(prime));
  for (long p=2; p*p<=n && p<po ; p++)
  {
    if (prime[p] == true)
    {
      for (long i=p*2; i<=n; i += p)
        prime[i] = false;
    }
  }
  long arrpos=0;
  for (int p=2; p<=n; p++)
  if (prime[p])
    arr[arrpos++]=p;
}
int prime(long answer)
{
  double limit = sqrt(answer);
  if()
  for(long i=2;i<limit;i++)
  {
    if(answer%i==0)
    return 0;
  }
  return 1;
}
int main()
{
  long p,y;
  cin>>p;
  cin>>y;
  long answer=y-1;
  do {
  if(answer>p && prime(answer))
  {
    cout<<answer;
    return 0;
  }
  else
  answer-=2;
  } while(answer>p);
  if(answer<=p) cout<<-1;
  return 0;
}
//Method is also wrong
