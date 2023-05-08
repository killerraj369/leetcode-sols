class Solution {
public:
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& obstacles) 
    {
        vector<int> ans;
        vector<int> lis(obstacles.size(),1e9);
        
        for(auto i:obstacles)
        {
            int pos = upper_bound(lis.begin(),lis.end(),i)-lis.begin();
            lis[pos]=i;
            ans.push_back(pos+1);
        }  

        return ans; 
    }
};