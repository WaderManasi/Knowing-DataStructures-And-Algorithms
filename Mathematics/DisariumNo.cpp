int isDisarium(int N) {
        int i=floor(log10(N)+1);
        int n=N;
        int sum=0;
        while(n>0)
        {
            sum+=pow(n%10,i);
            i--;
            n=n/10;
        }
        if(sum==N)
            return 1;
        return 0;
    }