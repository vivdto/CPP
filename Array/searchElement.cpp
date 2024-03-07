int search(int arr[], int N, int X)
    {
      //  int ele; 
        for(int i = 0; i<N; i++){
            
            //cin>>arr[N];
            
            if(arr[i]==X)
            return i;
            
            
        }
        
        return -1;
        // Your code here
        
    }