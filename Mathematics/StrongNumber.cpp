class Solution
{
public:
	public:
	    int factorial(int n)
	    {
	        if(n > 1)
                return n * factorial(n - 1);
            else
                return 1;
	    }
		int is_StrongNumber(int n)
		{
		    int sum = 0,N=n;
		    while(n>0)
		    {
		        int p = n%10;
		        sum += factorial(p);
		        n /= 10;
		    }
		   
		    if(sum == N)
		        return 1;
		    return 0;
		}
};