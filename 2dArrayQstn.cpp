#include<bits/stdc++.h>
using namespace std;

void Arr2dIn(int arr[][100], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
}

void Arr2dOut(int arr[][100], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){

    

    /*Matrix Multiplication

    Given a nxm matrix.
    Write an algorithm to find that the given value exists in the matrix or not.
    Integers in each row are sorted in ascending from left to right.
    Integers in each column are sorted in ascending from top to bottom.
            Example:- 
            Input:
                1.
                    4 4    N= 5
                        1 4 7 11 15
                        2 5 8 12 19 
                        3 6 9 16 22
                        10 13 14 17 24
                        18 21 23 26 30
                2.
                    4 4    N= 20
                        1 4 7 11 15
                        2 5 8 12 19 
                        3 6 9 16 22
                        10 13 14 17 24
                        18 21 23 26 30
            Output: 
                1. True
                2. False
    //*

    //Solution

    int n, m, k;
    cin>>n>>m>>k;
    int arr[100][100];
    Arr2dIn(arr, n, m);
    int r=0, c=m-1;
    while(r < n || c >= 0){
        if(arr[r][c] == k){
        cout<<"True! Element present in given Matrix."<<endl;
        return 0;
        }
        else if(arr[r][c] < k){
            r++;
        }
        else{
            c--;
        }
    }
    cout<<"False! Element not present in given Matrix."<<endl;

    // */

    /* Multiplication of Matrixes
        Example:- 
            Input:
                M1
                    3 4
                        2 4 1 2 
                        8 4 3 6 
                        1 7 9 5
                    
                M2
                    4 3
                        1 2 3 
                        4 5 6
                        7 8 9
                        4 5 6

            Output: 
                    33 42 51
                    69 90 111
                    112 134 156
    // *

    //Solution

    int n1, m1, n2, m2;
    cin>>n1>>m1;
    int arr1[100][100];
    Arr2dIn(arr1, n1, m1);
    cin>>n2>>m2;
    int arr2[100][100];
    Arr2dIn(arr2, n2, m2);
    if(m1==n2){
        int result[100][100];
        for(int i=0; i<n1; i++){
            for(int j=0; j<m2; j++){
                result[j][i]=0;
                    for(int k=0; k<m1; k++){
                        result[j][i]+= arr1[j][k] * arr2[k][i];  
                    }
            }
        }
        cout<<"1st Matrix"<<endl;
        Arr2dOut(arr1, n1, m1);
        cout<<"2nd Matrix"<<endl;
        Arr2dOut(arr2, n2, m2);
        cout<<"Resultant Matrix"<<endl;
        Arr2dOut(result, n1, m2);
    }
    else{
        cout<<"Matrix Multiplication Not Possible due to Columns of 1st Matrix is not equal to Rows of 2nd Matrix."<<endl;
    }
    // */

    /* Transpose of a Matrix 
        Example:- 
            Input: 
                4 4
                    11 12 13 14
                    21 22 23 24
                    31 32 33 34
                    41 42 43 44
            
            Output: 
                    11 21 31 41
                    12 22 32 42
                    13 23 33 43
                    14 24 34 44

    // *

    //Solution

    int n, m;
    cin>>n>>m;
    int arr[100][100];
    Arr2dIn(arr, n, m);

    for(int i= 0; i<n; i++){
        for(int j=i+1; j<m; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
    Arr2dOut(arr, n, m);
    
    // */

    /* Spiral Order Matrix Traversal

    // *

    // Solution

    int n,m;
    cin>>n>>m;
    int arr[100][100];
    Arr2dIn(arr, n, m);

    int rs=0, cs=0, re=n-1, ce=m-1;

    while(rs<re && cs<ce){

        // ---->

        for(int i=cs; i<=ce; i++){
            cout<<arr[rs][i]<<" ";
        }
        rs++;

        //  |
        //  |
        //  V

        for(int i=rs; i<=re; i++){
            cout<<arr[i][ce]<<" ";
        }
        ce--;

        // <----

        for(int i=ce; i>=cs; i--){
            cout<<arr[re][i]<<" ";
        }
        re--;

        // ^
        // |
        // |

        for(int i=re; i>=rs; i--){
            cout<<arr[i][cs]<<" ";
        }
        cs++;
    }

    // */

    /* Taking Input and Printing the 2D Array.

    // *
    // Solution

    int n,m;
    cin>>n>>m;
    int arr[100][100];
    Arr2dIn(arr, n, m);
    Arr2dOut(arr, n, m);

    // */

    return 0;
}