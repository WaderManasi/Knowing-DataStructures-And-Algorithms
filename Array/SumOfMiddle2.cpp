class Solution {
public:
    int findMidSum(int ar1[], int ar2[], int n) {
            vector<int>v;
            for(int i=0;i<n;i++)
            {
                v.emplace_back(ar1[i]);
                v.emplace_back(ar2[i]);
            }
            sort(v.begin(),v.end());
            int mid = v.size()/2;
            return v[mid-1]+v[mid];
    }
};