class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mpp;

        for(int i=0;i<nums.size();i++){
            int sum = nums[i];
            int rem = target - nums[i];
            if(mpp.find(rem) != mpp.end()){
                return {mpp[rem], i};
            }
            mpp[sum] = i;
        }
        
        return {-1, -1};
    }
};