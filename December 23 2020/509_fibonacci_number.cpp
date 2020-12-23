//in the recursion method, two if condition is checked every time. hence more time used.// 12 ms
/*class Solution {

public:
    int fib(int n) {
        if(n==0)
            return 0;
        else if(n==1)
            return 1;
        else
            return fib(n-1)+fib(n-2);

    }
};*/
//we can use for loop in this question to improve the time.//0 ms
/*class Solution {
public:
    int fib(int N) {
        if(N == 1){
            return 1;
        }
        int result = 0,a = 0,b = 1;
        for(int i = 1;i < N;i++){
            result = (a+b);
            a = b;
            b = result;
        }
        return result;
    }
};*/
// the best way for  this is using binet's formula//0ms
class Solution{
    public:
        int fib(int n){
            return((pow((1+sqrt(5)),n)-pow((1-sqrt(5)),n))/(sqrt(5)*pow(2,n)));
        }
};
