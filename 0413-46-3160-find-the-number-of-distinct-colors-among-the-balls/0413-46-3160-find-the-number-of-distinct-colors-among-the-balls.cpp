class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        
        int n=queries.size();

        unordered_map<int,int> balls,colors;
        vector<int> ans(n);

        for(int i=0;i<n;i++){
            if(balls.find(queries[i][0])!=balls.end()){
                colors[balls[queries[i][0]]]--;
                if(colors[balls[queries[i][0]]]==0){
                    colors.erase(balls[queries[i][0]]);
                }
            }
            colors[queries[i][1]]++;
            balls[queries[i][0]]=queries[i][1];
            ans[i]=colors.size();
        }

        return ans;

    }
};