#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'solve' function below.
 *
 * The function is expected to return a STRING_ARRAY.
 * The function accepts STRING_ARRAY names as parameter.
 */

vector<string> solve(vector<string> names) {
    map<string,int> m;
    vector<string> vec;
    map<string,int>::iterator itr;

    for(itr = m.begin();itr!=m.end();++itr){
        int j=0;
        string name = names[j];
        j++;
        if(m.empty()==true){
            string a = name[0];
            int count = m[a];
            m.insert(make_pair(a,count++));
            vec.push_back(a);
        }
        for (int i=0;i<name.size();i++){
            string a = name[0];
            int count = m[a];

            int flag1=0;

            while(m.find(a)!=m.end()){
                flag1=1;
                if(a.size()==name.size()){
                    char k=50;
                    while(m.find(a)!=m.end()){
                        a=a+" "+k;
                        k++;
                    }
                    count = m[a];
                    m.insert(make_pair(a,count));
                    vec.push_back(a);
                }
                a = a+name[i+1];
            }
            if(flag1==1){
                count = m[a];
                m.insert(make_pair(a,count));
                vec.push_back(a);
            }
            else{
                m.insert(make_pair(a,count));
                vec.push_back(a);
            }
        }
    }

   return vec;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    vector<string> names(n);

    for (int i = 0; i < n; i++) {
        string names_item;
        getline(cin, names_item);

        names[i] = names_item;
    }

    vector<string> res = solve(names);

    for (int i = 0; i < res.size(); i++) {
        fout << res[i];

        if (i != res.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
