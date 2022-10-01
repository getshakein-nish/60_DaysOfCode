class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>result;
        unordered_map<int,int>hashmap;
        for(int i=0;i<n;i++) {
            if(hashmap.count(target-nums[i])){
                result.push_back(i);
                result.push_back(hashmap[target-nums[i]]);
                return result;
            }
            hashmap[nums[i]]=i;
               }
         return result;
    }
};
