class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>counts;
        for(int n :nums){
            if(counts.find(n)!=counts.end()){
                counts[n]++;
            }else{
                counts[n]=1;
            }
        }
        vector<tuple<int,int>> lst;
        for(auto& [k,v]: counts){
            lst.push_back(make_tuple(v,k));
        }
        sort(lst.rbegin(),lst.rend());
        vector<int> res;
        for(int i=0;i<k;i++){
            //cout<<lst[i].second<<'\n';
            res.push_back(get<1>(lst[i]));
        }
        return res;
    }
};
