class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int>vis(V,0);
        queue<int>q;
        vector<int>ans;
            
        q.push(0);
        vis[0] = 1;
        
        while(!q.empty()){
            int top = q.front();
            ans.push_back(top);
            q.pop();
            
            for(auto a:adj[top]){
                if(!vis[a]){
                    q.push(a);
                    vis[a] = 1;
                }
            }
        }
          
        return ans;
    }
};
