#include<iostream>
using namespace std;

bool GetBit(int n, int pos){
    return ((n & (1<<pos)) != 0);
}

int SetBit(int n, int pos){
    return (n | (1<<pos));
}

int ClearBit(int n, int pos){
    return (n & ~(1<<pos)); //once compliment(masking)
}

int UpdateBit(int n, int pos, int setWith){
    int m= (n & (~(1<<pos)));
    return (m |(setWith << pos));
}

int main(){
    
    /*UpdateBit*/
    cout<<"UpdateBit"<<endl;
    int n, pos, setWith;
    cin>>n>>pos>>setWith;   
    cout<<UpdateBit(n, pos, setWith)<<endl; 
    // */

    /*ClearBit*
    cout<<"ClearBit"<<endl;
    int n, pos;
    cin>>n>>pos;   
    cout<<ClearBit(n, pos)<<endl; 
    // */

    /*SetBit*
    cout<<"SetBit"<<endl;
    int n, pos;
    cin>>n>>pos;   
    cout<<SetBit(n, pos)<<endl;
    // */

    /*GetBit*
    cout<<"GetBit"<<endl;
    int n, pos;
    cin>>n>>pos;
    cout<<GetBit(n, pos)<<endl;
    // */

    return 0;
}