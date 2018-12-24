#include<iostream>

using namespace std;

int main(){

    long long int s,t;
    cin>>s>>t;

    long long int distAp,distOr;
    cin>>distAp>>distOr;

    long long int n_Ap,n_Or;
    cin>>n_Ap>>n_Or;

    long long int app[1000000];
    long long int orr[1000000];
    for(int i = 0 ;i<n_Ap;i++){
        cin>>app[i];
        app[i]+=distAp;
    }

//     for(int i = 0 ;i<n_Ap;i++)
//         cout<<app[i]<<" ";

//     cout<<"n_or = "<<n_Or<<endl;

    for(int i = 0 ;i<n_Or;i++){
        cin>>orr[i];
        orr[i]+=distOr;
    }

//     cout<<"n_or = "<<n_Or<<endl;

//     for(int i = 0 ;i<n_Or;i++)
//         cout<<orr[i]<<" ";

    long long int count_Ap=0,count_Or=0;

    for(int i = 0 ;i<n_Ap;i++)
    {
        if(app[i]>=s&&app[i]<=t)
            count_Ap++;
    }

    for(int i = 0 ;i<n_Or;i++)
    {
        if(orr[i]>=s&&orr[i]<=t)
            count_Or++;
    }


    cout<<count_Ap<<endl<<count_Or<<endl;

    return 0;
}

