class Solution {
  public:
    int revCoding(int n, int m) {
        int p=(n*(n+1))/2;
        return p==m?1:0;
    }
};