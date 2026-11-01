// Problem URL: https://cses.fi/problemset/task/1069    

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
    string s;
    cin>>s;
    int max_count=1, curr_count=1, left=0, right=1;
    while(right<(int)s.size()){
        if(s[left] == s[right]) {
            curr_count++;
        }else{
            max_count=max(max_count,curr_count);
            curr_count=1;
            left=right;
        }
        right++;
    }
    max_count=max(max_count,curr_count);
    cout<<max_count<<endl;

    return 0;
}