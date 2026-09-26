class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        int i,j;
        i=0;
        j=nums.size()-1;
        while(i<j){
            int sum = nums[i]+nums[j];
            if(sum==t)return vector<int>{i+1,j+1};
            else if(sum>t) j--;
            else i++;
        }
        return vector<int>{};
    }
};
