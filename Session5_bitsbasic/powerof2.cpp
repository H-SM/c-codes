#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    /* n=16->10000
        n-1->01111 (15)
          & -------
            00000

            if n and n-1 &= 0000 then power of 2
    */
   if((n&(n-1))==0 )
   cout<<"power of 2"<<endl;
   else 
   cout<<"not power of 2"<<endl;

    return 0;
}