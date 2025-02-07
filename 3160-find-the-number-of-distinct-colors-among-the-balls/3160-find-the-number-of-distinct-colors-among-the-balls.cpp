class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        
        int n = queries.size();
        unordered_map<int,int> colors, ball_colors;
        vector<int> result(n);

        for (int i = 0; i < n; i++)
        {

            if (ball_colors[queries[i][0]] != 0)
            {
                colors[ball_colors[queries[i][0]]]--;
                
                if (colors[ball_colors[queries[i][0]]] < 1)
                {
                    colors.erase(ball_colors[queries[i][0]]);
                }
            }

            
            colors[queries[i][1]]++;

           
            ball_colors[queries[i][0]] = queries[i][1];
            result[i] = colors.size();
        }

        return result;
    }
};