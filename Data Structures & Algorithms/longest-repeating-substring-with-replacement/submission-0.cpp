#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int characterReplacement(std::string s, int k) {
        vector<int> counts(26, 0);
        
        int left = 0;
        int max_freq = 0;
        int max_length = 0;
        
        for (int right = 0; right < s.length(); ++right) {
            counts[s[right] - 'A']++;
            
            max_freq = max(max_freq, counts[s[right] - 'A']);
            
            int current_window_len = right - left + 1;
            
            if (current_window_len - max_freq > k) {
                counts[s[left] - 'A']--;
                left++;
            }
            
            max_length = max(max_length, right - left + 1);
        }
        
        return max_length;
    }
};