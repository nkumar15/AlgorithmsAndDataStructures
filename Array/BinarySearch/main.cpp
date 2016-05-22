#include <iostream>
#include <array>

using namespace std;

int binarysearch(int a[],int low,int hi,int n){

    if(low >= hi)
        return -1;

    int mid = (low + hi)/2;
    if ( a[mid] == n )
        return mid;

    if(a[mid] > n)
        return binarysearch(a,low,mid-1,n);
    else
        return binarysearch(a,mid+1,hi,n);

}

int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};

    int idx = binarysearch(a,0,9,2);

    if(idx != -1)
        cout<<"Number found at index "<<idx;
    else
        cout<<"Number not found ";

    return 0;
}
