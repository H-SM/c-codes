#include<iostream>
using namespace std;
bool power(int n){
    if((n&(n-1))!=0)
        return false;
    if(n>0&&((n%3)==0))
        return true;
        else 
        return false;

}
int main(){
    int n;
    cin>>n;

    /* n=16->10000
        n-1->01111 (15)
          & -------
            00000

            if n and n-1 &= 0000 then power of 2
    */
   
    return 0;
}