#include<bits/stdc++.h>
using namespace std;

bool RatIsSafe(int** arr, int x, int y, int n){
    if(x<n && y<n && arr[x][y]==1){
        return true;
    }
    return false;
}

bool RatInMaze(int** arr, int x, int y, int n, int** SolArr){
    if(x==n-1 && y==n-1){ 
        SolArr[x][y]=1;
        return true;
    }

    if(RatIsSafe(arr, x, y, n)){
        SolArr[x][y]= 1;
        if(RatInMaze(arr, x+1, y, n, SolArr)) return true;
        if(RatInMaze(arr, x, y+1, n, SolArr)) return true;
        SolArr[x][y]=0;
        return false;
    }
    return false;
}

bool N_QueenIsSafe(int** arr, int x, int y, int n){
    for(int row=0; row<x; row++){
        if(arr[row][y]==1){
            return false;
        }
    }
    int row= x;
    int col= y;

    while(row>=0 && col>=0){
        if(arr[row][col]==1) return false;
        row--;
        col--;
    }

    row= x;
    col= y;

    while(row>=0 && col<n){
        if(arr[row][col]==1) return false;
        row--;
        col++;
    }
    return true;
}

bool N_Queen(int** arr, int x, int n){
    if(x==n) return true;

    for(int col=0; col<n; col++){
        if(N_QueenIsSafe(arr, x, col, n)){
            arr[x][col]=1;
            if(N_Queen(arr, x+1, n)) return true;
            arr[x][col]=0;
        }
    }
    return false;
}

int main(){

    /*N-Queen...*/
    //Solution
    int n; cin>>n;

    int** arr= new int*[n];
    for(int i=0; i<n; i++){
        arr[i]= new int[n];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            arr[i][j]=0;
        }
    }

    if(N_Queen(arr, 0, n)){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<arr[i][j]<<" ";
            }cout<<endl;
        }
    }

    //*/

    /* Rat In Maze...*
    //Solution
    int n; cin>>n;

    int** arr= new int*[n];
    for(int i=0; i<n; i++){
        arr[i]= new int[n];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    
    int** SolArr= new int*[n];
    for(int i=0; i<n; i++){
        SolArr[i]= new int[n];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            SolArr[i][j]=0;
        }
    }cout<<endl;

    if(RatInMaze(arr, 0, 0, n, SolArr)){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<SolArr[i][j]<<" ";
            }cout<<endl;
        }
    }
    //*/

    return 0;
}