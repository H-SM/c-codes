#include<iostream>
using namespace std;


void clearbitinrange(int &n,int i,int j){
    int a=(~0)<<(j+1);
    int b =(1<<i)-1;
    int mask=a|b;
    n=n&mask;
}
void replacebits(int &n,int i,int j,int m){
    clearbitinrange(n,i,j);
    int mask=(m<<i);
    n=n|mask;
}
int main(){
    int n=15;
    int i=1;
    int j=3;
    int m=2;
    cout<<n<<endl;
    replacebits(n,i,j,m);
    /*1111
      010
      ----
      0001
      0100
      ----
      0101
    */
    cout<<n<<endl;
    return 0;
}