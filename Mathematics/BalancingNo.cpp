class Solution{
public:	
	bool balancedNumber(string N)
	{
	    int sum1=0,sum2=0;
	    for(int i=0;i<N.length()/2;i++)
	        sum1+=N[i]-'0';
	    for(int i=(N.length()/2)+1;i<N.length();i++)
	        sum2+=N[i]-'0';
	    if(sum1==sum2)
	        return 1;
	   return 0;
	}
};
