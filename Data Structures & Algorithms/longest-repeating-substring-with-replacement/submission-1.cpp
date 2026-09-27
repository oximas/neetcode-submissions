class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>count;
        int maxf=0;
        int res =0 ;
        int l=0,r=0;
        for(r=0;r<s.size();r++){
            if(count.find(s[r])!=count.end()){
                count[s[r]]+=1;
            }else{
                count[s[r]]=1;
            }
            maxf=max(maxf,count[s[r]]);
            while( (r-l+1)-maxf>k){
                count[s[l]]-=1;
                l++;
            }
            res = max(r-l+1,res);
        }
        return res;
    }
};
