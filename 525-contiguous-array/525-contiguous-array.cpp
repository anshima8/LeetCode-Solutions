class Solution {
public:
    int findMaxLength(vector<int>& nums) {
      
        
        /*int ans=0;
        for(int i=0;i<nums.size();i++){
            int c0=0;
        int c1=0;
            for(int j=i;j<nums.size();j++){
            if(nums[j]==0)
                c0++;
                else
                    c1++;
                if(c0==c1){
                    ans=max(ans,j-i+1);
                }
        }
        }
        return ans;
        tle................*/
        
        int n = nums.size();

		unordered_map<int,int> m;

		int ans = 0, sum = 0;

		for(int i = 0; i < n; i++){

			if(nums[i] == 1) sum++;
			else sum--;

			if(sum == 0){
				ans = max(ans,i+1);
			}

			if(m.find(sum) == m.end()){
				m[sum] = i;
			}else{
				ans = max(ans,i - m[sum]);
			}
		}

		return ans;
                
        
    }
};