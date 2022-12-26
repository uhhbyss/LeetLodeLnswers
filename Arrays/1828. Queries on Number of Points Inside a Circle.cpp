class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> answer;
        int count = 0;
        for(int i = 0; i<(queries.size()); i++){
            for(int j = 0; j<(points.size()); j++){
                double innerX = points[j][0] - queries[i][0];
                double innerY = points[j][1] - queries[i][1];
                //if(innerX < 0){ innerX = -1* innerX;}
                //if(innerY < 0){ innerY = -1 * innerY;}
                double innerDist = (innerX*innerX) + (innerY*innerY);
                if(innerDist<=((queries[i][2])*(queries[i][2]))){
                    count++;
                }
                
                
                /*
                if((queries[i][0] - queries[i][2]) < points[0][0] < (queries[i][0] + queries[i][2])){
                    if(){
                        
                    }
                    
                }
                */
            }
            answer.push_back(count);
            count = 0;
        }
        return answer;
    }
};