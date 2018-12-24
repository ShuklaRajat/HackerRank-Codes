#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {

    set<int> s;
    int n;
    cin>>n;
    while(n--){
        int ch,num;
        cin>>ch>>num;
        switch(ch){
            case 1: s.insert(num);
                    break;
            case 2:s.erase(num);
                    break;
            case 3:set<int>::iterator itr = s.find(num);
                   if(itr==s.end())
                       cout<<"No"<<endl;
                   else
                       cout<<"Yes"<<endl;
        }
    }
    return 0;
}



