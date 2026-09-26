class Solution {
public:
    int maxArea(vector<int>& hs) {
        int i,j;
        i=0;
        j=hs.size()-1;
        int maxsize = (j-i)*min(hs[i],hs[j]);
        bool areachanged = false;
        while(i<j){
            if(hs[i]<hs[j]) i++;
            else j--;
            int size = (j-i)*min(hs[i],hs[j]);
            if(size>maxsize)maxsize=size;
        } 
        return maxsize;
    }
};
