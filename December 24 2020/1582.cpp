class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        //first of all lets get the size of the matrix mat;
        int m=mat.size(); //no. of rows
        int n=mat[0].size() ;  //no. of columns in each row
        int count =0;
        vector<pair<int,int>>v;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==1){
                    v.push_back(make_pair(i,j));
                }
            }
        }

        int o=v.size();
        vector<pair<int,int>>r;
        if(o==0){
            return 0;
        }
        if(o==1){
            return 1;
        }
        if(o>1){
        if(v[0].first!=v[1].first){
            r.push_back(v[0]);
        }

        for(int k=1;k<o-1;k++){
            if((v[k].first!=v[k-1].first) && (v[k].first!=v[k+1].first)){
                r.push_back(v[k]);
            }
        }
        if( o!=1){
            if(v[o-1].first!=v[o-2].first){
                r.push_back(v[o-1]);
            }
        }}
        int p=r.size();
        cout<<"p="<<p<<"\n";
        //vector<pair<int,int>>c;
        for(int k=0;k<p;k++){
            int counter=0;
            for(int l=0;l<o;l++){
                if(r[k].second==v[l].second){
                    counter++;

                }
            }
            if(counter==1){
                count++;
            }
        }

        return count;
    }
};
