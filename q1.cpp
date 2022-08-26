// Name : Paras Mahajan
// Roll No : 2010990516
// Set : 04
// Question No : 1


#include<iostream>
#include<bits/stdc++.h>
using namespace std;


 
int minimumIndex(int arr[], int n)
{
    int minI = n;
 

    unordered_set<int> set;
    for (int i = n - 1; i >= 0; i--)
    {
        if (set.find(arr[i]) != set.end()) {
            minI = i;
        }
        else {
            set.insert(arr[i]);
        }
    }

    if (minI == n) {
        return -1;
    }

    return minI;
}
 
int main()
{
    int arr[] = {5, 6, 3, 4, 3, 6, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int minI = minimumIndex(arr, n);
    if (minI != n) {
        cout << "The minimum index of the repeating element is " << minI<<endl;
    }
    else {
        cout << "Invalid Input";
    }
 
    return 0;
}


