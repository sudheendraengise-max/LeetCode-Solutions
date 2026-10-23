class Solution {
public:
    int maxCoins(std::vector<int>& piles) {
        std::sort(piles.begin(), piles.end());
        int totalCoins = 0;
        int n = piles.size();
        for (int i = n / 3; i < n; i += 2) {
            totalCoins += piles[i];
        }
        
        return totalCoins;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna