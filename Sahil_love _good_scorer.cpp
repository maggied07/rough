#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int sumof(int arr[])
{
    int i,n=sizeof(arr)/sizeof(arr[0]),sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}

int main()
{
    int t,i;
    cin>>t;
    int sum_arr1[t];
    int sum_arr2[t];
    for(i=0;i<t;i++)
    {
        int a,b;
        cin>>a>>b;
        int arr1[a],arr2[b];
        sum_arr1[i]= sumof(arr1);   
        sum_arr2[i]=sumof(arr2);
    }
    for(i=0;i<t;i++)
    {
        if(sum_arr1[i]>>sum_arr2[i])
        cout<<"C1"<<endl;
        else
        cout<<"C2"<<endl;
    }
}