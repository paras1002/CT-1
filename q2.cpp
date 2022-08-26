// Name : Paras Mahajan
// Roll No : 2010990516
// Set : 04
// Question No : 2


#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool Array(int arr[],int n){
    
    sort(arr,arr+n);
    
    for(int i=1;i<n;i++){
        if(arr[i] != arr[i-1]+1)
        {
            return false;
        }
    }
    return true;
}


int main(){
    int arr[]={1,5,4,2,0,3,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    if(Array(arr , n)==true)
    {
        cout<<"The array contains consecutive integer";
    }
    else
    {
        cout<<"The array does not contain consecutive integer";
    }
    
    
    
}
