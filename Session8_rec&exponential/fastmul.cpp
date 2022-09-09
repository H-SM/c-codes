#include<bits/stdc++.h>
#define int long long int
using namespace std;
//o(log(b))
int mul(int a,int b,int c){
    int res=0;
    while(b){
        if(b&1) res +=a; res%=c;
        a*=2; a%=c;
        b>>=1;//b/=2 
    }
    return res;
}
int32_t main(){//remember this change

    cout<<mul(2,20,1e9+7);
    return 0;
}