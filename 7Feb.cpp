#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
 static bool cmp(const pair<int,char> &a, const pair<int,char> &b){
    return (a.first > b.first);  
}

string frequencySort(string s) {
    string ans="";
    unordered_map<char,int> mp;
    for(auto x: s){
        mp[x]++;
    }
    vector<pair<int,char>> pr;
    for(auto x: mp){
        pr.push_back({x.second, x.first}); 
    }
    sort(pr.begin(),pr.end(),cmp);
    for(auto p : pr){
        ans.append(p.first, p.second); 
    }
    return ans;
}


};
int main(){
 Solution obj;
 string s="tree";
 cout<<obj.frequencySort(s)<<"\n";

return 0;
}