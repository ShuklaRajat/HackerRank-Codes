/*
#include <bits/stdc++.h>
#include<map>
#include<iterator>

using namespace std;

// Complete the isValid function below.
string isValid(string s) {

    map<char,int> m;

    for(int i=0;i<s.length();i++){
        int count_char = m[s[i]]++;
        char a = s[i];
        m.insert(make_pair(a,count_char));
    }
    int largest=0,smallest=m[s[0]];

    map<char,int>::iterator itr;

    for(itr = m.begin(); itr!=m.end() ; ++itr){
        if(itr->second > largest){
            largest=itr->second;
        }
        if(itr->second < smallest){
            smallest=itr->second;
        }
    }

    if((largest-smallest) >= 2){
        return "NO";
    }

    int count=0;
    for(itr = m.begin(); itr!=m.end() ; ++itr){
        if(largest!=smallest && itr->second == largest)
            count++;
    }

    if(count>1)
        return "NO";

    return "YES";


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
*/
#include <bits/stdc++.h>
#include<map>
#include<iterator>
#include<cmath>

using namespace std;

// Complete the isValid function below.
string isValid(string s) {

    map<char,int> m;

    for(int i=0;i<s.length();i++){
        int count_char = m[s[i]]++;
        char a = s[i];
        m.insert(make_pair(a,count_char));
    }

    map<int,int> freq_count;
    map<char,int>::iterator itr;

    for(itr = m.begin(); itr != m.end() ; ++itr ){
        int count_second = freq_count[itr->second]++;
        int first = itr->second;
        freq_count.insert(make_pair(first,count_second));
    }

    int count_first=0,a=-1,b=-1,c=-1,d=-1;
    map<int,int>::iterator itr1;
    for(itr1 = freq_count.begin() ; itr1 != freq_count.end() ; ++itr1){
        if(count_first==0){
            a = itr1->first;
            c = itr1->second;
        }
        if(count_first==1){
            b = itr1->first;
            d = itr1->second;
        }

        count_first++;

    }
    if(count_first==1)
        return "YES1";
    if(count_first>1)
        return "NO1";
    if(abs(a-b)>1)
        return "NO2";
    if(c!=1 || d!=1){
        return "NO3";
    }
    return "YES2";
//     int largest=0,smallest=m[s[0]];

//     map<char,int>::iterator itr;

//     for(itr = m.begin(); itr!=m.end() ; ++itr){
//         if(itr->second > largest){
//             largest=itr->second;
//         }
//         if(itr->second < smallest){
//             smallest=itr->second;
//         }
//     }

//     if((largest-smallest) >= 2){
//         return "NO";
//     }

//     int count=0;
//     for(itr = m.begin(); itr!=m.end() ; ++itr){
//         if(largest!=smallest && itr->second == largest)
//             count++;
//     }

//     if(count>1)
//         return "NO";

//     return "YES";


}

int main()
{

    string s;
    getline(cin, s);

    string result = isValid(s);

    cout << result << "\n";

    return 0;
}
