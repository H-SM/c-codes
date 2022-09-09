#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
void pairSum(vector<int>arr,int sum){
    //logic
    unordered_set<int>s;
    int x=0;
    for(int i=0;i<arr.size();i++){
        x=sum-arr[i];
        if(s.find(x)!=s.end()){
                cout<< x <<" - "<<arr[i]<<endl;
        }
        //insert the current no inside set
        // only the eleents traversed once and added in set will be checked not entire set
        // this removes repeatition 
        //O(N)
        s.insert(arr[i]);
    }
}
int main(){
    vector<int> arr{10,5,2,2,1,3,-6,9,11};
    int s=4;
    
    /*
    there are 3 approach-
    . brout force <2 nested loops iterating over tha array/set> o(N^2)
    . sort array , and use 2 pointer each pointing to each end of array and coming inside this traverse and gives output of sum of both side 
    o(nlogn)
    . sorting + binary search, 0(nlogn)
    . <hashing> o(n) *****
    */
    pairSum(arr,s);

    return 0;
}