class Solution {
public:
    int maxProfit(vector<int>& ps) {
        int profit=0;
        int minP = ps[0];
        for(int p: ps){
            profit = max(p-minP,profit);
            minP = min(p,minP);
        }
        return profit;
    }
};
