class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        map<vector<int>,vector<string>>groups;

        for(string s: strs){
            vector<int> count(26,0);
            for(char c:s){
                count[c-'a']++;
            }
            groups[count].push_back(s);

        }
        vector<vector<string>>res;
        for(auto& [v,k] : groups){
            res.push_back(k);
        }
        return res;
    }
    
};
