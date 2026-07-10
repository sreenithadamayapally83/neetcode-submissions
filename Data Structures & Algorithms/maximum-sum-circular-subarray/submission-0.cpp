class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
       int gloMax = nums[0],gloMin = nums[0],currMax = 0,currMin = 0,tot = 0;
       for(int& num:nums){
        currMax = max(currMax+num,num);
        currMin = min(currMin+num,num);
        tot += num;
        gloMax = max(gloMax,currMax);
        gloMin = min(gloMin,currMin);
       }
       if(gloMax > 0){
        return max(gloMax, tot-gloMin);
       }
       else{
        return gloMax;
       }
    }
};