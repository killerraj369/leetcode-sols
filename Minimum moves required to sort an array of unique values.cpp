// 1 Move is defined as :- Swapping any 2 values present in the array
int findMoves(vector<int>x) {
        
        int ans=0;
        unordered_map<int,int> mp; // storing number with its index
        for(int i=0;i<x.size();i++) mp[x[i]]=i;
        
        vector<int> y=x;
        sort(y.begin(),y.end());
        
        for(int i=0;i<y.size();i++){
            int cur= y[i];
            int ind= mp[cur];
            
            if(ind!=i){
                // cout<<i<<" "<<ind<<endl;
                ans++;
                mp[x[i]]=ind;
                x[ind]=x[i];
            }
        }
        return ans;
    }
