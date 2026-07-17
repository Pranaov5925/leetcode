class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.empty()) return;

        k = k % nums.size();
        vector<int> temp(k);

        for(int i=k;i>0;i--){
            temp[k - i] = nums[nums.size()-i];
        }

        for(int i=nums.size() - k - 1;i>=0;i--){
            nums[i + k] = nums[i];
        }

        for(int i=0;i<k;i++){
            nums[i] = temp[i];
        }
    }
};