#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int solve(vector<int> nums) {
    int sum=0;
    while(nums.size()!=1)
    {
        for(int x: nums)
         {
          cout<<x<<" ";
         }
	     vector<int>::iterator iter=nums.begin();
         sum=*iter+*(iter+1);
         nums.erase(iter);
         ++iter;
         nums.erase(iter);
         ++iter;
         nums.push_back(sum);
         cout<<endl;
    }
    return nums[0];
}
int main()
{
	vector<int> vec1={1,2,3,4,5};
	int x=solve(vec1);
    cout<<x<<endl;
	return 0;
}