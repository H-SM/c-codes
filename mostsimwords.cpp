#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 /*
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
 
    fastio();
    auto start1 = high_resolution_clock::now();
 
    ll t = 1;
    cin >> t;
 
    while (t--)
    {
        solve();
    }
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
 
#ifndef ONLINE_JUDGE
    cerr << "Time: " << duration.count() / 1000 << nline;
#endif
 */
    int t;
    cin>>t;
    while(t--)
    {
    int n, m;
    cin>>n>>m;
    vector<string>str(n);
    for(int i = 0; i < n; i++){
        cin >> str[i];
    }
    int ans = INT_MAX;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            int x = 0;
            for(int k = 0; k < m; k++){
                x += abs((str[i][k] - str[j][k]));
            }
            ans = min(ans, x);
        }
    }
    cout<<ans<<endl;
}
    return 0;
}