#include <algorithm> 
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int currentLargest = -10000;
        priority_queue<int> maxHeap(nums.begin(),nums.end());
        for(int i = 1; i<k; i++){
            maxHeap.pop();
        }
        return maxHeap.top();
        
        
        //sort(nums, nums.size());
        //return nums[nums.size()-k];
    }
};