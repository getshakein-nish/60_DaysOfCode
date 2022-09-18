class Solution {
public:
int searchInsert(vector<int>& nums, int target) {
int f=0,l=nums.size()-1;
int m ;
while(f<=l)
{
m = (f+l)/2;
if(nums[m]==target)
return m;
else
if(nums[m]>target)
l=m-1;

        else
            if(nums[m]<target)
            {
                f=m+1;
            }
    }
  
    return l+1;
}
};
