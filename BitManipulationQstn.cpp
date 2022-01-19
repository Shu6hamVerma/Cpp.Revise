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


    int n, m, k, j;
    cin>>n>>m;

    for(int i=0; i<m; i++){
        cout<<n<<" ";
        n= n>>1;
    }

    /*Find the 2 Unique Number in array. {2 4 6 3 7 4 6 2} *
    cout<<"2 Unique Number"<<endl;
    int n;
    cin>>n;
    int arr[100];
    arrIn(arr, n);
    int XoR= 0;
    for(int i=0; i<n; i++){
        XoR= XoR ^ arr[i]; 
    }
    cout<<XoR<<endl;
    // */

    /*Find the 1 Unique Number in array. {2 4 6 3 4 6 2} *
    cout<<"1 Unique Number"<<endl;
    int n;
    cin>>n;
    int arr[100];
    arrIn(arr, n);
    int XoR= 0;
    for(int i=0; i<n; i++){
        XoR= XoR ^ arr[i]; 
    }
    cout<<XoR<<endl;
    // */

    /*Check if a given number is power of 2. *
    cout<<"Power Of 2"<<endl;
    int n;
    cin>>n;
    (n && !(n & (n-1)))? cout<<"True!"<<endl : cout<<"False!"<<endl ;
    // */

    return 0;
}