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




//Without sorting 
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    for(int i = 0; i < n;i++){
	        cin >> a[i];
	    }
	    bool canSort = true;
        for (int i = 0; i < n - 1; i++) {
            if (k == 1 && a[i] >= a[i + 1] && a[i] != a[i + 1] ) {
                canSort = false;
                break;
            }
        }
        if (canSort) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
	   
	}
    return 0;
}
