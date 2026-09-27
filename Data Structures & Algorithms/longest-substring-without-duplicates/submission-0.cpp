class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int sz = s.size();
        if(sz==0 || sz==1)return sz;

        unordered_set<char> chars={s[0]};
        int maxlen=1;
        int len=1;
        int i=0,j=0;
        while(i<sz-1 and j<sz-1){
            char next = s[j+1];
            if(chars.find(next)!=chars.end()){
                //did find it...now move i to remove that element
                while(s[i]!=next){
                    chars.erase(s[i]);
                    i++;
                    len--;
                }
                i++;
                j++;
            }else{
                j++;
                chars.insert(s[j]);
                len++;
            }
            maxlen=max(maxlen,len);
        }
        return maxlen;

    }
};
