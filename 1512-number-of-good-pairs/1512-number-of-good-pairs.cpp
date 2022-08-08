class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
       int count=0;
        map<int,int>mp;
        for(int i: nums){
            count+=mp[i];
            mp[i]++;
        }
    return count;
    }
};