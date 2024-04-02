//Worst Case -- Will Run for n times


#include<iostream>
#include<vector>
using namespace std;

// Function to perform counting sort on an array
void counting_sort(int arr[], int n)
{
    // Finding the largest element in the array
    int largest = -1;
    for (int i = 0; i < n; i++)
    {
        largest = max(largest, arr[i]);
    }

    // Creating a frequency array to count occurrences of elements
    vector<int> freq(largest + 1, 0);

    // Counting occurrences of each element in the array
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    // Reconstructing the sorted array using the frequency array
    int j = 0;
    for (int i = 0; i <= largest; i++)
    {
        while (freq[i] > 0)
        {
            arr[j] = i;
            freq[i]--;
            j++;
        }
    }
}

int main ()
{
    // Sample input array
    int arr[] = { 19, 290, 67, 87, 45, 92, 73, 0, 11 };
    int n = sizeof(arr) / sizeof(int);

    // Calling counting sort function
    counting_sort(arr, n);

    // Displaying the sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}


/*uick notes for your interview:

Counting Sort: This algorithm is Counting Sort, which is a non-comparison-based sorting algorithm suitable for sorting integers with a relatively small range.
Time Complexity: Counting Sort has a time complexity of O(n+k), where n is the number of elements in the input array and k is the range of input.
Space Complexity: The space complexity of Counting Sort is O(n+k), where n is the number of elements in the input array and k is the range of input.
Key Concepts: The algorithm relies on counting the occurrences of each element and then reconstructing the sorted array based on these counts.
Suitability: Counting Sort is efficient when the range of input values is not significantly greater than the number of elements and when the input array contains only non-negative integers.
*/