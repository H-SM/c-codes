#include<iostream>
#include<vector>
using namespace std;

void updatesum(vector<int> &sumArr,int x) {
    //extract all bit of X
    for(int i=0;i<32;i++){
        int ith_bit=x&(i<<i);
        if(ith_bit){
            sumArr[i]++;
        }
    }
}
int numfromBits(vector<int> sumArr){
    int num=0;
     for(int i=0;i<32;i++){
        num+=(sumArr[i]*(1<<i));
     }
     return num;
}

int uniqueNo3(vector<int> arr){
    vector <int> sumArr(32,0);//Fill everything 0
    for(int x:arr){
        updatesum(sumArr,x);
    }
    for(int i=0;i<32;i++){
        sumArr[i]=sumArr[i]%3;
        cout<<sumArr[i]<<" ";
    }
    cout<<endl;
    //array of bits(0 and 1)
    return numfromBits(sumArr);
    }

int main(){
    vector<int>arr={1,3,5,4,3,1,5,5,3,1};// 4
    cout<<uniqueNo3(arr)<<endl;
    return 0;
}