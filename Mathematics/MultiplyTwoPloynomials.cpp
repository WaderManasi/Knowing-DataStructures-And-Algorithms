//User function Template for C++

class Solution{
    public:
    vector<int>polyMultiply(int Arr1[], int Arr2[], int M, int N)
    {
        vector<int>v(M+N-1);
        
            for(int i=0;i<M;i++)
            {
                for(int j=0;j<N;j++)
                {
                    v[i+j]+=(Arr1[i]*Arr2[j]);
                }
            }
 
        return v;
    }
};