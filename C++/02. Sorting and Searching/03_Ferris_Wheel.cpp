// Problem URL: https://cses.fi/problemset/task/1090

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

    ll n, x;
    cin>>n>>x;
    vector<ll>w(n);
    for(ll i=0; i<n; i++) {
        cin>>w[i];
    }
    sort(w.begin(), w.end());
    ll start=0, end=n-1, count=0;
    while(start<=end) {
        if(w[start]+w[end]<=x) {
            start++;
        }
        end--;
        count++;
    }
    cout<<count<<endl;
    return 0;
}