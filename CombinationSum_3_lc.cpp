#include<bits/stdc++.h>

using namespace std;
//functions-
    void recur(int i,int n, int k, vector<int> &ds, vector<vector<int>> &ans){
        if (k == 0){
            if (n == 0){
                ans.push_back(ds);
            }
            return;
        }
        if (i > 9) return;
        
        ds.push_back(i);
        recur(i+1, n-i, k-1, ds, ans);
        ds.pop_back();
        
        recur(i+1, n, k, ds, ans);
    }


    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> ds;
        recur(1, n, k, ds, ans);

        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[i].size();j++){
                cout<<ans[i][j];
            }cout<<endl;
        }
    }


int main(){
//driver code-
//combinationSum3(3,7);
combinationSum3(3,9);
}
