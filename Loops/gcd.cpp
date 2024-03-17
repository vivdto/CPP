int gcd(int a, int b){

        int ans = 1;
    //code here to calculate and return gcd of a and b
    int min_num = min(a,b); 
    
    for(int i = 1; i<=min_num; i++)
    {
        if(a%i == 0 && b%i==0)
        ans = i;
    }
        return ans;
}