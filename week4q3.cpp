#include<iostream>
using namespace std;
void swap1(int arr[],int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

int partition1(int arr[],int l,int r)
    {
        int pivot=arr[r];
        int i=l-1;
        for(int j=l;j<r;j++)
        {
            if(arr[j]<pivot)
            {
                i++;
                swap1(arr,i,j);
            }
        }
        swap1(arr,i+1,r);
        return i+1;
    }

void Quick_sort(int arr[],int l,int r)
{
    if(l<r)
    {
        int pi=partition1(arr,l,r);
        Quick_sort(arr,l,pi-1);
        Quick_sort(arr,pi+1,r);
    }
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Quick_sort(arr,0,n-1);

        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
}
