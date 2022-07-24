#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

bool fun(string a, string b, vector<int> ind, int n) {
    
}
int main()
{
    IOS;
    test(t) {
        int n;
        string a,b;
        cin>>n>>a>>b;
        vector<int> ind;
        int cnt1 = 0, cnt0 = 0;

        for(int i=0;i<n;i++) {
            if(a[i]=='1') cnt1++;
            else cnt0++;

            if(cnt1 == cnt0) ind.push_back(i);
        }

        if(fun(a,b,ind,n)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}