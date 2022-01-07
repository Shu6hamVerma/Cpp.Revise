#include<bits/stdc++.h>
using namespace std;

void arrIn(int arr[], int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;
}

void arrOut(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int KadanesAlgo(int arr[], int n){
    int curSum= 0;
    int maxSum= INT_MIN;
    for(int i=0; i<n; i++){
        curSum+= arr[i];
        if(curSum<0){
            curSum=0;
        }
        maxSum= max(curSum, maxSum);
    }
    return maxSum;
}

int main(){
    /* Maximum Subarray Sum - {1 2 3 -4 5}
    // *
    int n;
    cin>>n;
    int arr[n];
    arrIn(arr, n);
    int maxSum= KadanesAlgo(arr, n);

    // */

    /* Maximum Circular Subarray Sum - {-4 4 -6 6 10 -11 12}
    // */
    int n;
    cin>>n;
    int arr[n];
    arrIn(arr, n);
    int nonwarpsum= KadanesAlgo(arr, n);
    int totalSum=0;
    for(int i=0; i<n; i++){
        totalSum+= arr[i];
        arr[i]=-arr[i];
    }
    int warpSum= totalSum - (-KadanesAlgo(arr, n));
    cout<<max(warpSum, nonwarpsum)<<endl;

    // *

    return 0;
}