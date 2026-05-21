#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define int long long

int32_t main(){
    optimize();
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    priority_queue<int>pq;
    int cnt=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=v[i];
        cnt++;
        if(v[i]<0)pq.push(-v[i]);
        while(sum<0){
            sum+=pq.top();
            pq.pop();
            cnt--;
        }
    }
    cout<<cnt<<endl;
}