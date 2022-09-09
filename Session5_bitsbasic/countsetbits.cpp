#include<iostream>
using namespace std;
int cntbits(int n){
    int cnt=0;
    while(n>0){
        int lastbit=n&1;
        cnt+=lastbit;
        n=n>>1;
    }
    return cnt;
}

int main(){
    int n;
    cin>>n;
    int c=cntbits(n);
    cout<<c<<endl;

    /*
    9-> 1001 
       &   1
       ------
           1
       ... cnt+=(n&1)   ans-2  
       REF cnthack.cpp - for a hack to count bits (FASTER METHOD)
    */

    return 0;
}