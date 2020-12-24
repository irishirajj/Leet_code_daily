class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        int m=A.size();
        int n=A[0].size();
        vector<vector<int>>v;

        for(int j=0;j<n;j++){
            vector<int>row;
            for(int i=0;i<m;i++){
                row.push_back(A[i][j]);
            }
            v.push_back(row);
        }
        return v;
    }
};
