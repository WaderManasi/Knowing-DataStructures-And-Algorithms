//User function template for C++
class Solution{
public:
	int getSingle(int arr[], int n) {
	    int res=arr[0];
	    for(int i=1;i<n;i++)
	    {
	        res=res^arr[i];
	    }
	    return res;
	}
};
