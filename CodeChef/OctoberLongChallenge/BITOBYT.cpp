#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int q=0;
    int n;
    long bit,nibble,byte;
    while(q!=t)
    {
        cin>>n;
        bit=0;
        byte=0;
        nibble=0;
        int div25=n/26;
        bit+=pow(2,div25);
        int rem25=n%26;
        if(rem25<=2 && rem25!=0)
        {
            //OUTPUT in  bits
            cout<<bit<<" "<<nibble<<" "<<byte<<endl;
        }
        else if(rem25<=10 && rem25!=0)
        {
            //OUTPUT in nibble
            nibble=bit;
            bit=0;
            byte=0;
            cout<<bit<<" "<<nibble<<" "<<byte<<endl;
        }
        else if(rem25==0)
        {
            byte=bit/2;
            bit=0;
            nibble=0;
            cout<<bit<<" "<<nibble<<" "<<byte<<endl;
        }
        else
        {
            //OUTPUT in bytes
            byte=bit;
            bit=0;
            nibble=0;
            cout<<bit<<" "<<nibble<<" "<<byte<<endl;
        }
        q++;
    }
    return 0;
}