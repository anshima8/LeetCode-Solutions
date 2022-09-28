class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
             //int count=0;
//         int sum=0;
//         for(int i=0;i<nums.size();i++){
//             sum= nums[i];
//             if(sum==k)
//                 count++;
        
//     for(int j=i+1;j<nums.size();j++){
//         sum+=nums[j];
//            if(sum==k)
//                 count++;
        
//     }
//         }
//         return count;
    /*    int i=0,j=0;
        int count=0,sum=0;
       
        while(j<nums.size()){
            sum+=nums[j];
            if(sum>k){
                sum-=nums[i];
                i++;
            }
            
            if(sum<k)
                j++;
            if(sum==k){
                count++;
                sum-=nums[i];
                i++;
            
                j++;}
                
            
            
        }
        return count;
        */
        
  /*     unordered_set<int>s;
        int count=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum==k || s.find(sum-k)!=s.end())
                count++;
           s.insert(sum);
        }
        return count;
        */
        unordered_map<int,int>m;
        int ans=0;
        int sum=0;
        m[sum]=1;
        for(auto i:nums){
            sum+=i;
          if(m.find(sum-k)!=m.end()){
             ans+=m[sum-k]; 
          } 
            m[sum]++;
        }
   return ans;
    }
};