#include <bits/stdc++.h>

using namespace std;

// Complete the hackerrankInString function below.
string hackerrankInString(string s) {
    // map<string,int>m;
    // for(int i=0;i<m.size();i++){
        //     m[s[i]]+=1;
    // }

    string str = "hackerrank";
    if(s.length()<str.length()) return "NO";

    int j=0;

    for(int i=0;i<s.length();i++){
        if(j<str.length() && s[i]==str[j]) j++;
    }
    if(j==str.length()) return "YES";
    else return "NO";

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        string result = hackerrankInString(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
