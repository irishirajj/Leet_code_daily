class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {

        int m=nums.size();
        int n=nums[0].size();
        vector<vector<int>>reshaped;
        if(m*n!=r*c){
            return nums;
        }
        int a=0,b=0,current=0;
/*        for(int i=0;i<r;i++){                //This is the first way, but take a bit more time
            vector<int>row;

            for(int j=0;j<c;j++){
                row.push_back(nums[a][b]);
                b++;
                if(b==(n)){
                    a+=1;
                    b=0;
                }
            }
            reshaped.push_back(row);
        }
        return reshaped;                              */
        for(int i=0;i<r;i++){                   //This is also not a very good solution.
            vector<int>row;
            for(int j=0;j<c;j++){
                row.push_back(nums[a][b]);
                current++;
                b=current%n;
                a=current/n;
            }
            reshaped.push_back(row);
        }
        return reshaped;

    }
};
