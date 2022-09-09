#include<bits/stdc++.h>
using namespace std;
//o(log(b))
int powr(int a,int b){
    int res=1;
    while(b){
        if(b&1) res *=a;
        a*=a;
        b>>=1;//b/=2
    }
    return res;
}
int main(){

    cout<<powr(2,20);
    return 0;
}