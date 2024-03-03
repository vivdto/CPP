//Recursion Way to Solve Factorial;

if(N<=1) return 1; 
return N*factorial(N-1);


// Solving in single line; 

int factorial (int n)
{
    return (n==1 || n == 0)?1:n*factorial(n-1);
}

