#include<bits/stdc++.h>
#define int long long int
using namespace std;
const int mod = 10e9+7;
//o(log(b))
int powr(int a,int b){
    int res=1;
    while(b){
        if(b&1) res *=a, res%=mod;
        a*=a,a%=mod;
        b>>=1;//b/=2 
    }
    return res;
}
int32_t main(){//remember this change

    cout<<powr(2,20);
    return 0;
}