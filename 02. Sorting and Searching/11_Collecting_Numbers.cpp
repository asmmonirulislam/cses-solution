// Problem URL: https://cses.fi/problemset/task/2216

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
    vector<pair<ll, ll>>nums;

    for(ll i=0; i<n; i++) {
        ll num;
        cin>>num;
        nums.emplace_back(num, i+1);
    }

    ll count=1;
    
    sort(nums.begin(), nums.end());

    for(ll i=1; i<n; i++) {
        ll prev = nums[i-1].second;
        ll curr = nums[i].second;
        if(curr < prev) count++;
    }

    cout<<count<<endl;

    return 0;
}