#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
int minPathSum(vector<vector<int>>& matrix,vector<vector<int>> &dp) {
  int n = matrix.size();
  int m = matrix[0].size();

  for(int j=0;j<m;++j){
    dp[0][j]=matrix[0][j];
  }
  for(int i=1;i<n;++i){
    for(int j=0;j<m;++j){
      int left,right;
      int upper = matrix[i][j] + dp[i-1][j];
      if(j-1>=0) left = matrix[i][j] + dp[i-1][j-1];
      else left = 1e9;
      if(j+1<m) right = matrix[i][j] + dp[i-1][j+1];
      else right = 1e9;
      dp[i][j] = min(upper,min(left,right));
    }
  }
  int mn = INT_MAX;
  for(int j=0;j<m;++j){
    mn = min(mn,dp[n-1][j]);
  }
  return mn;
}
    int minFallingPathSum(vector<vector<int>>& matrix) {
        ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
        vector<vector<int>> dp(matrix.size(),vector<int> (matrix[0].size(), -1));
        return minPathSum(matrix,dp);
    }
};
int main(){
Solution obj;
vector<vector<int>> matrix={{2,1,3},{6,5,4},{7,8,9}};
cout<<obj.minFallingPathSum(matrix)<<endl;

return 0;
}