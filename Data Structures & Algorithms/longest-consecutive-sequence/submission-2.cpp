class Solution{
public:
    int longestConsecutive(vector<int>& nums){
        unordered_set<int> res(nums.begin(),nums.end());
        int longest = 0;
        for(int n:res){
            if(res.find(n-1) == res.end()){
                int l = 1;
                while(res.find(n + l) != res.end()){
                    l++;
                }
                longest  = max(longest,l);
            }
            
        }
        return longest;
    }
};