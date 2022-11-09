class Solution {
public:
    void removeStr(string& s, int i){
        s.erase(i,2);
    }
 
    string makeGood(string s) {
        int i=0;
        while(i<s.size()){
           if(s[i]==s[i+1]-32 || s[i]==s[i+1]+32 ){
                removeStr(s,i);
               i=0;
           }
            else{
            i++;}
        }
        return s;
    }
};