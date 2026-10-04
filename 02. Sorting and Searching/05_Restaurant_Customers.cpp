// Problem URL: https://cses.fi/problemset/task/1619

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

bool cmp(const pair<ll, ll>&a, const pair<ll, ll>&b) {
    return a.first<b.first;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin>>n;

    vector<pair<ll, ll>>event;

    while(n--) {
        ll arrival, departure;
        cin>>arrival>>departure;
        event.emplace_back(arrival, 1);
        event.emplace_back(departure, -1);
    }

    sort(event.begin(), event.end(), cmp);

    ll curr=0, maximum=0;

    for(auto &[time, val]:event){
        curr += val;
        maximum = max(maximum, curr);
    }
    
    cout<<maximum<<endl;
    return 0;
}