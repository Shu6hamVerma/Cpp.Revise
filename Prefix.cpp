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


int main(){


/* Max till i */
    int n;
    cin>>n;
    int arr[n];
    arrIn(arr, n);
    int mx= INT16_MIN;
    for(int i=0; i<n; i++){
        arr[i]= max(mx, arr[i]);
        mx<arr[i]? mx= arr[i]: mx;
    }
    arrOut(arr, n);

    return 0;
}