#include <bits/stdc++.h>

using namespace std;

// Complete the marsExploration function below.
int marsExploration(string s) {
    int length=s.length();
    int max_alter = length%3;
    string s_check = "SOS";
    int k=0,count=0;
    // for(int i=0;i<length;i+=3){
    //     for(int j=0;j<3;j++){
    //         if(s[j]!=s[k]){
    //             count++;
    //             k++;
    //             break;
    //         }
    //         k++;
    //     }
    // }
    for(int i=0;i<length;i++,k++){
        if(k==3) k=0;
        if(s[i]!=s_check[k]){
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

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
