// Problem URL: https://cses.fi/problemset/task/1640

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

    vector<pair<ll, ll>>a;
    
    for(ll i=0; i<n; i++) {
        ll val;
        cin>>val;
        a.emplace_back(val, i+1);
    }
    
    ll start=0, end=n-1;

    sort(a.begin(), a.end());

    while(start<end){
        ll sum = a[start].first+a[end].first;
        if(sum==x){
            ll index1 = min(a[start].second, a[end].second);
            ll index2 = max(a[start].second, a[end].second);
            cout<<index1<<" "<<index2<<endl;
            return 0;
        }else if(sum>x) {
            end--;
        }else {
            start++;
        }
    }

    cout<<"IMPOSSIBLE"<<endl;

    return 0;
}