#include<bits/stdc++.h>
using namespace std;
void linearSearch(int arr[],int n,int key)
{
     bool check=false;
     int c=0;
    for(int i=0;i<n;i++)
    {     c++;
        if(arr[i]==key)
        {
            check=true;
            break;
        }

    }
    cout<<check<<endl;
    cout<<c<<endl;
}
int main()
{
    int n,key;
    cout<<"Enter size : -";
    cin>>n;
    int arr[n];
    cout<<"Enter elements :- ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    cout<<"Enter key ";
    cin>>key;
    linearSearch(arr,n,key);
}
