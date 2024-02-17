#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int furthestBuilding(vector<int>& heights, int brick, int ladder) {
        int n = heights.size();
       priority_queue<int>pq;

        for(int i=0;i<n-1;i++){
            int req=heights[i+1]-heights[i]; 

            if(req>0){
                if(req<=brick){
                    brick-=req;
                     pq.push(req);
                }
                else if(ladder){
                    if(pq.size()>0 && pq.top()>req){
                        auto it=pq.top(); 
                        pq.pop(); 
                        brick=brick+it-req;
        ladder--;


                        pq.push(req);
                    }
                    else{
                         ladder--;
                    }
                }
                else{
                    // na ladder , na brick , jnha ho vnhi rhoge
                    return i;
                }
            }
        }

        // pura pahoch gya yani index n-1 tak
        return n-1;
    }


};
int main(){
Solution obj;
vector<int> nums={4,2,7,6,9,14,12};
int brick=5,ladder=1;
cout<<obj.furthestBuilding(nums,brick,ladder);

return 0;
}