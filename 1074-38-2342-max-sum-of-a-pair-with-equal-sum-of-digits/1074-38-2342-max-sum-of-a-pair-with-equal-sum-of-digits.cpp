class Solution {
public:

    int sumdigits(int num){
        int ans=num%10;
        while(num/=10){
            ans+=num%10;
        }

        return ans;
    }

    int maximumSum(vector<int>& nums) {

        int n=nums.size();

        unordered_map<int,vector<int>> m;
        int maxi=0;

        for(int i=0;i<n;i++){
            m[sumdigits(nums[i])].push_back(nums[i]);
            int size=m[sumdigits(nums[i])].size();
            maxi=max(maxi,size);
        }

        if(maxi==1) return -1;

        int ans=0;

        for(auto it:m){
            int temp=0;
            int size=it.second.size();
            if(size>1){
                sort(it.second.begin(),it.second.end());
                temp=it.second[size-1]+it.second[size-2];
            }
                ans=max(ans,temp);
            }
            
        
        return ans;

    }
};