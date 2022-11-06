class Solution {
public:
    bool lexismaller(string temp,string ans){
        if(temp<ans){
            return true;
        }
        return false;
    }
    string orderlyQueue(string s, int k) {
        string ans=s;
        if(k==1){
            for(int i=1;i<s.size();i++){
                string temp=s.substr(1,s.size()-1)+s.substr(0,1);
                s=temp;
                if(lexismaller(temp,ans)){
                    ans=temp;
                }
                cout<<temp;
            }
                return ans;
            }
        else {
                sort(s.begin(),s.end());
                return s;
            }
        }
    
};