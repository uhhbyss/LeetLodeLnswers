class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map<int,bool> visited;

        for(int i = 0; i<trust.size(); i++){
            if(visited.count(trust[i][0]) == 0 || visited[trust[i][0]] == false) {
                visited[trust[i][0]] = true;
            }
            if(visited.count(trust[i][1]) == 0){
                visited[trust[i][1]] = false;
            }
        }

        for(int i = 1; i<=n; i++){
            if(visited[i] == false){
                return i;
            }
        }

        return -1;
    }
};
