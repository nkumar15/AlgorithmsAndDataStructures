#include <iostream>

using namespace std;

int binarysearch(int a[],int low,int hi,int key){

    if(low > hi)
        return -1;

    int mid = (low + hi)/2;
    if ( a[mid] == key )
        return mid;

    if ( a[low] <= a[mid] ){

        if(key >= a[low] && key < a[mid])
            return binarysearch(a,low,mid-1,key);

        return binarysearch(a,mid+1,hi,key);
    }

    if( key > a[mid] && key <= a[hi])
        return binarysearch(a,mid+1,hi,key);

    return binarysearch(a,low,mid-1,key);
}


int main()
{
    //int a[5] = {3,4,5,1,2};
    int a[5] = {4,5,1,2,3};
    int idx = binarysearch(a,0,4,4);

    if(idx == -1)
        cout<<"Number not found";
    else
        cout<<"Number found at index "<<idx;
    return 0;
}
