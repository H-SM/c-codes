#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
using namespace std;

void multiply(vector<int>&a,int no,int &size){
    int carry=0;
    for(int i=0;i<size;i++)
    {
        int product=a[i]*no+carry;
        a[i]=product%10;
        carry=product/10;
    }
    //handle carry at end
    while(carry)
    {
        a[size]=carry%10;
        carry=carry/10;
        size=size+1;
    }
}

void bigfact( int n){
    
    vector <int> a(1000,0);
    a[0]=1;
    int size=1;
    for (int i=2;i<=n;i++){
        multiply(a,i,size);
    }
    //print result in reverse order

    for(int i=size-1;i>=0;i--){
        cout<<a[i];
    }
    cout<<endl;
}

int main(){

    int n;
    cin>>n;
    bigfact(n);
    return 0;

}
