#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/*
bool is_rtTriangle(int a, int b, int c){
    if (sqrt(a*a+b*b)==c*c) return true;
    return false;
}

int gcd(int m,int n){
    int i=min(m,n);

    while(i>0){
        if(m%i==0 and n%i==0)
            break;
        else
            i--;
    }
    return i;
}

bool is_digit(int number)
    {
        if(abs(number-int(number))>0)
            return false;
        return true;
    }

bool perfect(int a, int b,int c){
    if(gcd(a,b)==1 && gcd(b,c)==1 && is_digit(sqrt(max(max(a,b),c))))
        return true;
    return false;
}

bool perf_numb(int a,int b,int c){
    int area = (0.5)*a*b;
    if(area%6==0 && area%28==0)
        return true;
    return false;
}
int main() {
    int q;
    cin>>q;
    int n,flag;

    while(q--){
        flag=0;
        cin>>n;
        for(int i=3;i<=n;i++){
            for(int j=4;j<=n;j++){
                for(int k=5;k<=n;k++){
                    if(is_rtTriangle(i,j,k)){
                        if(perfect(i,j,k))
                            flag=1;
                        if(flag==1 && perf_numb(i,j,k))
                            flag=0;
                    }
                }
            }
        }
    }
    cout<<flag;
    return 0;
}
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// bool is_rtTriangle(int a, int b, int c){
//     if (sqrt(a*a+b*b)==c*c) return true;
//     return false;
// }

int gcd(int m,int n){
    int i=min(m,n);

    while(i>0){
        if(m%i==0 and n%i==0)
            break;
        else
            i--;
    }
    return i;
}

bool is_digit(float number){
        if(abs(number-int(number))>0)
            return false;
        return true;
}

bool perfect(int a, int b,int c){
    if(gcd(a,b)==1 && gcd(b,c)==1 && is_digit(sqrt(max(max(a,b),c))))
        return true;
    return false;
}

bool perf_numb(int a,int b,int c){
    int area = (0.5)*a*b;
    if(area%6==0 && area%28==0)
        return true;
    return false;
}
int main() {
    int q;
    cin>>q;
    int n,flag1,flag2;

    while(q--){
        int a,b,c,n;
        flag1=0;
        flag2=0;
        cin>>n;
        for(int i=3;i<=n;i++){
            // for(int j=4;j<=n;j++){
            //     for(int k=5;k<=n;k++){
            if(i%2==0){
                a = i;
                b =pow((i/2),2)-1;
                c = pow((i/2),2)+1;
            }
            else{
                a=i;
                b=((pow(i,2)-1)/2);
                c = ((pow(n,2)+1)/2);
            }
            if(!is_digit(c))
                    break;
            // if(is_rtTriangle(i,j,k)){
            if(perfect(a,b,c))
                flag1++;
            if(flag1==1 && perf_numb(a,b,c))
                flag2++;
        }
    }

    cout<<flag1-flag2;
    return 0;
}
