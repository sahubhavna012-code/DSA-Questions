int removeDuplicates(int* nums, int numsSize) {
    // Coaching Analysis:
    // Your logic for tracking unique elements is almost correct, but there are two critical issues:
    // 1. Return Value: The function signature requires returning the count of unique elements (int). You are currently returning nothing.
    // 2. The Print Loop: You have a loop at the end printing 'unique' repeatedly. This is not required by LeetCode and will cause a "Wrong Answer" or "Time Limit Exceeded".
    // 3. Logic Bug: In your print loop, you are printing the variable 'unique' instead of the array element nums[i].
    
    // Complexity Analysis:
    // Current Time Complexity: O(n) - Single pass through the array.
    // Current Space Complexity: O(1) - In-place modification.
    // This is the optimal complexity for this problem.

    int i=0;
    int j=1;
    int unique=1;

    while(j<numsSize)
    {
        if(nums[j]==nums[j-1])
        {
            j++;
            continue;
        }
        nums[i+1]=nums[j];
        j++;
        i++;
        unique++;
    }
    
    return unique; // Added return statement to make the code functional
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna