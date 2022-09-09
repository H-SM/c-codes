 #include<bits/stdc++.h>

using namespace std;

#include<iostream>
#include<vector>
void display(vector<int> &v)
{
   for(int i=0;i<v.size();i++)
   {
		cout<<v[i]<<" ";
		cout<<v.at(i)<<" ";
   }
   cout<<endl;
}
int main()
{
	vector<int> vec1;
	int element;
	for(int i=0;i<4;i++)
	{
		cout<<"Enter an element to add to this vector";
		cin>>element;
		vec1.push_back(element);
	}	
	display(vec1);
	vector<int>::iterator iter=vec1.begin();
	vec1.insert(iter,556);
	display(vec1);
	return 0;
}

//also lets start with leet-code now: https://leetcode.com/problem-list/challenges-for-new-users/