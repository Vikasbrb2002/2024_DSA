#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxLength(vector<string>& arr) {
        int n = arr.size(), res = 0;
        for(int i = 1; i < (1<<n); i++){
            vector<int> s(26,0);
            int cnt = 0;
            for(int j = 0; j < n; j++){
                if((1<<j)&i){
                    cnt += arr[n-1-j].size();
                    for(char c: arr[n-1-j]){
                        if(s[c-'a']){
                            cnt = 0;
                            break;
                        }else s[c-'a'] = 1;
                    }
                }
            }
            res = max(res, cnt);
        }
        return res;
    }
};
int main(){
Solution obj;
vector<string> s={"uni","qu","e"};
cout<<obj.maxLength(s)<<endl;

return 0;
}