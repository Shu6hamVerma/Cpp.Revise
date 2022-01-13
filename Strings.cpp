#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){

    /*Sort String
    need to include algorithm header file*
    string s1="kuhgudfiohgfuhgfuhhohfg";
    sort(s1.begin(), s1.end());
    cout<<s1<<endl;
    // */

    /*Integer to String*
    int x= 786;
    cout<<to_string(x)+"2"<<endl; // return size of string
    // */

    /*String to Integer*
    string s1="786";
    int x= stoi(s1);
    cout<<x+2<<endl; // return size of string
    // */

    /*SubString*
    string s1="nincompoop";
    cout<<s1.substr(6, 4)<<endl; // return substring if string(index, no. of char)
    // */

    /*Size and Length*
    string s1="nincompoop";
    cout<<s1.size()<<endl<<s1.length()<<endl; // return size of string
    // */

    /*Insert*
    string s1="nincompoop";
    s1.insert(2,"lol"); //(index, string that need to be insert);
    cout<<s1<<endl; 
    // */

    /*Find*
    string s1="nincompoop";
    cout<<s1.find("com")<<endl; //return index of first char that we need to find
    // */

    /*Erase*
    string s1="nincompoop";
    s1.erase(3, 3);
    cout<<s1<<endl;
    // */

    /*Empty*
    string s1="fam", s2="";
    cout<<s1.empty()<<endl<<s2.empty()<<endl;
    // */

    /*Compare*
    string s1="fam", s2="fam";
    cout<<s1.compare(s2)<<endl;
    // */

    /*Clear*
    string s1="fam";
    s1.clear();
    cout<<s1<<endl;
    // */

    /*Append*
    string s1="fam", s2="ily";
    s1.append(s2);
    cout<<s1;
    // */

    /*type of way to enter string

    string str;
    cin>>str;                   //enter input till first space
    string str(5, 'n');         //create string of length 5 all are n
    string str= "ApniKaksha";   //Hardcode string input
    getline(cin, str);          //enter whole string including spaces
    cout<<str;
    */

    return 0;
}