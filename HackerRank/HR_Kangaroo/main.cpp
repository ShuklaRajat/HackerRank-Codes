#include <iostream>
using namespace std;

int main() {

    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;

    int n  = v1*x2;

    while(n--){
        if(x1==x2){
            cout<<"YES";
            return 0;
        }
        x1+=v1;
        x2+=v2;
    }

    cout<<"NO";

	return 0;
}
