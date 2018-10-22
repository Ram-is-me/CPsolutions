#include<bits/stdc++.h>
using namespace std;
long minSum(int arr[], int n, int k)
{
    long res=0;
    for(int i=0;i<k;i++)
    {
        res+=arr[i];
    }

    long cursum=res;
    for(int i=k;i<n;i++)
    {
        cursum +=arr[i]-arr[i-k];
        res=min(res,cursum);
    }
    return res;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int board[n][m];
    char input[m];
    for(int i=0;i<n;i++)
    {
        cin>>input;
        for(int j=0;j<m;j++)
        {
            if(input[j]=='0')
            board[i][j]=0;
            else if(input[j]=='1')
            board[i][j]=1;
        }
        
    }
    int inversion[n];
    int tempcount,tempcount2;
    for(int i=0;i<n;i++)
    {
        tempcount=0;
        tempcount2=0;
        for(int j=0;j<m;j++)
        {
            if(j%2==0 && board[i][j]==1)   //Starts with 0
            {
                tempcount++;
            }
            if(j%2==1 && board[i][j]==0)
            {
                tempcount++;
            }
        }

        for(int j=0;j<m;j++)
        {
            if(j%2==0 && board[i][j]==0)   //Starts with 1
            {
                tempcount2++;
            }
            if(j%2==1 && board[i][j]==1)
            {
                tempcount2++;
            }
        }
        inversion[i]=min(tempcount,tempcount2);
    }
    int q;
    cin>>q;
    int ques=0;
    long queries;
    int size;
    while(ques!=q)
    {
        cin>>queries;
        size=n;
        long minsum=0;
        while(size>=1)
        {
            minsum=minSum(inversion,n,size);
            if(minsum<=queries)
            {
                cout<<size<<endl;
                break;
            }
            size--;
        }
        ques++;
    }
    return 0;
}