// Problem URL: https://cses.fi/problemset/task/2183

#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define pii pair<int, int>
#define pll pair<long long, long long>
#define eb emplace_back
#define F first
#define S second
#define pub push_back
#define pob pop_back
#define ll long long
#define srt(x) sort(x.begin(), x.end());
#define rsrt(x) sort(x.rbegin(), x.rend());
#define SUM(x) accumulate(x.begin(), x.end(), 0);
#define vout(x) for(int i=0; i<x.size(); i++) cout << x[i] << " ";
#define min_heap int, vector<int>, greater<int>
#define min_heap_pair pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>

void solve() {
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin>>n;
    vector<ll>coins(n);
    for(ll i=0; i<n; i++) {
        cin>>coins[i];
    }
    ll min_sum=1;
    sort(coins.begin(), coins.end());
    for(auto &c:coins) {
        if(c > min_sum) break;
        min_sum+=c;
    }
    cout<<min_sum<<endl;
    return 0;
}