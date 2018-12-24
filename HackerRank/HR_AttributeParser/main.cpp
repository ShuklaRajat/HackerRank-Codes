#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <strings.h>
#include <sstream>
using namespace std;


int main() {
/*
    int n,q;
    cout<<"n:";
    cin>>n;
    cout<<"q:";
    cin>>q;
    cout<<"sentence:";
    string str[10000];
    string str2;
    char ch;
    for(int i=0;i<n;i++){
        getline(cin,str2);
        str[i]=str2;
    }



    string query[10000];
    string str3;

    for(int i=0;i<q;i++){
        getline(cin,str3);
        query[i]=str3;
        stringstream ss(query[i]);
        string word;
        while(ss>>word){
            if(word.find)
        }
    }

    for(int i=0;i<n;i++){
        cout<<str[i];
    }
*/

    int n,q;
    cin>>n>>q;
    cin.ignore();
    /*
      Essentially, for std::cin statements you use ignore
       before you do a getline call, because when a user inputs
       something with std::cin, they hit enter and a '\n' char
       gets into the cin buffer. Then if you use getline, it gets
       the newline char instead of the string you want. So you do
        a std::cin.ignore(1000,'\n') and that should clear the buffer
         up to the string that you want. (The 1000 is put there to
        skip over a specific amount of chars before the specified
        break point, in this case, the \n newline character.)
    */

    map<string,string> attributeDB;
    string inputstr, tag_preamble="";

    for(int i=0;i<n;i++){
        getline(cin,inputstr);

        stringstream ss(inputstr);
        string word,attribute,value;

    }




    return 0;
}
