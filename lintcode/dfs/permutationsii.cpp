class Solution {
public:
    /*
     * @param :  A list of integers
     * @return: A list of unique permutations
     */
    vector<vector<int>> permuteUnique(vector<int> &nums) {
        // write your code here
        // 先对数组进行排序，然后permutation， permutation 判断的时候看看前一个是不是相同的，相同的就跳过这个permutation,注意区别   [1,2,2'] 和 [1,2'] 这种情况
        vector<vector<int>> results;
        if(nums.size() == 0){
            results.push_back(vector<int>());
            return results;
        }
        vector<int> permutation;
        vector<bool> map(nums.size(),false); // initialize as all not used (false);

        sort(nums.begin(),nums.end());

        helper(nums,results,permutation,map);

        return results;


    }


    void helper(vector<int> &nums,
                vector<vector<int>> &results,
                vector<int> &permutation,
                vector<bool> &map){

                    for(int i =0; i<nums.size(); i++){

                        if(permutation.size() == nums.size()){
                            results.push_back(permutation);
                            return;
                        }

                        if(map[i]){
                             continue;
                        }

                        if(i>0 && nums[i] == nums[i-1] && map[i-1] == false){
                            continue;
                        }

                        map[i] = true;
                        permutation.push_back(nums[i]);
                        helper(nums,results,permutation,map);
                        permutation.pop_back();
                        map[i] = false;

                    }

                }


};
