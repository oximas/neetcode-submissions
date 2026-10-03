class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        unordered_map<char,char> m = {{')','('},{'}','{'},{']','['}};
        unordered_set<char> rev_brackets = {']',')','}'};
        for(char c:s){
            if(rev_brackets.find(c)!=rev_brackets.end()){
                //its a rev bracket
                if(!st.empty() && st.top()==m[c]){
                    st.pop();
                }else{
                    return false;
                }
            }else{
                //its a front bracket
                st.push(c);
            }
        }
        return st.empty();
    }
};
