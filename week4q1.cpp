#include<bits/stdc++.h>
using namespace std;
 int comp=0;
long long Merge(int arr[],int l,int mid,int r)
{   long long  inv=0;
    int n1=mid-l+1;
    int n2=r-mid;

    int a[n1];     //Temp Arrays
    int b[n2];

    for(int i=0;i<n1;i++)
    {
        a[i]=arr[l+i];
    }

    for(int i=0;i<n2;i++)
    {
        b[i]=arr[mid+1+i];
    }

    int i=0;
    int j=0;    // Taking two pointers
    int k=l;


    while(i<n1 && j<n2)
    {
         comp++;
        if(a[i]<=b[j])
        {
            arr[k]=a[i];
            i++;
            k++;
        }
        else{
            arr[k]=b[j];
            inv=inv+n1-i;  // logic of inversion
            k++;
            j++;
        }

    }

    while(i<n1)
    {
        arr[k]=a[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=b[j];
       j++;
        k++;
    }
    //cout<<"comparison = "<<comp<<endl;


    return inv;


}
long long merge_sort(int arr[],int l,int r)
{   int inv=0;
    if(l<r)
    {
        int mid=(l+r)/2;
        inv+= merge_sort(arr,l,mid);
        inv+=merge_sort(arr,mid+1,r);

        inv+=Merge(arr,l,mid,r);
    }
    return inv;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,st;
        cin>>n;
        int arr[n];
        comp=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        st=merge_sort(arr,0,n-1);
        cout<<"Inversion = "<<st<<endl;
        cout<<"comp "<<comp<<endl;

    }
}
