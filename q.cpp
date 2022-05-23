#include<bits/stdc++.h>
// #include<iostream>
using namespace std;

int main(){
    int n;
    while (cin>>n)
    {
        int arr[n];
        int sum=0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i+1; j++)
            {
                sum=sum+arr[j];
            }
                 
        }
        cout<<sum<<endl;
        
    }
    
    return 0;
}