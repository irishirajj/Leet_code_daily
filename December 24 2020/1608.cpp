class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n =nums.size();
        sort(nums.begin(),nums.end());
        int ans;
        if(nums[0]>=n)
            ans=n;
        else{ans=n-1;
        for(int i=1;i<n;i++){
            if(nums[i]>=ans&&nums[i-1]<ans){
                break;
            }
            ans--;
        }
        }
        if(ans==0)return -1;
        else return ans;
    }
};
