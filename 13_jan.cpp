#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char, int> ms;
        unordered_map<char, int> mt;
        int res = 0;
        
        for (int i = 0; i < s.size(); i++) {
            ms[s[i]]++;
            mt[t[i]]++; 
        }
        
        for (auto it = ms.begin(); it != ms.end(); it++) {
            auto i = mt.find(it->first);
            if (i != mt.end()) {
                if (it->second - i->second > 0) {
                    res = res + (it->second - i->second);
                }
            } else {
                res = res + it->second;
            }
        }
        
        return res;
    }
};
int main(){
   Solution obj;
   string s="leetcode";
   string t="practice";
   cout<<obj.minSteps(s,t)<<endl;

return 0;
}

//               return TLE on testcase 57
// class Solution {
// public:
//     int minSteps(string s, string t) {
       
//        for(int i=0;i<s.size();i++){
//            for(int j=0;j<t.size();j++){
//                if(s[i]==t[j]){
                   
//                   t.erase(t.begin()+j);
//                    break;
//                }
//            }
//        }
//         return t.size();
//     }
// };