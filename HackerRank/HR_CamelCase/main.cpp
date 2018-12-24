#include <bits/stdc++.h>

using namespace std;

// Complete the camelcase function below.
int camelcase(string s) {

    int count=0;
    if(s.empty())
        return 0;
    else
        count=1;

    for(int i=0;i<s.length();i++){
        if(s[i]>=65 && s[i]<=91){
            count++;
        }
    }
    return count;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
