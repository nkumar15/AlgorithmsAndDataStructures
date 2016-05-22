#include <iostream>
#include <array>

using namespace std;

int main()
{
    const int length = 8;
    array<int,length>  nums{-2, -3, 4, -1, -2, 1, 5, -3};
    int i=0;
    int max_sum_so_far = 0;
    int max_ending_here = 0;

    for(i=0; i<length; i++){

        max_ending_here +=  nums[i];

        if(max_ending_here < 0)
            max_ending_here = 0;

        if(max_sum_so_far < max_ending_here)
            max_sum_so_far = max_ending_here;
    }

    cout<<"Maximum sum :" << max_sum_so_far;
    return 0;
}
