class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        unordered_map<int,int> count;
        
        for(int current:nums){
            if(count.count(current) == 0){
              for(int check:nums){
                    if(check < current){
                        count[current]++;
                    }
                }  
            }
        }
        
        vector<int> output;
        for(int current:nums){
            output.push_back(count[current]);
        }
        
        return output;
    }
};