#include<bits/stdc++.h>
using namespace std;
void solve(int n)
{
    string s;
    cin>>s;
    int ans =0;
    int count =0;
    bool flag = false;
    for(int i =0;i<n;i++)
    {
        if(i<n-2)
        {
            if(s[i]=='.'&&s[i+1]=='.'&&s[i+2]=='.')
            {
                flag = true;
                break;
            }
        }
        if(s[i]=='.')
        ans++;
        
    }
    if(flag==true)
    {
        cout<<2<<endl;
    }
    else{
        cout<<ans<<endl;
    }
}
int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        int n;
        cin>>n;
        solve(n);
    }
}
