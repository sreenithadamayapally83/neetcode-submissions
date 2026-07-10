class Solution{
public:
    int maxSubarraySumCircular(vector<int>& nums){
        int glomax = nums[0],glomin = nums[0],currmax = 0,currmin = 0,tot = 0;
        for(int n:nums){
            currmax = max(currmax+n,n);
            currmin = min(currmin+n,n);
            tot += n;
            glomax = max(glomax,currmax);
            glomin = min(glomin,currmin);

        }
        if(glomax > 0){
            return max(glomax,tot-glomin);
        }
        else{
            return glomax;
        }
    }
};