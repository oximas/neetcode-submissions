class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int l1=s1.size();
        int l2=s2.size();

        if(l1>l2)return false;
        vector<int> v1(26,0);
        vector<int> v2(26,0);

        for(char c: s1)v1[c-'a']++;

        int l=0,r=0;
        while(r<l2){
            v2[s2[r]-'a']++;
            r++;
            if(v1==v2)return true;
            if(r>=l1){
                v2[s2[l]-'a']--;
                l++;
            }
        }
        return false;
    }
};
