#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
   int majorityElement(vector<int>& nums) {
    int size = nums.size() / 2;
    unordered_map<int, int> mp;
    for (auto i : nums) {
        mp[i]++;
    }
    for (auto pair : mp) {
        if (pair.second > size) {
            return pair.first;
        }
    }
    
    return -1;
}
};
int main(){
Solution obj;
vector<int> nums={3,2,3};
cout<<obj.majorityElement(nums)<<endl;

return 0;
}