class Solution{
public:
    int longestConsecutive(vector<int>& nums){
        unordered_set<int> x(nums.begin(),nums.end());
        int longest = 0;
        for(int n:x){
            if(x.find(n-1) == x.end()){
                int length = 1;
                while(x.find(n+length) != x.end()){
                    length++;
                }
                longest = max(longest,length);
            }
        }
        return longest;
    }
};