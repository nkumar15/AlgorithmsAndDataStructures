#include <iostream>

using namespace std;

int cut_rod(int arr, int l)
{
    int cost[l+1];
    cost[0] = 0;

}

int main()
{
    int price[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int l = sizeof(price)/sizeof(price[0]);

    int s = cut_rod(price,l);
    cout << s;
}
