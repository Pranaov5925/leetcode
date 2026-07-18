class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_count = 0;
        int count = 0;

        for(int num: nums){
            count = (num==1)? count+1 : 0;
            max_count = max(count, max_count);
        }

        return max_count;
    }
};