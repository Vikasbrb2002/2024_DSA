#include<bits/stdc++.h>
using namespace std;
vector<vector<string>>groupAnagram(vector<string> &strs){

vector<vector<string>> ans;
unordered_map<string,vector<string> > mp;
for(auto x:strs){
    string word=x;
    sort(word.begin(),word.end());
    mp[word].push_back(x);

}

for(auto x:mp){
    ans.push_back(x.second);
}
return ans;
}
int main(){
vector<string> s={"eat","ate","tan","nat","tea","bat"};
vector<vector<string> > ans=groupAnagram(s);
for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size();j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}

return 0;
}