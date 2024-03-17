int LCM(int a, int b){

    //write your code here
    //return LCM of a and b
    
    
    int max_num = max(a,b);
    int lcm = a*b;
    
    for (int i = max_num; i<=lcm; i++)
    {
        if(i%a == 0 && i%b == 0)
        {
            return i;
            break;
        }
        
    }
    
    
    
}