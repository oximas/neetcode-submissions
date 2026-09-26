class Solution {
public:
    bool isAlphaNum(char c){
        c= tolower(c);
        if(('a'<=c and c<='z') or('0'<=c and c<='9'))return true;
        else return false;
    }
    bool isPalindrome(string s) {
        
        int i,j;
        i=0;
        j=s.size()-1;
        while(i<j){
            char a,b;
            a=s[i];
            b=s[j];
            if(!isAlphaNum(a)){
                i++;
                continue;
            }
            if(!isAlphaNum(b)){
                j--;
                continue;
            }
            a= tolower(a);
            b= tolower(b);
            if(a!=b){
                return false;
            }
            i++;j--;
        }
        return true;
    }
};
