class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n=nums.size();
        int mini=1;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum<mini){
                mini=sum;
            }
        }
        int startValue=std::max(1,1-mini);
        return startValue;
    }
};
