#include<bits/stdc++.h>

using namespace std;
//functions-
void findSum(int ind,int target,vector<int>&candidates,vector<int>&ds,vector<vector<int>>&ans){
        if(target==0){
            ans.push_back(ds);
            return;
        }
        for(int i=ind;i<candidates.size();i++){
            if(i>ind && candidates[i]==candidates[i-1]) continue;
            if(candidates[i]>target) break;
            ds.push_back(candidates[i]);
            findSum(i+1,target-candidates[i],candidates,ds,ans);
            ds.pop_back();
        }
        
    }

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        sort(candidates.begin(),candidates.end());
        findSum(0,target,candidates,ds,ans);
        
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[i].size();j++){
                cout<<ans[i][j];
            }cout<<endl;
        }
    }



int main(){
//driver code-
vector<int>candidates={10,1,2,7,6,1,5};
int target = 8;
combinationSum2(candidates,target);
}
