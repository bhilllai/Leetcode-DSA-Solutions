class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {

        int n=nums.size(),ans=0;
        unordered_map<int,int> m;

        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                m[nums[i]*nums[j]]++;
            }
        }

        int count=0;
        for(auto it:m){
            if(it.second>1){
                
                ans+=8*(it.second*(it.second-1)/2);
            }
        }

        return ans;
        
    }
};