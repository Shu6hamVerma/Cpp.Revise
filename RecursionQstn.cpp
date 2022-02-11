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

int main(){

    /* Tower of Hanoi..*/
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