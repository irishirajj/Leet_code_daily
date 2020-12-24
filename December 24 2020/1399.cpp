class Solution {

public:
    int sum(int a){   //This function takes imput the number and return the sum of its digits;
        int sum=0;
        //cout<<a<<" ";
        while(a>0){
            sum+=a%10;
            a=a/10;
        }
        //cout<<sum<<"\n";
        return sum;
    };
    multimap<int,int>invert(map<int,int> & m){ //This function takes a map and returns a map after inverting the keys and                                                  and values;
        multimap<int,int> M;
        map<int,int>::iterator it;
        for(it=m.begin();it!=m.end();it++){
           M.insert(make_pair(it->second,it->first));
        }
        return M;
    };
    int countLargestGroup(int n) {

        map<int,int>m;
        //cout<<n<<" ";
        for(int i=n;i>0;i--){
           // cout<<i<<" ";
            m[sum(i)]++;
        }
        int max=0;
        multimap<int,int> newmap=invert(m);
        multimap<int,int>::reverse_iterator it;
        it=newmap.rbegin();
        max=it->first;
        int count=0;//The group having the largest sizes will be at the end ..so wrote the count accordingly.
        for(it=newmap.rbegin();it!=newmap.rend();it++){
           if(max==it->first){
               count++;
           }
        }
        return count;
    }
};l
