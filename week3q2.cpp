#include<bits/stdc++.h>
using namespace std;
int selection_sort(int n,int arr[])
{
    int swap1=0,comp=0;
    for(int i=0;i<n-1;i++)
    {       swap1++;
        for(int j=i+1;j<n;j++)
        {     comp++;
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n comparison = "<<comp<<endl;
      cout<<" swaps = "<<swap1<<endl;
}
int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        selection_sort(n,arr);
        T--;
    }
}
