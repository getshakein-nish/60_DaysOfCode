#include<bits/stdc++.h>

using namespace std;
//functions-
void combination(int start,vector<vector<int>>&ans,vector<int>&comb,int n,int k){
        if(comb.size()==k){
            ans.push_back(comb);
            return;
        }
        for(int i=start; i<n+1;i++){
            comb.push_back(i);
            combination(i+1,ans,comb,n,k);
            comb.pop_back();
        }
    }

vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>comb;
        combination(1,ans,comb,n,k);
        
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[0].size();j++){
                cout<<ans[i][j];
            }cout<<endl;
        }
    }

int main(){
//driver code-
 int n=4,k=2;
 combine(n,k);

}
