#include<iostream>
#include<vector>
using namespace std;

void uniqueNo2(vector<int> arr){
    int n=arr.size();
    //XOR
    int result =0;
    for(int i=0;i<arr.size();i++)
    {
        result=result^arr[i];
    }
    //Pos
    int pos=0;
    int temp=result;
    while((temp&1)==0){
        pos++;
        temp=temp>>1;
    }
    //filter out numbers from array with set bit at pos
    int seta=0;
    int setb=0;
    int mask=(1<<pos);
    for(int i=0;i<arr.size();i++){
        if(((arr[i])&mask)>0){
            seta=seta^arr[i];
        }
        else
        {
            setb=setb^arr[i];
        }
        }
        cout<<seta<<endl;
        cout<<setb<<endl;
    }
int main(){
    vector<int>arr={1,3,5,4,3,1,5,7};// 4 and 7
    uniqueNo2(arr);


}