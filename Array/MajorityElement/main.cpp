#include <iostream>
#include <array>
#include <unordered_map>

using namespace std;

int main()
{
    array<int,10> nums {3,3,4,2,4,4,2,4,4,2};
    unordered_map<int,int> count_map;
    int majority_element = 0;
    bool found = false;



    for(int num : nums){
        auto itr = count_map.find(num);

        if(itr != count_map.end())
        {
            itr->second = itr->second + 1;

            if(itr->second == nums.size()/2){
                found = true;
                majority_element = itr->first;
            }
        }
        else
            count_map[num] = 1;
    }

    if(found == true)
        cout<<"Majority element : "<<majority_element;
    else
        cout<<"Majority element not found";

    return 0;
}
