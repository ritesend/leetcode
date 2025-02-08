class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
    int n = nums.size();
    vector<pair<int, int>> valToInd(n);
    for (int i = 0; i < n; i++)
        valToInd[i] = { nums[i], i };
    sort(begin(valToInd), end(valToInd));
    vector<vector<int>> indices{};
    for (int i = 0; i < n; i++) {
        if (i == 0 || valToInd[i].first - valToInd[i - 1].first > limit)
            indices.push_back( { } );
        indices.back().push_back(valToInd[i].second);
    }
    vector<int> res(n, 0);
    for (const auto& ind : indices) {
        vector<int> sortedIndex(ind);
        sort(begin(sortedIndex), end(sortedIndex));
        for (int j = 0; j < ind.size(); j++)
            res[sortedIndex[j]] = nums[ind[j]];
    }
    return res;
}
};