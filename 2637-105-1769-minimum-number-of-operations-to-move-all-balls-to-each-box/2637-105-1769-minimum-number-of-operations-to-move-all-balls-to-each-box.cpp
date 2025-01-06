class Solution {
public:
    vector<int> minOperations(string boxes) {
        
        int n=boxes.size();
        vector<int> indexes;
        for(int i=0;i<n;i++){
            if(boxes[i]=='1'){
                indexes.push_back(i);
            }
        }
        
        int numindexes = indexes.size();
        vector<int> ans(n);
        
        for(int i=0;i<n;i++){
            int total=0;
            for(int j=0;j<numindexes;j++){
                total+=abs(i-indexes[j]);
            }
            ans[i]=total;
        }
        
        return ans;
        
    }
};