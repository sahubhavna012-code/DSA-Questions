class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> c(m + n);
        int id = 0;
        int i = 0, j = 0;
        while (i < m && j < n)
        {
            if (nums1[i] <=
                nums2[j])
            {
                c[id] = nums1[i];
                i++;
                id++;
            } else {
                c[id] = nums2[j];
                j++;
                id++;
            }
        }
        while (i < m) {
            c[id] = nums1[i];
            i++;
            id++;
        }
        while (j < n) {
            c[id] = nums2[j];
            j++;
            id++;
        }
        nums1 = c;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna