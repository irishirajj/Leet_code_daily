class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int>target;
        //we defined a vector target
        //now, we will use the insert function;
        //the syntax of the insert function is:-
        //vector.insert(positon,value),
        //the position will be an iterator,not an index
        for(int i=0;i<nums.size();i++){
            target.insert(target.begin()+index[i],nums[i]);
        }
        return target;
    }
};
