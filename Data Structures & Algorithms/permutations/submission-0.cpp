#include <vector>

using namespace std;

class Solution {
public:
    void backtrack(vector<int>& nums, vector<bool>& visited, vector<int>& current, vector<vector<int>>& result) {
        // Base Case: If the current permutation is complete
        if (current.size() == nums.size()) {
            result.push_back(current);
            return;
        }
        
        // Try every element as a candidate for the current position
        for (int i = 0; i < nums.size(); ++i) {
            // If the element is already used in the current path, skip it
            if (visited[i]) {
                continue;
            }
            
            // Take the element
            visited[i] = true;
            current.push_back(nums[i]);
            
            // Recurse to fill the next position
            backtrack(nums, visited, current, result);
            
            // Backtrack: restore state for the next iteration choice
            current.pop_back();
            visited[i] = false;
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> current;
        // Track whether an element at index i has been used
        vector<bool> visited(nums.size(), false);
        
        backtrack(nums, visited, current, result);
        
        return result;
    }
};