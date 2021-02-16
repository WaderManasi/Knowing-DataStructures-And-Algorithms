
class Solution {
  public:
    int getHypotenuse(long long N) {
        /*
        Area = 1/2*(b*h);
        Area = 1/2*(b^2)
        2*Area = b^2
        
        */
        
        return floor(sqrt(4*N));
    }
};