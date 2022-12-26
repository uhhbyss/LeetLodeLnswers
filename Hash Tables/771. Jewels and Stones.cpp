class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> count;
        for(char outer:stones){
            for(char inner:jewels){
                if(outer == inner){
                    count[inner]++;
                }
            }
        }
        
        int sum = 0;
        for(char inner:jewels){
            sum+=count[inner];
        }
        return sum;
    }
};