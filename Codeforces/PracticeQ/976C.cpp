#include<bits/stdc++.h>
using namespace std;
void merge(long long arr[], long long arr2[], long long l, long long m, long long r)
{
    long long i, j, k;
    long long n1 = m - l + 1;
    long long n2 =  r - m;
    long long L[n1], R[n2];
    long long L2[n1], R2[n2];
    for (i = 0; i < n1; i++)
    {
      L[i] = arr[l + i];
      L2[i] = arr2[l+i];
    }
    for (j = 0; j < n2; j++)
    {
      R[j] = arr[m + 1+ j];
      R2[j] = arr2[m+1+j];
    }
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            arr2[k] = L2[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            arr2[k] = R2[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        arr2[k] = L2[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        arr2[k] = R2[j];
        j++;
        k++;
    }
}

void mergeSort(long long arr[], long long arr2[], long long l, long long r)
{
    if (l < r)
    {
        long long m = l+(r-l)/2;
        mergeSort(arr, arr2, l, m);
        mergeSort(arr, arr2, m+1, r);

        merge(arr, arr2, l, m, r);
    }
}
int main()
{
  long long n;
  cin>>n;
  long long v1[n];
  long long v2[n];
  long long t1,t2;
  for(long long i=0;i<n;i++)
  {
    cin>>t1;
    v1[i]=t1;
    cin>>t2;
    v2[i]=t2;
  }

  mergeSort(v1,v2,0,n-1);

  long long p1=-1,p2=-1,p11=-1,p12=-1;
  long long posin,posout;
  long long i;
  for(i=1;i<n;i++)
  {
    // cout<<v1[i]<<endl;
    // cout<<v1[i-1]<<endl;
    // cout<<v2[i]<<endl;
    // cout<<v2[i-1]<<endl;

    if(v2[i]<=v2[i-1])
    {
      p1=v1[i];
      p2=v2[i];
      p11=v1[i-1];
      p12=v2[i-1];
      // posin=i;
      // posout=i+1;
      break;
    }
  }
  if(i==n&&p1<0&&p2<0&&p11<0&&p12<0)
  {
    cout<<-1<<" "<<-1<<endl;
  }
  else
  {
    for(int i=0;i<n;i++)
    {
      if(v1[i]==p1 && v2[i]==p2)
      {
        for(int j=0;j<n;j++)
        {
          if(v1[j]==p11 && v2[j]==p12)
          {
            // if(i<j)
            // {
            //   cout<<i<<" "<<j<<endl;
            //   j+=n;
            //   i+=n;
            // }
            // else if(i>j)
            // {
            //   cout<<j<<" "<<i<<endl;
            //   i+=n;
            //   j+=n;
            // }
            if(i!=j)
            {
              cout<<i+1<<" "<<j+1<<endl;
              i+=n;
              j+=n;
            }
          }
        }
      }
    }
  }
  return 0;
}
