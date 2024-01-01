//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        map<int , int> m;
        for(int& i : nums){
            if(i%k == 0)continue;
            m[i%k]++;
        }
        int ans  = nums.size();
        for(auto& it : m){
            if(it.second == 0)continue;
            else if(it.second == m[abs(it.first - k)]){
                it.second = 0;
                m[abs(it.first - k)] = 0;
                continue;
            }
            return false;
        }
        return 1;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}
// } Driver Code Ends