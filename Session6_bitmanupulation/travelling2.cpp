#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int tsp(vector<vector<int>>dist,int setofcity,int city,int n,vector<vector<int>>&dp){
    //base case
    if(setofcity==(1<<n)-1){
        //return cost from the city to the original 
        return dist[city][0];
    }
    if(dp[setofcity][city]!=-1){
        return dp[setofcity][city];
    }
    
    int ans=INT_MAX;
    //otherwise try all posible options
    for(int choice=0;choice<n;choice++){
        //need to check if city is visited or not 
        if((setofcity&(1<<choice))==0){
            int subprob=dist[city][choice]+tsp(dist,setofcity|(1<<choice),choice,n,dp);
        ans=min(ans,subprob);
        }
    }
    dp[setofcity][city]=ans;
    return ans;
}



int main(){

    vector<vector<int>> dist={
        {0,20,42,25},
        {20,0,30,34},
        {42,30,0,10},
        {25,34,10,0}
    };
    int n=4;
    /* no of rows           below, initialize with -1 */
    vector<vector<int>> dp(1<<n,vector<int>(n,-1));
    cout<<tsp(dist,1,0,4,dp)<<endl;
    return 0;
}