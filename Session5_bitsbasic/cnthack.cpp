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
int cntbitshack(int n){
    int ans=0;
    while(n>0){
        n=n&(n-1);
        //removes the last set bit from the current number and 
        /*
       n=9->1001
       &    1000 removes set bit last
            -----
      n=9&8 1000
      &     0111    remives the next set bit
      n=7   -----
            0000
        */

        ans++;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int c=cntbitshack(n);
    
    int v=cntbits(n);
    cout<<c<<endl<<v<<endl;

    return 0;
}