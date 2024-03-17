int nFactorial(int n){
    int ans = 1;
    
    //Write your code here
    
    
    for(int i = 2; i<n; i++)
    {
    ans = ans*i;
    }
    
    return ans;
}