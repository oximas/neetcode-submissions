class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int countzeros=0;
        int mult = 1;
        for(int n: nums){
            if(n==0)countzeros++;
            else{
                mult*=n;
            }
            if(countzeros==2){
                
                return vector<int>(nums.size(),0);
            }
        }
        vector<int> ans(nums.size(),0);
        cout<<"mult="<<mult<<'\n';
        for(int i=0;i<nums.size();i++){
            //cout<<"nums[i]="<<nums[i]<<", mult="<<mult<<"mult/nums[i]"=
            if(nums[i]==0)ans[i]=mult;
            else if(countzeros==1)ans[i]=0;
            else ans[i]= mult/nums[i];
        }
        
        return ans;

    }
};
