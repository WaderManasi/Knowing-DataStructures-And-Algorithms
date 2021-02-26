class Solution{
public:
    bool isPrime(int n)
    {
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
                return false;
        }
        return true;
    }
    vector<int> primeDivision(int N){
        vector<int>v;
        for(int i=2;i<=N;i++)
        {
            if(isPrime(i))
            {
                if(isPrime(N-i))
                {
                    v.emplace_back(i);
                    v.emplace_back(N-i);
                    break;
                }
            }
        }
        return v;
    }
};