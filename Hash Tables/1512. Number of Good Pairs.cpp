class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> allNums;
        int result = 0;
        
        for(int a:nums){
            result += allNums[a];
            allNums[a] += 1;
        }
        
        return result;
    }
};