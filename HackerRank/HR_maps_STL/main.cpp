#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;


int main() {

    map<string,int> m;

    int t;
    cin>>t;
    string name;
    int marks;
    int sum=0;
    while(t--){
        int ch;
        cin>>ch;
        switch(ch){
            case 1: cin>>name>>marks;
                    m[name]+=marks;
                    m.insert(make_pair(name,marks));
                    break;
            case 2: cin>>name;
                    m.erase(name);
                    break;
            case 3: cin>>name;
                    map<string,int>::iterator itr = m.find(name);
                    if(itr==m.end())
                        cout<<"0"<<endl;
                    else
                        cout<<m[name]<<endl;
        }
    }

    return 0;
}



