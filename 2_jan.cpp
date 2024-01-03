#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> ans;
         int size=*max_element(nums.begin(),nums.end());
        vector<int> freq(size+1,0);
        for(int i=0;i<nums.size();i++){
            int value=nums[i];
            freq[value]++;
        }
        int row=*max_element(freq.begin(),freq.end());
        int col=size;
        for(int i=0;i<row;i++){
            vector<int> v;
            for(int j=0;j<=col;j++){
                if(freq[j]>0){
                  v.push_back(j);
                  freq[j]--;
                }
            }
            ans.push_back(v);
        }
        return ans;
    }
};
int main(){
 Solution obj;
 vector<int> nums={1,2,6,4,3,3,2};
 vector<vector<int>> ans=obj.findMatrix(nums);
 for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size();j++)
     cout<<ans[i][j]<<" ";
     cout<<endl;
 }

return 0;
}