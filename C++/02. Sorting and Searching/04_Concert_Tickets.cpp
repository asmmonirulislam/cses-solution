// Problem URL: 

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

    ll n, m;
    cin>>n>>m;
    multiset<ll>h;
    vector<ll>t(m), ans;
    for(ll i=0; i<n; i++) {
        ll val;
        cin>>val;
        h.insert(val);
    }
    for(ll i=0; i<m; i++) {
        cin>>t[i];
    }
    for(auto &price:t) {
        auto ticket = h.upper_bound(price);
        if(ticket == h.begin()){
            ans.push_back(-1);
        }else {
            --ticket;
            ans.push_back(*ticket);
            h.erase(ticket);
        }
    }
    for(auto &i:ans) {
        cout<<i<<endl;
    }
    return 0;
}