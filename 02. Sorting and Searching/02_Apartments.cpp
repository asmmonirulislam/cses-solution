// Problem URL: https://cses.fi/problemset/task/1084

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

    ll n, m, k;
    cin>>n>>m>>k;
    vector<ll>a(n), b(m);
    for(ll i=0; i<n; i++) {
        cin>>a[i];
    }
    for(ll i=0; i<m; i++) {
        cin>>b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    ll i=0, j=0, count=0;

    while(i<n and j<m) {
        ll l1 = a[i]-k;
        ll l2 = a[i]+k;

        if((b[j]>=l1) and (b[j]<=l2)) {
            count++;
            i++;
            j++;
        }else if(b[j]<l1) {
            j++;
        }else{
            i++;
        }
    }
    
    cout<<count<<endl;
    return 0;
}