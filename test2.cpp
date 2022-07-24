#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

int main()
{
    IOS;
    test(t) {
      int n, a;
      map<int,int>mp;
      cin>>n;
      
      int ans=-1;
      for(int i=1;i<=n;i++){
        cin>>a;
        if(mp[a])
        ans=max(ans,n-i+mp[a]);
        mp[a]=i;
      }
      
      cout<<ans<<endl;
    }
    return 0;
}