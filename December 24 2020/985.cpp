class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
        vector<int>ans;
        int m=A.size();
        int n=queries.size();
        int sum=0;


        for(int i=0;i<m;i++){
            if(A[i]%2==0){
                sum+=A[i];
            }
        }




        for(int j=0;j<n;j++){
            if(queries[j][0]%2==0){

                if(A[queries[j][1]]%2==0){
                    sum+=queries[j][0];
                }


            }
            else{

                if(A[queries[j][1]]%2==0){
                    sum-=A[queries[j][1]];
                }
                else{
                    sum+=queries[j][0]+A[queries[j][1]];
                }

            }
            A[queries[j][1]]+=queries[j][0];
            /*for(auto& it:A){
                cout<<it<<" "<<"\n";
            }
            cout<<"\n";*/
            ans.push_back(sum);

        }

        return ans;



    }
};
