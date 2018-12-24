#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    string s;
    cin>>n>>s>>k;
    unsigned int newChar;
     //string str;
     k=k%26;
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z'){        //for lower case
             newChar=s[i]+k;
             if(newChar>122){
                newChar=(newChar%122)+96;
             }
             s[i]=newChar;
        }
        else if(s[i]>='A' && s[i]<='Z'){        //for upper case
            newChar=s[i]+k;
            if(newChar>90){
                newChar=(newChar%90)+64;
            }
            s[i]=newChar;
        }

    }

    for(int i=0;i<s.length();i++)
        cout<<s[i];
    return 0;
}
