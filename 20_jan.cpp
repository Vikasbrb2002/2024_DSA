#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
const int N = 1e9 + 7;
int printSubArraysDP(vector<int>& arr) {
    int n = arr.size();
    vector<int> dp(n, 0);

    int sum = 0;

    stack<int> st;
    for (int i = 0; i < n; ++i) {
        while (!st.empty() && arr[st.top()] > arr[i]) {
            st.pop();
        }
        if (st.empty()) {
            dp[i] = (i + 1) * arr[i] % N;
        } else {
            dp[i] = (dp[st.top()] + (i - st.top()) * arr[i]) % N;
        }
        st.push(i);

        // Update sum
        sum = (sum + dp[i]) % N;
    }
    return sum;
}
    int sumSubarrayMins(vector<int>& arr) {
        ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
        return printSubArraysDP(arr);
    }
};
int main(){
  Solution obj;
  vector<int> arr={3,1,2,4};
  cout<<obj.sumSubarrayMins(arr);


return 0;
}