#include<bits/stdc++.h>
using namespace std;
string f(int n, int k)
{
    vector<int>v(n);
    for(int i =0;i<n;i++)
    {
        cin>>v[i];
    }

    vector<int>v2=v;
    sort(v.begin(),v.end());

    if(v==v2)
        return "YES";
    
    if(k==1)
        return "NO";
    
    return "YES";

}
int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        int n,k;
        cin>>n>>k;
        string ans =f(n,k);

        cout<<ans<<endl;
    }
}
