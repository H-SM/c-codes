#include<algorithm>
#include<iostream>
using namespace std;

char DigitToChar(int x){
    return x +'0';
}

int charToDigit(char ch){
    return ch - '0';
}

string addnumbers( string n1,string n2){
    //make sure n2 larger
    if(n1.length()>n2.length()){
        swap(n1,n2);
    }
    //result 
    string result="";
    //reverse
    int carry=0;
    reverse(n1.begin(),n1.end());
    reverse(n2.begin(),n2.end());
    // add digit upto a n1.length()
    for(int i=0; i<n1.length();i++){
        int d1=charToDigit(n1[i]);
        int d2=charToDigit(n2[i]);
        int sum=d1+d2+carry;
        int output= sum%10;
        carry=sum/10;
        result.push_back(DigitToChar(output));
    }
    for(int i=n1.length(); i<n2.length();i++){
        int d2=charToDigit(n2[i]);
        int sum= d2+carry;
        int output= sum%10;
        carry=sum/10;
        result.push_back(DigitToChar(output));
    }
    //finally if a carry is generated
     if(carry)
     result.push_back('1');
     // reverse result
     reverse(result.begin(),result.end());
     return result;
}

int main(){

    //string input of big int
    string s1,s2;
    cin>>s1>>s2;
    string result= addnumbers(s1,s2);
    cout<<result<<endl;
    return 0;

}
