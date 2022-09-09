/*#include<iostream>

#include<bits/stdc++.h>
using namespace std;

int firstUniqChar(string s) {
        int n=s.length(),x=-1;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(s[i]==s[j])
                    break;
                if(j=n-1)
                    x=i;
            }
        if(x!=-1)
            break;
        }
        return x;
}*/
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int firstUniqChar(string str){
    //logic
    unordered_set<char>s;
    int x=0;
    for(int i=0;i<str.size();++i){
        x=str.find(str[i],i+1);
        if(x!=-1){
            s.insert(str[i]);
            if(i==(str.size()-1)){
                for(auto x:s)
                {
                   cout<<x<<" ";
                }
                return -1;
            }
            continue;
        }
        else if(s.find(str[i])!=s.end())
        {
            if(i==(str.size()-1)){
                for(auto x:s)
                {
                   cout<<x<<" ";
                }
                return -1;
            }
            continue;
        }
        else
        for(auto x:s)
                {
                   cout<<x<<" ";
                }
        return i;
    }
}
int main(){
    string y="aabbaaabbbaabb";
    int x=firstUniqChar(y);
    cout<<endl<<x<<endl;
    return 0;
}