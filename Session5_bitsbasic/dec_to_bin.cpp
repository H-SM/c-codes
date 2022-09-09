#include<iostream>
using namespace std;
int converttobinary(int n){
    int ans=0;
    int p=1;
    while(n>0){
        int last=(n&1);
        ans+=p*last;
        p=p*10;
        n>>=1;
    }
    return ans;
}

int main(){
   
    int n;
    cin>>n;
    cout<<converttobinary(n)<<endl;
    return 0;
}