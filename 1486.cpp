class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> vec;
        int x=0;
        //Bitwise funcitons are:-
        //AND & result is 1 if both bits are 1;
        //OR  | result is 1 if atlest one bit is 1;
        //X0R ^ result is 1 if the two bits are different;
        //<<    left shifts the bits of the first operant,
        //      second operand decides the no. of shifts;
        //>>    right shifts the bits of the firsrt operand,
        //      second operand decides the no. of shifts
        //NOT ~ result is 1 if the bit is 0;
        for(int i=0;i<n;i++){
            x=x^(start+2*i);
        }
        return x;

    }
};
