#include <iostream>

using namespace std;

void _merge(int arr[],int l,int m, int r){

    int nl = (m - l) + 1;
    int nr = (r - m);

    int L[nl];
    int R[nr];

    int i=0, j=0, k=0;

    for(i=0; i<nl; i++)
        L[i] = arr[i+l];

    for(j=0; j<nr; j++)
        R[j] = arr[j + m + 1];

    i=0; j=0; k=l;

    while(i < nl && j < nr){

        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while(i < nl){
        arr[k] = L[i];
        i++; k++;
    }

    while(j < nr){
        arr[k] = R[j];
        j++; k++;
    }
}

void mergesort(int arr[],int l,int r){

    if(l < r){
        int mid = (l+r)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);
        _merge(arr,l,mid,r);
    }
}

int main()
{
    int a[11] = {12,11,10,19,14,13,17,16,18,15,9};
    mergesort(a,0,10);
    int i;
    for(i = 0; i < 11; i++)
        cout<<a[i]<< " ";

    return 0;
}
