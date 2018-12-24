#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

vector<string> split_string(string);

// Complete the checkMagazine function below.
void checkMagazine(vector<string> magazine, vector<string> note) {


    map<string,int> mag;
    map<string,int> notepad;

    int size = magazine.size();

    for(int i=0 ; i<size ; i++){
        int count_str=mag[magazine[i]]++;
        mag.insert(make_pair(magazine[i],count_str));
    }

    int size2 = note.size();
  //  cout<<"size of magazine"<<size<<"size pf
    for(int i=0 ; i<size2 ; i++){
        //cout<<"in notepad make pair"<<endl;
        int count_str=notepad[note[i]]++;
        notepad.insert(make_pair(note[i],count_str));
    }

    //cout<<notepad.size()<<endl;
    map<string,int>::iterator itr;
    map<string,int>::iterator itr2;

    /*
     for(itr = notepad.begin() ; itr != notepad.end() ; ++itr){
         int flag=0;
         for(itr2 = mag.begin() ; itr2 != mag.end() ; ++itr2){
             if(itr->first == itr2->first && itr->second <= itr2->second){
                 flag=1;
                 break;
             }
         }
         if(flag==0){
             cout<<"No";
             return;
         }
     }
     */
     int flag=0;
     for(itr = notepad.begin() ; itr != notepad.end() ; ++itr){
         itr2 = mag.find(itr->first);
         if (itr2 == mag.end()){
            cout<<"No";
            return;
         }
         else if(itr->second <= itr2->second){
            flag++;
         }
    }

    for(itr = notepad.begin() ; itr != notepad.end() ; ++itr){

         cout<<itr->first<<" : "<<itr->second<<endl;
    }
    cout<<endl;

    for(itr2 = mag.begin() ; itr2 != mag.end() ; ++itr2){

        cout<<itr2->first<<" : "<<itr2->second<<endl;

    }
    cout<<endl;
    if (flag==notepad.size())
        cout<<"Yes";
    else
        cout<<"No";
    return;
}

int main()
{
    int m,n;
    cin>>m>>n;
    string str;
    vector<string> magazine;
    for(int i=0;i<m;i++){
        cin>>str;
        magazine.push_back(str);
    }
    vector<string> note;
    for(int i=0;i<n;i++){
        cin>>str;
        note.push_back(str);
    }
    checkMagazine(magazine, note);

    return 0;
}

/*
//Actual Code

#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the checkMagazine function below.
void checkMagazine(vector<string> magazine, vector<string> note) {


    map<string,int> mag;
    map<string,int> notepad;

    int size = magazine.size();

    for(int i=0 ; i<size ; i++){
        int count_str=mag[magazine[i]]++;
        mag.insert(make_pair(magazine[i],count_str));
    }

    int size2 = note.size();
    for(int i=0 ; i<size2 ; i++){
        int count_str=notepad[note[i]]++;
        notepad.insert(make_pair(note[i],count_str));
    }

    map<string,int>::iterator itr;
    map<string,int>::iterator itr2;

//     for(itr = notepad.begin() ; itr != notepad.end() ; ++itr){
//         int flag=0;
//         for(itr2 = mag.begin() ; itr2 != mag.end() ; ++itr2){
//             if(itr->first == itr2->first && itr->second <= itr2->second){
//                 flag=1;
//                 break;
//             }
//         }
//         if(flag==0){
//             cout<<"No";
//             return;
//         }
//     }
    int flag=0;
     for(itr = notepad.begin() ; itr != notepad.end() ; ++itr){
         itr2 = mag.find(itr->first);
         if (itr2 == mag.end()){
            cout<<"No";
            return;
         }
         else if(itr->second <= itr2->second){
            flag++;
         }
    }

    if (flag==notepad.size())
        cout<<"Yes";
    else
        cout<<"No";
    return;
}

int main()
{
    string mn_temp;
    getline(cin, mn_temp);

    vector<string> mn = split_string(mn_temp);

    int m = stoi(mn[0]);

    int n = stoi(mn[1]);

    string magazine_temp_temp;
    getline(cin, magazine_temp_temp);

    vector<string> magazine_temp = split_string(magazine_temp_temp);

    vector<string> magazine(m);

    for (int i = 0; i < m; i++) {
        string magazine_item = magazine_temp[i];

        magazine[i] = magazine_item;
    }

    string note_temp_temp;
    getline(cin, note_temp_temp);

    vector<string> note_temp = split_string(note_temp_temp);

    vector<string> note(n);

    for (int i = 0; i < n; i++) {
        string note_item = note_temp[i];

        note[i] = note_item;
    }

    checkMagazine(magazine, note);

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}





*/
