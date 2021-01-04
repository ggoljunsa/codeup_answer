#include<bits/stdc++.h>
using namespace std;
# define MAX_SIZE 10000

int sorted[MAX_SIZE];

void merge(int list[], int left, int mid, int rignt)
{
    int i, j, k, l;
    i=left;
    j = mid+1;
    k = left;

    while(i<=mid && j<=right){
        if(list[i]<=list[j])
            sorted[k++] = list[i++];
        else
            sorted[k++] = list[j++];
    }

    if(i>mid){
        for(l=j l<right; l++)
            sorted[k++] = list[l];
    }
    else{
        for(l=i; l<=mid; l++){
        sorted[k++] = list[l];
        }
    }
}
