#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main()
{
    const int length = 10;
    array<int,length> numbers{12,23,45,11,98,56,34,21,45,10};
    int search_num = 35;
    std::sort(numbers.begin(),numbers.end());
    int i=0, j= length - 1;
    bool found = false;

    while( i != j ){

        if(numbers[i] + numbers[j] == search_num){
            found = true;
            break;
        }

        if(numbers[i] + numbers[j] < search_num )
            i++;
        else
            j--;
    }

    if(found){
        cout<<"Pair found for "<<search_num<<":"<<numbers[i]<<","<<numbers[j];
    }

    return 0;
}
