class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        int n=words.size();
        vector<string> ans;
        sort(words.begin(),words.end());
        for(int i=0;i<n;i++){
            string temp = words[i];

            for(int j=0;j<n;j++){
                if(words[j].size()>temp.size() && words[j].contains(temp)){
                    ans.push_back(temp);
                    break;
                }
            }
        }

        return ans;
    }
};