class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {

        //BFS?
        //iterate through edges and map every node's connecting nodes in a hashtable, BUT
        //do it in a way that adds the tail to the head's key and the head to the tail's key
        // -> since it is bidirectional
        //then start at the source and use a queue to check each depth of the graph and cross check the nodes that are 
        //being added to the queue with something that checks if a specific node has been visited already
        // queue<int> q;
        // map<int,bool> visited;
        // map<int,vector<int>> graph;
        
        // if(source == destination){
        //     return true;
        // }

        // //adds all connections to a dictionary for each node
        // for(int i = 0; i<edges.size(); i++){
        //     graph[edges[i][0]].push_back(edges[i][1]);
        //     graph[edges[i][1]].push_back(edges[i][0]);
        // }
        
        // //adds all paths for the source node into the queue
        // for(int i = 0; i<graph[source].size(); i++){
        //     q.push(graph[source][i]);
        // }
        // //marks the source node as visited
        // visited[source] = true;

        // //goes through each node and uses BFS to find the destination node        
        // while(!q.empty()){
        //     if(visited.count(q.front()) == 0){
        //         visited[q.front()] = true;
        //         for(int i = 0; i<graph[q.front()].size(); i++){
        //             q.push(graph[q.front()][i]);
        //         }
        //     }

        //     if(q.front() == destination){
        //         return true;
        //     }
        //     q.pop();
        // }

        // return false;

        



        //iterate through edges first and add every edge to a map with the tail as the key
        //start at the first edge inside of the source's key and go recursively through the tails in each edge until
        //you do or don't find the destination
        //would have to account for nodes that you already visited in this algo BECAUSE otherwise you would go in 
        //infinite loops 
        //DFS?
        // bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        map<int,vector<int>> mapp;
        map<int,bool> visited;
        //setting up dictionary of all paths 
        for(int i = 0; i<edges.size(); i++){
            mapp[edges[i][0]].push_back(edges[i][1]);
            mapp[edges[i][1]].push_back(edges[i][0]);
        }
        return recurse(visited, mapp, source, destination);
    }


    bool recurse(map<int,bool> visited, map<int,vector<int>> mapp, int currNode, int dest){
        if(currNode == dest) return true;
        
        visited[currNode] = true;
        for(int i = 0; i<mapp[currNode].size(); i++){
            if(visited.count(mapp[currNode][i]) == 0){
                if(recurse(visited,mapp,mapp[currNode][i],dest)) return true;
            }
        }
        return false;
    }
};