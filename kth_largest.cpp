#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int findKthLargest(vector<int> nums, int k) {

    sort(nums.begin(),nums.end());
    int z=nums.size()-k;
    /*
    set<int>s;
    for(int i=0;i<nums.size();i++){
        s.insert(nums[i]);
    }*/
    for (auto x : nums)
        cout << x << " ";
    
    return nums[z];

}

int main(){
    vector<int> v{3,2,3,1,2,4,5,5,6};
    int k=findKthLargest(v,4);
    cout<<k<<endl;
    return 0;
}