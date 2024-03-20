#include<bits/stdc++.h>
using namespace std;
int f(int n, int x)
{
    int ans = INT_MIN;
    vector<int>v(n,0);
    for(int i =0;i<n;i++)
        cin>>v[i];
    
    for(int i =0;i<n-1;i++)
    {
        int diff=v[i+1]-v[i];
        ans = max(diff, ans);
    }
    
    int final_lap=2*(x-v[n-1]);
    ans=max(ans,final_lap);
    int first_lap = v[0]-0;
    ans = max(ans, first_lap);
    return ans;
    
    
}

int main()
{
    int T;
    cin>>T;
    
    while(T--)
    {
        int n, x;
        cin>>n>>x;
        
        int ans =f(n,x);
        
        cout<<ans<<endl;
    }
}
