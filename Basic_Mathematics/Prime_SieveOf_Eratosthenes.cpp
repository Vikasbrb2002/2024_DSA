#include<bits/stdc++.h>
using namespace std;
int countPrime(int n){
    if(n==0) return 0;
    int count=0;
    vector<bool> prime(n,true);
    prime[1]=false;
    for(int i=2;i<=n;i++){
        if(prime[i]){
            count++;

            int j=2*i;
            while(j<n){
                prime[j]=false;
                j=j+i;
            }
        }
    }
    return count;
}
int main(){
    int n=19;
    cout<<countPrime(n)<<endl;

return 0;
}