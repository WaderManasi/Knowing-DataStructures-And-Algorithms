// Given two values N and M. 
// Give the value when N is halved M-1 times.

//Optimize solution to find halving of no
class Solution{
public:
    int mthHalf(int N, int M){
        return N/pow(2,M-1);
    }
};