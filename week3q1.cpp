#include<bits/stdc++.h>
using namespace std;
void Insertion_sort(int n,int arr[])
{    int c=0,s=0;
    for(int i=1;i<n;i++)
    {
        int curr=arr[i];
        int j=i-1;
        while(arr[j]>curr &&j>=0)
        {
            arr[j+1]=arr[j];
            j--;
            c++;
        }
        arr[j+1]=curr;
        s++;
    }
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<"comparision = "<<c<<endl;
        cout<<"shifts = "<<c+s<<endl;


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
        Insertion_sort(n,arr);
        T--;
    }
}
