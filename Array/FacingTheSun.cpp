class Solution{
public:	
	// Returns count buildings that can see sunlight
	int countBuildings(int h[], int n) {
	    int max=h[0];
	    int ct=0;
	    for(int i=1;i<n;i++)
	    {
	        if(max<h[i])
	        {
	            ct++;
	            max=h[i];
	        }
	    }
	    return ct+1;
	}
};