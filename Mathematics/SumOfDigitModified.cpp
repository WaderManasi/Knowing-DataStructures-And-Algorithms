
class Solution {
  public:
    int getsum(int n)
    {
        int sum=0;
        while(n>0)
        {
            sum+=n%10;
            n=n/10;
        }
        return sum;
    }
    int isMagic(int N) {
        int sum=getsum(N);//6
        while(N>0){
           if(sum == 1)
            return 1;
            sum=getsum(sum); 
            N=N/10;
        }
       return 0;
    }
};
