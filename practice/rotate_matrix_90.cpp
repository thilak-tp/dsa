#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector <vector<int>> rotateMatrix90(vector <vector<int>> &matrix)
{
  int m = matrix.size();
  int n = matrix[0].size();
  
  for(int i=0; i<m; i++)
  for(int j=0; j<i; j++)
  {
    // Transposing the matrix
    swap(matrix[i][j], matrix[j][i]);
  }

  for(int i=0; i<m; i++)
  {
    reverse(matrix[i].begin(), matrix[i].end());
  }
  
  return matrix;
}

int main()
{
  vector <vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
  vector <vector<int>> rotated = rotateMatrix90(matrix);
  for(auto it: rotated)
  {
    for(auto ele: it)
    {
      cout<<ele<<" ";
    }
    cout<<endl;
  }
  return 0;
}
