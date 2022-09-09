#include<bits/stdc++.h>

using namespace std;

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>

int main()
{
	
   int n;
	cin>>n;
	vector<int> arr(n,0);

	for (int i=0;i<n;i++)
      arr[i]=n-i;

  auto start_time = clock();
  sort(arr.begin(),arr.end());
  auto end_time= clock();
  cout<<n<<endl;
  cout<<end_time<<endl;

  return 0;
}