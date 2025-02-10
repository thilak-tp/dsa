#include<iostream>
#include<vector>

using namespace std;
// Brute Force way is to iterate through each element in the matrixx and if a zero is found.
// Pass its row and column index to markRow and markCol functions with -1
// This function assigns the row mentioned with -1
void markRow(vector<vector<int>> &matrix, int n, int m, int i)
{
  for(int j=0; j<n; j++)
  {
    if(matrix[i][j] != 0)
    {
       matrix[i][j] = -1;
    }
  }
}


// This function assigns the column mentioned with -1
void markCol(vector<vector<int>> &matrix, int n, int m, int j)
{
  for(int i=0; i<n; i++)
  {
    if(matrix[i][j] != 0)
    {
       matrix[i][j] = -1;
    }
  }
}

// Tp get the row and column where 0 is located and call markRow and markCol functions 
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m )
{
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<m; j++)
    {
      if(matrix[i][j] == 0)
      {
        markRow(matrix,n,m,i);
        markCol(matrix,n,m,j);
      }
    }
  }

  // To assign all -1s with zeros
 /* 
  for(auto it: matrix)
  for(auto ele: it)
  {
    if(ele == -1)
      ele = 0;
  }
*/
  for(int i=0; i<n; i++)
  for(int j=0; j<n; j++)
  {
    if(matrix[i][j] == -1)
      matrix[i][j] = 0; 
  }
  return matrix;

}

int main()
{
  vector <vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
  int n = matrix.size();
  int m = matrix[0].size();
  vector <vector <int>> ans= zeroMatrix(matrix,n,m);
  for(auto it: ans)
  {
    for(auto ele: it)
    {
      cout<<ele<<" ";
    }
    cout<<endl;
  }
  return 0;
}
