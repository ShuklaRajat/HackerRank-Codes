#include <bits/stdc++.h>

using namespace std;

// Complete the minimumNumber function below.
// int minimumNumber(int n, string password) {
//     // Return the minimum number of characters to make the password strong
// }

int main()
{

    int n;
    cin >> n;

    string password;
    cin>>password;
    int count=0;
    int n1,n2;
    if(n<6){
        n1=6-n;
    }
        int low=0,up=0,digit=0,spcl=0;

        for(int i=0;i<password.length();i++){
            if( low==0 && password[i]>='a' && password[i]<='z'){
                low++;
            }
            if(up==0 && password[i]>='A' && password[i]<='Z' ){
                up++;
            }
            if(digit==0 && password[i]>='0' && password[i]<='9'){
                digit++;

            }
            if(spcl==0 &&
               (password[i]=='!'||password[i]=='@'||password[i]=='#'||password[i]=='$'||
               password[i]=='%'||password[i]=='^'||password[i]=='&'||password[i]=='*'||
               password[i]=='('||password[i]==')'||password[i]=='-'||password[i]=='+')){
                spcl++;
            }
        }
        int total;
        total=low+up+digit+spcl;
        n2=4-total;

    cout<<max(n1,n2);

    return 0;
}
