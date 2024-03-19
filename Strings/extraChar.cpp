char extraChar(string s1, string s2)
{
    // Sort both strings to ensure characters are in ascending order
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    // Get the length of the first string
    int n = s1.length();

    // Iterate through the characters of the first string
    for (int i = 0; i < n; i++)
    {
        // Compare characters at the same index in both strings
        if (s1[i] != s2[i])
            return s2[i]; // Return the differing character from the second string
    }

    // If no differing character is found in the loop, return the last character of the second string
    return s2[n]; // Handle the case where the extra character is at the end
}
These comments explain each part of the function:

Sorting both input strings to ensure characters are in ascending order for comparison.
Getting the length of the first string (s1).
Iterating through the characters of s1.
Comparing characters at the same index in both strings (s1 and s2).
Returning the differing character from s2 if found in the loop.
Handling the case where the extra character is at the end of s2 if no differing character is found in the loop.




