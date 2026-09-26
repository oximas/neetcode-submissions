class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& ns) {
        sort(ns.begin(),ns.end());
        int i,j,k;
        int s = ns.size();
        vector<vector<int>> res;

        for(i=0;i<s-2;i++){
            if(i > 0 && ns[i] == ns[i-1]) continue;
            j=i+1;
            k=s-1;
            while(j<k){
                int sum = ns[j]+ns[k];
                if(ns[i]==-sum){
                    res.push_back(vector<int>{ns[i],ns[j],ns[k]});
                    while(j < k && ns[j] == ns[j+1]) j++;
                    while(j < k && ns[k] == ns[k-1]) k--;
                    j++;k--;
                }else if(ns[i]<-sum){
                    j++;
                }else{
                    k--;
                }

            }
        }

        return res;

}};
