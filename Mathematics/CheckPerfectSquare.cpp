// User function Template for C++
class Solution {
  public:
    long long int isPerfectSquare(long long int N){
        if((sqrt(N))==floor(sqrt(N)))
            return 1;
        else
        return 0;
    }
};