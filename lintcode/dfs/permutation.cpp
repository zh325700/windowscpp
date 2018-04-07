class Solution {
public:
    /*
     * @param nums: A list of integers.
     * @return: A list of permutations.
     */
    vector<vector<int>> permute(vector<int> &nums) {
        // write your code here

        vector<vector<int>> results;
        int n = nums.size();
        if(n == 0){
            results.push_back(vector<int>());
            return results;
        }
         vector<int> aPermutation;
         unordered_set<int> set;
         helper(nums, aPermutation, set, results);

         return results;
    }


    void helper(vector<int> &nums,
               vector<int> permutation,
               unordered_set<int> &set,
               vector<vector<int>> &results) {
        // 3. 递归的出口
        if (permutation.size() == nums.size()) {
            results.push_back(permutation);
            return;
        }

        // [3] => [3,1], [3,2], [3,4] ...
        for (int i = 0; i < nums.size(); i++) {
            if (set.count(nums[i])) {
                continue;
            }

            permutation.push_back(nums[i]);
            set.insert(nums[i]);
            helper(nums, permutation, set, results);
            set.erase(nums[i]);
            permutation.erase(permutation.end()-1);
        }

    }


};
