class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        mpp[0] = 1;

        int prefixCount = 0, count = 0;
        
        for(int i=0;i<nums.size();i++){
            prefixCount += nums[i];
            count += mpp[prefixCount - k];
            mpp[prefixCount]++;
        }

        return count;
    }
};