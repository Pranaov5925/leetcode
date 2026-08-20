class Solution {
public:

    int findMax(vector<int> &piles){
        int maxi = INT_MIN;
        for(int pile: piles){
            maxi = max(maxi, pile);
        }
        return maxi;
    }

    long long calculateTotalHours(vector<int> &piles, int hourly){
        long long totalHours = 0;
        for(int pile: piles){
            totalHours += (pile + hourly - 1) / hourly;
        }
        return totalHours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = findMax(piles);

        while(low <= high){
            int mid = (low+high)/2;
            long totalHours = calculateTotalHours(piles, mid);
            if(totalHours <= h){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }

        return low;
    }
};