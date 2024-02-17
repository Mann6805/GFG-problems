//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    bool isMaxHeap(int arr[], int n)
    {
        int j=0;
        int count=0;
        for(int i=0; i< n-2, j+2<=n ; i++){
            if(arr[i] >= arr[j+1] && arr[i] >= arr[j+2]){
                count = 0;
            }
            else{
                count = 1;
                break;
            }
            j+=2;
        }
        if(count == 1){
            return 0;
        }
        else{
            return 1;
        }
    }
};

//{ Driver Code Starts.
int main() {
    
    int t;
    cin >> t;
    while(t--)
    {
       int n;
       cin >> n;
       int a[4*n]={0};
       for(int i =0;i<n;i++){
           cin >> a[i];
       }
       Solution ob;
       cout<<ob.isMaxHeap(a, n)<<endl;
        
    }
    return 0;
}

// } Driver Code Ends