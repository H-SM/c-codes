#include<iostream>
#include<cstring>
using namespace std;
void overlay(char arr[],int number){
    int j=0;
    while(number>0){
        int last= number&1;
        if(last){
            cout<<arr[j];
        }
        j++;
        number =number>>1;
    }
    cout<<endl;
}

void generate(char arr[]){
    int n=strlen(arr);
    for(int i=0;i<(1<<n);i++){//2^n-1 -> 1<<N
        overlay(arr,i);
}}

int main(){

    //subsets/subsequences
    char arr[10000];
    cin>>arr;
    generate(arr);
    return 0;
}
     // namespace std
