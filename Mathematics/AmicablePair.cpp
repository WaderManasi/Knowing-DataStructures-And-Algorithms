class Solution:
    def isAmicable(self, A , B):
        if(A==B):
            return 0;
        sum1=1
        sum2=1
        for i in range(2,A):
            if(A%i == 0):
                sum1 += i
        for i in range(2,B):
            if(B%i == 0):
                sum2 += i
        if(sum1 == B and sum2 == A):
            return 1
        else:
            return 0