class Solution {
  public:
    int findNthTerm(int N) {
        int a = 0;
        int i = 1;
        for(int j=0;j<N;j++)
        {
            a+=i;
            i++;
        }
        return a;
    }
};