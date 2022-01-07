#include <bits/stdc++.h>
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

void SelectionSort(int arr[], int n){
    for(int i=0; i<n; i++){
        int minNo= arr[i];
        int k;
        for(int j=i+1; j<n; j++){
            if(minNo>arr[j]){
                minNo= arr[j];
                k=j;
            }
        }
        swap(arr[i], arr[k]);
    arrOut(arr, n);

    }
}

void BubbleSort(int arr[], int n){
    for(int i=n-1; i>=0; i--){
        for(int j=0; j<i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
        arrOut(arr, n);
    }
}

void InsertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int current= arr[i];
        int j;
        for(j=i-1; (arr[j]>current) && j>=0; j--){
                arr[j+1]=arr[j];
        }
        arr[j+1]= current;
        arrOut(arr, n);
    }
}

int main(){

/*Selection Sort
    6 12 45 23 51 19 8

    int n;
    cin>>n;
    int arr[n];
    arrIn(arr, n);
    SelectionSort(arr, n);
    arrOut(arr, n);

*/

/*Bubble Sort

    int n;
    cin>>n;
    int arr[n];
    arrIn(arr, n);
    BubbleSort(arr, n);
    arrOut(arr, n);

*/

/*Insertion Sort

    int n;
    cin>>n;
    int arr[n];
    arrIn(arr, n);
    InsertionSort(arr, n);
    arrOut(arr, n);

*/


    return 0;
}