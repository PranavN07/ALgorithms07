class Solution
{
public:
    int compareVersion(string version1, string version2)
    {   
        // Initialize indices i and j to iterate over version1 and version2 respectively
        int i = 0;
        int j = 0;
        // Initialize variables to store the numerical value of each version component
        int val1 = 0;
        int val2 = 0;
        // Get the size of version1 and version2
        int n = version1.size();
        int m = version2.size();
        
        // Loop until both version strings are completely traversed
        while (i < n or j < m)
        {
            // Reset val1 and val2 for each iteration
            val1 = val2 = 0;
            
            // Extract numerical value of version component from version1
            while (i < n and version1[i] != '.')
            {
                val1 = val1 * 10 + (version1[i] - '0');
                i++;
            }
            
            // Extract numerical value of version component from version2
            while (j < m and version2[j] != '.')
            {
                val2 = val2 * 10 + (version2[j] - '0');
                j++;
            }
            
            // Compare the numerical values of version components
            if (val1 < val2)
            {
                return -1;
            }
            else if (val1 > val2)
            { 
                return 1;
            }
            
            // Move to the next character after the dot
            i++; 
            j++;
        }
        
        // Both version strings are identical, so return 0
        return 0;
    }
};