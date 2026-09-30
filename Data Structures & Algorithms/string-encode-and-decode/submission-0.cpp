class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";
        for(int i=0; i<strs.size();i++){
            encoded+=to_string(strs[i].size())+"#";
            encoded+=strs[i];
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;
        int i = 0;
        while(i < s.size()) {
            int hashPos = s.find('#', i);
            int n = stoi(s.substr(i, hashPos - i));
            decoded.push_back(s.substr(hashPos + 1, n));
            i = hashPos + 1 + n;
        }
        return decoded;
    }
};