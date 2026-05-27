#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#ifdef LOCAL
#include "debug.h"
#else
#define debug()
#define db(...)
#endif

#define INT 1e18
#define eps 1e-6
#define endl '\n'
#define ff first 
#define ss second 
#define ll long long
#define pb push_back
#define int long long
#define mod 1000000007
#define PI 2*acos(0.0)
#define pii pair<int,int>
#define ull unsigned long long
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(),(x).end()
#define rall(a) (a).rbegin(),(a).rend()
#define deci(x) cout<<fixed<<setprecision(x);
#define rmv(x,a) x.erase(remove(x.begin(),x.end(),a),x.end())
#define unq(x) {x.erase(unique(x.begin(),x.end()),x.end());}

void shera(){
    int n;
    cin>>n;
    int cr=1500;
    int ans=-1;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        cr+=x;
        if(cr>=4000 && ans==-1)ans=i;
    }
    cout<<ans<<endl;

}

int32_t main(){
    optimize();
    debug();
    //int tc;tc=1;
    //cin>>tc;
    //for(int ii=1;ii<=tc;ii++){
        shera();
   // }
}