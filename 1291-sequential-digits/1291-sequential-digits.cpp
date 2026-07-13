class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        int z = 0;
        vector<int> ans;
        for (int i = 1; i < 10; i++) {
            z = i;
            int count = z + 1;
            while (z <= high) {
                if (z >= low) {
                    ans.push_back(z);
                }
                if (count > 9)
                    break;

                z = z * 10 + count;
                count++;
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};