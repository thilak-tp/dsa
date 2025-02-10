#include<iostream>
#include<vector>
using namespace std;
//Perform binary search on the row where the target might be present
    bool binarySearch(vector<int> &row, int target)
    {
       
        int beg = 0;
        int end = row.size()-1;


        while(beg <= end)
        {
            int mid = (beg+end) / 2;
            if(row[mid] == target)
                return true;
            else if(row[mid] > target)
                end = mid - 1;
            else
                beg = mid + 1;
        }


        return false;


    }

    //Here the TC is O(N+logM)
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       // Store the lengths of the rows and columns
       int n = matrix.size();
       int m = matrix[0].size();


        // Loop for every row in the matrix
        for(int i=0; i<n; i++)
        {
            // Check if the target could be between the ends of the row
            if(matrix[i][0] <= target && matrix[i][m-1] >= target)
                // perform a binary search on the row in which the target might lie
                return binarySearch(matrix[i],target);
        }
       
        // If the target is not found in the matrix then return false
        return false;
    }


// Lon(MXN) way of doing it is to conside the 2D to be a 1D array and appy binary search on it
bool searchMatrixOP(vector<vector<int>> matrix, int target)
{
  int m = matrix.size();
  int n = matrix[0].size();
  
  int beg = 0;
  int end = m * n -1;
  
  while(beg <= end)
  {
    int mid = (beg + end)/2;
    int row = mid/m;
    int col = mid%m;
    if(matrix[row][col] == target)
      return true;
    else if(matrix[row][col] > target )
      end = mid - 1;
    else 
      beg = mid + 1;
  }

  return false;
}
int main()
{
  vector<vector<int>> matrix = {{1,2,3},{44,55,44},{12,4,56}};
  int target;

  cout<<"Enter an element to search in the array"<<endl;
  cin>>target;

  if(searchMatrixOP(matrix, target))
    cout<<"The element was found in the matrix"<<endl;
  else 
    cout<<"The element was not found in the matrix"<<endl;
  return 0;
}
