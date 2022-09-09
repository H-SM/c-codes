#include<iostream>
using namespace std;

int getithbit(int n, int i){
    //i is position
    int mask= 1<<i;
    return (n&mask)>0? 1:0;

}
void setithbit(int &n,int i){
    int mask =(1<<i);
    n=(n|mask);
}
void clearithbit(int &n,int i)
{
    //~(1<<i)
    int mask=~(1<<i);
    n=n&mask;
}
void updateithbit(int &n,int i,int v)
{
    clearithbit(n,i);
    int mask=(v<<i);
    n=n|mask;
    //sets the right value
}
void clearlastIbit(int &n,int i){
    int mask=(-1)<<i;
    n=n&mask;
}
void clearbitinrange(int &n,int i,int j){
    int a=(~0)<<(j+1);
    int b =(1<<i)-1;
    int mask=a|b;
    n=n&mask;
}
int main(){
    int n=31;
    int i=1;
    int j=3;
    cout<<n<<endl;
    //cout<<getithbit(n,i);
    //setithbit(n,i);
    //clearithbit(n,i);
    //updateithbit(n,i,0);//1101->1111
    //clearlastIbit(n,i);
    clearbitinrange(n,i,j);
    cout<<n;
    return 0;
}
