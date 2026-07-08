class Solution{
public:
    vector<int> twoSum(vector<int>& nums,int target){
        unordered_map<int,int> x;
        for(int i=0;i<nums.size();i++){
            int d = target - nums[i];
            if(x.find(d) != x.end()){
                return {x[d],i};
            }
            x[nums[i]] = i;
        }
        return {};
    }
};