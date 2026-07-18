class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_count = 0;
        int count = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 1){
                count++;
                max_count = max(count, max_count);
            }else count = 0;
        }
        return count, max_count;
    }
};