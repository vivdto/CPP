/*

https://www.geeksforgeeks.org/prefix-sum-array-implementation-applications-competitive-programming/

--> Prefix Sum; 
We Will Store The Element in another array --> Prefix Array. 

This will store all the comulative sum of the array and called as Prefix sum.
What's Comulative Sum?

A cumulative sum array is one whose value at each index is the sum of all previous indexes plus itself (e.g., [1,2,3,4] becomes [1,3,6,10] ). While doing ...


Examples : 

Input: list = [10, 20, 30, 40, 50]
Output : [10, 30, 60, 100, 150]
Explanation:
for cumulative sum, every index of the output list will be list[i] = list[i] + originallist[i], therefore the resultant list will be [10, 10+20, 10+20+30, 10+20+30+40, 10+20+30+40+50] = [10, 30, 60, 100, 150]

Input: list = [4, 10, 15, 18, 20]
Output : [4, 14, 29, 47, 67]


:)


formula 

ps[i] = ps[i-1] + current_elem.

for it when we will initialize we have to start with the 1; because if we go with 0 at the time of initialization it will throw error as the formula is ps[i-1].




*/




#include<iostream>
using namespace std;
int main ()
{
    int n = 5; 
    int arr[n] = {10,20,30,40,60};






    return 0;
}