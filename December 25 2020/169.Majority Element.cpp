class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        multimap<int,int>M;
        unordered_map<int,int>::iterator it;
        for(it=mp.begin();it!=mp.end();it++){
            M.insert(make_pair(it->second,it->first));
        }
        multimap<int,int>::reverse_iterator itr;
        itr=(M.rbegin());
        return itr->second;
    }
};
