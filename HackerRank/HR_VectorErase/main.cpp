#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,nums;
    cin>>n;
    vector<int> a;

    for(int i=0;i<n;i++){
        cin>>nums;
        a.push_back(nums);
    }

    //int nd;
    //cin>>nd;

    int x,y,z;
    cin>>z;

    //vector<int> b;
    a.erase(a.begin()+(z-1));

    cin>>x>>y;

    a.erase(a.begin()+(x-1),a.begin()+(y-1));

    cout<<a.size()<<endl;

    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";


    return 0;
}
