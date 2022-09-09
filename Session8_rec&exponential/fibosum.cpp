//fibonacci sum
//s(n)=f(0)+f(1)+f(3)----f(n)
//s(m)-s(n-1)=s(m.....n)
/* 
FIRST APPROACH - recursion
f(n)=f(n-1)+f(n-2)
f(n-2)=f(n)-f(n-1)
f(n-3)=f(n-1)-f(n-2)
........so on
f(0)=f(2)-f(1)
-------------------
add
-------------------
f(0)+f(1)+....f(n-2)=f(n)-f(1)
therefore, s(n-2)=Fn-1
n->n+2
s(n)=Fn+2-1
S(m....n)=Sm-Sn-1
        =(Fm+1-1)-(Fn+1-1)
        =Fm+2 -Fn+1
*/
/* 
SECOND APPROACH - Matrix Exponential

Matrix-
T     X  Fn      Fn+1
-----    --      -----
0 1 1    Sn      Sn+1
0 1 1    Fn      Fn+1
0 1 0    Fn-1    Fn
this becomes our matrix

*/
#include<bits/stdc++.h>
#define int long long int
using namespace std;
const int mod= 1e9+7;
const int sz=3;
struct Mat{
    int m[sz][sz];
    Mat(){
        memset(m,0,sizeof(m));
    }
    void identity(){
        for(int i=0;i<sz;i++){
            m[i][i]=1;
                }        }
    Mat operator*(Mat a){
            Mat res;
            // sz^3 o(log(n)) <--- complexity
            for(int i=0;i<sz;i++){
                for(int j=0;j<sz;j++){
                    for(int k=0;k<sz;k++){
                        res.m[i][j]+=m[i][k]*a.m[k][j];
                        res.m[i][j]%=mod;
                    }
                }
            }
            return res;
    }
};

int fibosum(int n){
    //base cases
    if(n==-1)return 0;
    if(n==0)return 0;
    if(n==1)return 1;
    Mat res;
    res.identity();
    Mat T;
    T.m[0][0]=T.m[0][1]=T.m[0][2]=1;
    T.m[1][1]=T.m[1][2]=1;
    T.m[2][1]=1;
    //n>=2
    n-=1;//tn-1 not tn-2
    //o log(n)
    while(n){
        if(n&1) res=res*T;
        T=T*T;
        n/=2;
    }
    return (res.m[0][0]+res.m[0][1])%mod;//0 2 space * 0
}

int32_t main(){//remember this change
    int t;
    cin>>t;
    while(t--){
    int n,m;
    cin>>n>>m;
    cout<<(fibosum(m)-fibosum(n)+mod)%mod<<endl;
    }return 0;
}