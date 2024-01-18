#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    int climbStairs(int n) {
        int a=0;
        int b=1;
        int c;
        while(n!=0){
            c=a+b;
            a=b;
            b=c;
            n--;
        }
        return c;
    }
};
int main(){
    Solution obj;
    int n=6;
    cout<<obj.climbStairs(n);
    

return 0;
}