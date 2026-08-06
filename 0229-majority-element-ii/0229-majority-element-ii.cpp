class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1 = 0, count2 = 0;
        int el1 = INT_MIN, el2 = INT_MIN;

        for(int num: nums){
            if(count1 == 0 && el2 != num){
                count1 = 1;
                el1 = num;
            }else if(count2 == 0 && el1 != num){
                count2 = 1;
                el2 = num;
            }
            else if(num == el1) count1++;
            else if(num == el2) count2++;
            else{
                count1--;
                count2--;
            }
        }
        count1 = 0, count2 = 0;
        vector<int> ans;

        for(int num: nums){
            if(num == el1) count1++;
            if(num == el2) count2++;
        }

        int mini = (int)(nums.size()/3) + 1;
        if(count1 >= mini) ans.push_back(el1);
        if(count2 >= mini) ans.push_back(el2);

        return ans;
    }
};