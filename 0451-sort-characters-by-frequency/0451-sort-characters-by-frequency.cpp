class Solution {
public:
    

    string frequencySort(string s) {
        unordered_map<char, int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        set<pair<int, char>> m;
        for(auto [a,b]:mp){
            m.insert({-b,a});
        }
        string str="";
        for(auto [a,b]:m){
            str+=string(-a,b);
        }
        return str;
    }
};