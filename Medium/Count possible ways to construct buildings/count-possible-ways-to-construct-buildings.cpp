//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int TotalWays(int n)
	{
	    // Code here
    int mod = 1e9 + 7;
    if (n == 1) return 4;
    if (n == 2) return 9;
    if (n == 3) return 25;
    
    std::vector<long long> dp(n + 1);
    dp[1] = 4;
    dp[2] = 9;
    dp[3] = 25;
    
    for (int i = 4; i <= n; i++)
        dp[i] = (2 * dp[i - 1] % mod + 2 * dp[i - 2] % mod - dp[i - 3] % mod+mod) % mod;
 
    return static_cast<int>(dp[n]);
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.TotalWays(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends