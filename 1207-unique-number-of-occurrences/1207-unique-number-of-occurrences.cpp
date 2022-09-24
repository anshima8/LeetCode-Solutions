class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>m;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
            
        }
        set<int>s;
        for(auto j:m){
            s.insert(j.second);
        }
        if(m.size()==s.size())
        {
            return 1;
        } 
       
        
        return 0;
    }
};