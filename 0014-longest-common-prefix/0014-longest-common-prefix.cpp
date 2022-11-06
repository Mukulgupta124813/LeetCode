class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      string ans="";
        int k=0,j=0;
        int n=strs[0].size()-1;
        while(j<=n){
            char temp = strs[0][j];
            for(int i=0;i<strs.size();i++){
                if(strs[i][j]!=temp){
                    return ans;
                }
            }
            ans+=temp;
            j++;
        }
        return ans;
    }
};