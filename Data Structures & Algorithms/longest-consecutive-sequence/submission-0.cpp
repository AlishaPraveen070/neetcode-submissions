class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int longest = 0;

        for (int num : st) {
            // Start only at the beginning of a sequence.
            if (num != INT_MIN && st.count(num - 1)) {
                continue;
            }

            int current = num;
            int length = 1;

            while (current != INT_MAX && st.count(current + 1)) {
                current++;
                length++;
            }

            longest = max(longest, length);
        }

        return longest;
    }
};