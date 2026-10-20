#include <vector>
using namespace std;

int Leftsum(vector<int>& nums, int m){
    int ans = 0;
    for(int i = 0; i < m; i++){
        ans += nums[i];
    }
    return ans;
}

int Rightsum(vector<int>& nums, int m){
    int ans = 0;
    for(int i = nums.size() - 1; i > m; i--){
        ans += nums[i];
    }
    return ans;
}

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        for(int i = 0; i < nums.size();i++){

            if(Rightsum(nums,i) == Leftsum(nums, i)){
                return i;
            }
        }

        return -1;
    }
};