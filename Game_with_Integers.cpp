#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
string solve(ll n)
{
    ll n2=n+1;
    ll n3 = n-1;
    
    if(n2%3==0||n3%3==0)
        return "First";
    
    return "Second";
}
int main()
{
    ll T;
    cin>>T;
    while(T--)
    {
        ll n;
        cin>>n;
        string ans = solve(n);

        cout<<ans<<endl;
    }
}
