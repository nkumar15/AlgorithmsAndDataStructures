#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int,13> nums{2,3,5,4,5,2,4,3,5,2,4,4,2};
    int odd_num = 0;

    for(int n : nums)
        odd_num = odd_num ^ n;

    cout<<"Odd times a number present is "<<odd_num;
    return 0;
}
