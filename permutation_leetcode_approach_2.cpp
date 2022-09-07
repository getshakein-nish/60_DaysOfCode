//second approach-
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
//functions-
void permutation(int index,vector<vector<int>>&ans,vector<int>&nums){
        if(index==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=index;i<nums.size();i++){
            swap(nums[index],nums[i]);
            permutation(index+1,ans,nums);
            swap(nums[index],nums[i]);
        }
    }


void permute(vector<int>& nums) {
        vector<vector<int>>ans;
        permutation(0,ans,nums);

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
