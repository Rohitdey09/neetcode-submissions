#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void backtrack(int index, int target, vector<int>& candidates, vector<int>& current, vector<vector<int>>& result) {
        if (target == 0) {
            result.push_back(current);
            return;
        }
        
        for (int i = index; i < candidates.size(); ++i) {
            // If the current element is greater than the remaining target, no point in proceeding
            if (candidates[i] > target) {
                break; 
            }
            
            // Skip duplicate elements to avoid duplicate combinations
            if (i > index && candidates[i] == candidates[i - 1]) {
                continue;
            }
            
            current.push_back(candidates[i]);
            
            // Move to i + 1 since each element can be used only once
            backtrack(i + 1, target - candidates[i], candidates, current, result);
            
            current.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> current;
        
        // Sorting is essential to handle duplicates correctly
        sort(candidates.begin(), candidates.end());
        
        backtrack(0, target, candidates, current, result);
        
        return result;
    }
};