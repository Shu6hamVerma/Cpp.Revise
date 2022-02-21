#include<bits/stdc++.h>
using namespace std;

void Reverse(string s){
    if(s.length()==0){
        return;
    }
    Reverse(s.substr(1));
    cout<<s[0];
}

void Replace(string s){
    if(s.length()==0){
        return;
    }
    if(s[0]=='p' && s[1]=='i'){
        cout<<"3.14";
        Replace(s.substr(2));
    }
    else{
        cout<<s[0];
        Replace(s.substr(1));
    }
}

void TowerOfHanoi(int n, char source, char destination, char helper){
    if(n==0){
        return;
    }
    TowerOfHanoi(n-1, source, helper, destination);
    cout<<"Move from "<<source<<" to "<<destination<<endl;
    TowerOfHanoi(n-1, helper, destination, source);

}

string RemoveDuplicates(string s){
    if(s.length()==0){
        return "";
    }
    char a= s[0];
    string g= RemoveDuplicates(s.substr(1));

    if(a==g[0]){
        return g;
    }
    return a+g;

    // if(a!=s[1]){
    //     cout<<a;
    //     RemoveDuplicates(s.substr(1));
    // }
    // else{
    //     RemoveDuplicates(s.substr(1));
    // }

}

string xAtLast(string s){
    if(s.length()==0){
        return "";
    }
    char ch= s[0];
    string ans= xAtLast(s.substr(1));

    if(ch=='x'){
        return ans+ch;
    }
    return ch+ans;
}

void AllSub(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch= s[0];
    string ros= s.substr(1);
    AllSub(ros, ans);
    AllSub(ros, ans+ch);
}

void Permutation(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0; i<s.length(); i++){
        char ch= s[i];
        string ros= s.substr(0,i)+s.substr(i+1);

        Permutation(ros, ans+ch);
    }
}

int TileProblem(int N){
    if(N==1 || N==0){
        return N;
    }

    int vertical= TileProblem(N-2);
    int horizontal=TileProblem(N-1);

    return vertical + horizontal;
}

int FriendPair(int N){
    if(N==0 || N==1 || N==2){
        return N;
    }

    return FriendPair(N-1) + FriendPair(N-2)*(N-1);
}

int KnapSack(int value[], int weight[], int n, int W){
    if(W<=0 || n==0){
        return 0;
    }
    if(weight[n-1]>W){
        return KnapSack(value, weight, n-1, W);
    }

    return max(KnapSack(value, weight, n-1, W-weight[n-1])+value[n-1], KnapSack(value, weight, n-1, W));
}

int main(){
    /* 0-1 Knapsack Problem..
    ...Put n items with given weight and value in a knapsack ood capacity W 
    ...to get the maximum total value in the knapsack..*/
    //Solution
    int value[]={100,50,150};
    int weight[]={10,20,30};
    
    cout<<KnapSack(value, weight, 3, 50)<<endl;
    //*/

    /* Priend Pairing Problem (N)..
    ...Find the numbers of ways in which n friends can remain single or can be papired up.*
    //Solution
    int N;
    cin>>N;
    cout<<FriendPair(N)<<endl;
    //*/
    
    /* Tiling Problem (2xN)..
    ...Given a "2xN" board and tiles of size "2x1",
    ...count the number of ways to tile the given board using these tiles.*
    //Solution
    int N;
    cin>>N;
    cout<<TileProblem(N)<<endl;
    //*/

    /* Permutation..(ABC)*
    //Solution
    string s;
    cin>>s;
    Permutation(s, "");
    //*/

    /* Print all Substring..(ABC)*
    //Solution
    string s;
    cin>>s;
    AllSub(s, "");
    //*/

    /* All x at last position..(axxbdxcefxhix)*
    //Solution
    string s;
    cin>>s;
    cout<<xAtLast(s);
    //*/

    /* Remove Duplicates..(aaaabbbeeecddddd)*
    //Solution
    string s;
    cin>>s;
    cout<<RemoveDuplicates(s);
    //*/

    /* Tower of Hanoi..*
    //Solution
    int n;
    cin>>n;
    TowerOfHanoi(n, 'A', 'C', 'B');
    //*/

    /* Replace pi with 3.14..(pippxxppiixipi)*
    //Solution
    string s;
    cin>>s;
    Replace(s);
    //*/

    /* Reverse String using Recursion..*
    //Solution
    string s;
    cin>>s;
    Reverse(s);
    //*/

    return 0;
}