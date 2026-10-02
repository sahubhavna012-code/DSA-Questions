int removeDuplicates(int* nums, int numsSize) {
    
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
    
    return unique; 
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna