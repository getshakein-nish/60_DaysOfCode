class Solution {
public:
    int maxAdjacentSum(vector<int>& nums) {
        int n=nums.size();
        int prev=nums[0];
        int prev2=0;
        for(int i=1;i<n;i++){
            int take=nums[i];
            if(i>1) take+=prev2;
            
            int notTake=0+ prev;
            
            int cur_i=max(take,notTake);
            prev2=prev;
            prev=cur_i;
        }
        return prev;
    }
    int rob(vector<int>& nums) {
        vector<int>temp1,temp2;
        if(nums.size()==1) return nums[0];
        for(int i=0;i<nums.size();i++){
        if(i!=0) temp1.push_back(nums[i]);
        if(i!=nums.size()-1) temp2.push_back(nums[i]);
    }
    return max(maxAdjacentSum(temp1),maxAdjacentSum(temp2));
    }
};
