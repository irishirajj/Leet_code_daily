class Solution {
public:
    int findLucky(vector<int>& arr) {
    int n=arr.size();
    unordered_map<int,int>mp;

    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    int ans =0;
    for(auto i:mp){
        if(i.first==i.second){
            ans=max(ans,i.first);
        }
    }
    if(ans==0)
        return -1;
    else
        return ans;
    }
};
