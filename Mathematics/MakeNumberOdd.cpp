class Solution
{
public:
    int makeNumberOdd(int N)
    {
       if(N%2 == 1) return 1;
       for(int i=2;i<N;i++)
       {
           int p=(N/i);
           if(p%2 == 1 && ((N%2==0 && i%2==0 && N%i==0) || (N%2==1 && i%2==1 && N%i==0)))
            return i;
       }
    }
};