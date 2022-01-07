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

void arrFix(int arr[], int n){
    for(int i=0; i<n; i++){
        arr[i]=-1;
    }
    cout<<endl;
}

void arrBool(bool arr[], int n){
    for(int i=0; i<n; i++){
        arr[i]= false;
    }
    cout<<endl;
}

int main(){

    /*Pair Sum

    Check if there exists two elements in an array such 
    that their sum is equal to given k.
        Input:- 
                {2 4 7 11 14 16 20 21}
        
        Output:-
                3 6
    *
    //Solution Time Complexity O(n) if array is sorted.

    int n, k;
    cin>>n>>k;
    int arr[n];
    arrIn(arr, n);
    int st= 0, ed= n-1;
    while(st<ed ){
        if(arr[st]+arr[ed]==k){
            cout<<"True"<<endl<<st<<" "<<ed<<endl;
            return 0;
        }
        else if(arr[st]+arr[ed]>k){
            ed--;
        }
        else{
            st++;
        }
    }
    cout<<"False"<<endl;

    // */

    /*Maximum Subarray Sum- Cumulative Sum Approach
        Example:
            [-1, 4, 7, 2]
        
        Ans:
            13
    //*

    //Solution

    int n;
    cin>>n;
    int arr[n];
    arrIn(arr, n);
    int CumSum[n+1];
    CumSum[0]= 0;
    for(int i=1; i<=n; i++){
        CumSum[i]= CumSum[i-1] + arr[i-1];
    }

    int sum=0, MaxSum= INT_MIN;
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            sum= CumSum[i] - CumSum[j];
            MaxSum= max(sum, MaxSum);
        }
    }
    cout<<MaxSum<<endl;
    //*/

    /*Smallest Positive Missing Number

    Find the smallest positive missing number in the given array.

        Example:
            [0, -10, 1, 3, -20]
        
        Ans:
            2
    //*

    //Solution

    int n;
    cin>>n;
    int arr[n];
    arrIn(arr, n);
    int N= 1e6 +2;
    bool check[N];
    arrBool(check, N);

    for(int i=0 ; i<n; i++){
        if(arr[i]>= 0){
            check[arr[i]]= true;
        }
    }

    for(int i=0; i<n; i++){
        if(check[i]==false){
            cout<<i<<endl;
            return 0;
        }
    }

    cout<<"No Missing Positive No. In Array"<<endl;

    //*/

    /*First Repeating Element
    
    Given an array arr[] of size N. The task is to find the first repeating element in an array of integers, i.e., 
    an element that occurs more than once and whose index of first occurrence is smallest. 

    Constraints 
        1 <= N <= 106 
        0 <= Ai <= 106 
    Example 
        Input: 
            7 
            1 5 3 4 3 5 6 
        Output: 
            2 
    //*

    //Solution Time Complexity O()

    int n;
    cin>>n;
    int arr[n];
    arrIn(arr, n);
    int index[n+1];
    arrFix(index, n+1);
    int curMin=INT_MAX;
    for(int i=0; i<n; i++){
        if(index[arr[i]]!= -1){
            curMin= min(curMin, index[arr[i]]);
        }
        if(index[arr[i]]== -1) index[arr[i]]= i;
        // arrOut(index, n+1);
    }
    cout<<curMin+1<<endl;
// */

    /*Subarray With Given Sum
    
    Given an unsorted array A of size N of non-negative integers, find a continuous subarray which adds to a given number S. 

    Constraints 
        1 <= N <= 105 
        0 <= Ai <= 1010 

    Example 

        Input: 
            N = 5, S = 12 
            A[] = {1,2,3,7,5} 

        Output: 
            2 4 

    //*

    //Solution- Time Complexity O(n)

    int n, s;
    cin>>n>>s;
    int arr[n];
    arrIn(arr, n);

    int sum=0;
    int i=0;
    int j=0;
    for(i=0; i<n; i++){
        sum+= arr[i];
        // cout<<sum<<endl;
        if(sum>s){
            while(sum>s){
                sum-= arr[j];
                // cout<<sum<<endl;
                j++;
            }
        }
        if(sum==s){
            cout<<j+1<<" "<<i+1<<endl;
            return 0;
        }
    }
    cout<<"Doesn't Exist"<<endl;

    //*/

    return 0;
}
