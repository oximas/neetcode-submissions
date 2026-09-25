class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> mp;
        int size = nums.size();
        for(int i=0;i<size;i++){
            int n = nums[i];
            int m = target-n;
            if(mp.find(m)!=mp.end()){
                return std::vector<int> {mp[m],i};
            }else{
                mp[n]=i;
            }
        }
        return std::vector<int> {};
    }
};
