#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long arr[n];
    long arr2[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        arr2[i]=arr[i];
    }
    sort(arr2,arr2+n);
    vector<long> indices;
    // indices.push_back()
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr2[i])
        {
            indices.push_back(i);
        }
    }

    int count=0;
    if(indices.size()==0)
    {
        cout<<"yes\n";
        cout<<1<<" "<<1;
        return 0;
    }
    for(int i=0;i<indices.size()-1;i++)
    {
        if(indices[i+1]-indices[i]!=1)
        {
            if(count!=1) count++;
            else
            {
                cout << "no\n";
                cout<<indices[i+1]<<" "<<indices[i]<<endl;
                return 0;
            }

        }
    }
    //Now must check if the segment is palindromic
    long length = indices[indices.size()-1] - indices[0];
    for(long index = indices[0],index2=indices[0]+length;index<indices[0]+length;index++,index2--)
    {
        if(arr[index]!=arr2[index2])
        {
            cout<<"no"<<endl;
            return 0;
        }
    }
    cout<<"yes\n";
    cout<<indices[0]+1<<" "<<indices[indices.size()-1]+1;
    return 0;
}
