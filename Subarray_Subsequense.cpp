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

void arrOut1(int arr[], int a, int b){
    for(int i=a; i<=b; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void SubArray(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            arrOut1(arr, i, j);
        }
        cout<<endl;
    }
}



int main(){
/* SubArray

    int n;
    cin>>n;
    int arr[n];
    arrIn(arr, n);
    SubArray(arr, n);

*/



    return 0;
}
