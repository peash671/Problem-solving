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
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    
    bool ok=true;
    int oddpp=v[0]%2;
    int evenpp=v[1]%2;
    for(int i=0;i<n;i++){
        if(i%2==0){
            if(v[i]%2!=oddpp) ok=false;
        }
        else{
            if(v[i]%2!=evenpp) ok=false;
        }
    }
    if(ok) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int32_t main(){
    optimize();
    debug();
    int tc;tc=1;
    cin>>tc;
    for(int ii=1;ii<=tc;ii++){
        shera();
    }
}