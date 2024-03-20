template<class T>
T largest (T arr[], int n)
{
    for (int i = 1; i<n; i++)
    {
        T max = arr[0];

        if (arr[i]>max){
        max = arr[i];    
        }
    }

    return max;
    
}


/*
template <class T>
T largest(T arr[], int n) {
    
    //code here
    T largest = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    
    return largest;
}

*/