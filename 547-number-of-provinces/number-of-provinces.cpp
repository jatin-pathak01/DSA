class Solution {
public:
    void dfs(vector<vector<int>>& isConnected,int start,vector<int>& visited){
        visited[start]=1;
        for(int i=0;i<isConnected.size();i++){
            if(isConnected[start][i]==1 && visited[i]==0){
                dfs(isConnected,i,visited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int vertices=isConnected.size();
        vector<int>visited(vertices,0);
        int count = 0;
        for(int i=0;i<vertices;i++){
            if(visited[i]==0){
                count++;
                dfs(isConnected,i,visited);
            }
        }
        return count;
    }
};