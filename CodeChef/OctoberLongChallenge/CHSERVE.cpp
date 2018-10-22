#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int q=0;
    long p1,p2,k;
    long sum,output;
    while(q<n)
    {
        cin>>p1>>p2>>k;
        //p1 is chef and p2 is cook
        sum=p1+p2;
        output=((double)sum)/k;
        if(output%2==1)
        {
            cout<<"COOK\n";
        }
        else
        {
            cout<<"CHEF\n";
        }
        q++;
    }
    return 0;
}