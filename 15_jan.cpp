#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    // time/space: O(nlogn)/O(n)
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        // collect players and the number of lost matches for each player
        unordered_set<int> players;
        unordered_map<int, int> loseCount;
        for (auto& match : matches) {
            players.insert(match[0]);
            players.insert(match[1]);
            loseCount[match[1]]++;
        }

        // collect the players that have lost 0 or 1 match
        vector<vector<int>> answer(2);
        for (auto& player : players) {
            if (loseCount[player] <= 1) {
                answer[loseCount[player]].push_back(player);
            }
        }

        // the values in the two lists should be returned in increasing order
        sort(answer[0].begin(), answer[0].end());
        sort(answer[1].begin(), answer[1].end());
        return answer;
    }
};
int main(){
Solution obj;
vector<vector<int>> a={{1,3},{2,3},{3,6},{5,6},{5,7},{4,5},{4,8},{4,9},{10,4},{10,9}};
vector<vector<int>> ans=obj.findWinners(a); 
for(int i=0;i<ans.size();i++){
    cout<<"{";
    for(int j=0;j<ans[i].size();j++)
    cout<<ans[i][j]<<" ";
    cout<<"}";
}

return 0;
}