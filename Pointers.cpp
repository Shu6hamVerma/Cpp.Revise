#include<bits/stdc++.h>
using namespace std;

void CallByValue(int a, int b){
    int temp= a;
    a= b;
    b= temp;
}

void CallByRefernce(int *a, int *b){
    int temp= *a;
    *a= *b;
    *b= temp;
}

int main(){

    int a= 10, b= 20;
    cout<<"a="<<a<<" b="<<b<<endl;
    CallByValue(a, b);
    cout<<"CallByValue a="<<a<<" b="<<b<<endl;
    int *aptr= &a, *bptr= &b;                              //int* used for defining a pointer, & operator gives address of variable
    CallByRefernce(aptr, bptr);
    cout<<"CallByRefernce a="<<*aptr<<" b="<<*bptr<<endl;  //* before pointer is used to de-refer value of address


    return 0;
}  