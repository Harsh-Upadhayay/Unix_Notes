#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

#define ll long long int
#define u unsigned
#define pb push_back
#define rpt(n) for(int i = 0; i < n; i++)

void solve(void);

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) 
        solve();
    return 0;
}

void solve(){
    int x;
    cin>>x;
 long long int mid = 1, l = 1, r = x/2,t;
    while(l <= r){
        mid = (l+r)/2;
        if(mid * mid < x)
            l = mid+1;
        else if (mid * mid > x)
            r = mid - 1;
        else if (mid*mid == x)
            cout<< mid;
    }   
    cout<<mid<<" ";
}