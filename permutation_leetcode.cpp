#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
//functions-
void permutation(vector<int>&ds,vector<vector<int>>&ans,vector<int>&nums,vector<int>&freq){
        if(ds.size()==nums.size()){
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!freq[i]){
                ds.push_back(nums[i]);
                freq[i]=1;
                permutation(ds,ans,nums,freq);
                freq[i]=0;
                ds.pop_back();
            }
        }
    }
void permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        vector<int>freq(nums.size(),0);
        permutation(ds,ans,nums,freq);
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[0].size();j++){
                cout<<ans[i][j];
            }cout<<endl;
        }
    }

int main(){
//driver code-
 vector<int>nums={1,2,3};
 permute(nums);
}
