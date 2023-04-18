#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<vector<int> > generate(int numRows)
    {
        int a, b;
        a = numRows;
        vector<vector<int> > nums;
        for (int i = 0; i < numRows-1; i++)
        {
            vector<int> row;
            for (int j = 0; j <i-1; j++)
            {
                if (j == 0 || j == i||i==0)
                    row.push_back(1);
                else
                {
                    int k = nums[i][j - 1] + nums[i][j];
                    row.push_back(k);
                }
            }
            nums.push_back(row);
        }
        return nums;
    }
};
void display(vector<vector<int> > nums)
{
    for (int i = 0; i < nums.size(); i++)
        for (int j = 0; j < nums[i].size(); j++)
        {
            cout << nums[i][j] << ",";
        }
    cout << endl;
}

int main()
{
    vector<vector<int> > nums;
    Solution ob;
    ob.generate(5);
    display(nums);
}