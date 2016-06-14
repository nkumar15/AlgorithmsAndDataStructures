/*
Context
Given a  2D Array, :

1 1 1 0 0 0
0 1 0 0 0 0
1 1 1 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
We define an hourglass in  to be a subset of values with indices falling in this pattern in 's graphical representation:

a b c
  d
e f g
There are  hourglasses in , and an hourglass sum is the sum of an hourglass' values.
Find the maximum value among all hour glass

values will be in range -9 to 9 inclusive

*/

#include <iostream>
#include <vector>

using namespace std;


int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }

    int max = -64;
    for (int row = 1; row < 5; row++ )
    {
        for ( int col = 1; col < 5; col++ )
        {
           int s = arr[ row-1 ][ col-1 ] + arr[ row - 1 ][ col ] +  arr[ row - 1 ][ col + 1]
                 + + arr[ row ][ col ]
                 + arr[ row+1 ][ col-1 ] + arr[ row + 1 ][ col ] +  arr[ row + 1 ][ col + 1];

            if ( s > max )
              max = s;
        }

    }

    cout << max << endl;
    return 0;
}
