#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;

    int length = s.length();
    string stacks;
    int top=-1;

    for(int i=0 ;i< length ;i++){
        if(i==0)
            stacks[++top]=s[i];
        else{
            if(s[i]==stacks[top]){
                top--;

            }
            else{
                stacks[++top]=s[i];
            }
        }
    }

    if(top==-1)
         cout<<"Empty String"<<endl;
    else{
         for(int i=0;i<=top;i++){
             cout<<stacks[i];
         }
    }

    return 0;
}
