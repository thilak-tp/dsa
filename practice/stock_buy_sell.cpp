#include<iostream>
#include<vector>
#include<climits>
using namespace std;


    // A function calculate maximum profit | O(N) TC | O(1) SC
    int maxProfit(vector<int>& prices) {

        // To keep track of the minimum number
        int minPrice = INT_MAX;
        // To keep track of the maximum difference
        int maxPro = 0;

        // In a single pass for the prices array
        for(auto it: prices)
        {
            // Check for if the price is minimum
            minPrice = min(minPrice, it);
            // Check which is max, the maxPro of the current price - minPrice
            maxPro = max(maxPro, it - minPrice);
        }

        // At the end, maxPro will be available
        return maxPro;
    }

int main()
{

  vector<int> prices = {1,2,3,4,5,6};
  cout<<"The max profit from this buy and sell session is "<<maxProfit(prices)<<endl;


  return 0;
}
