#include<bits/stdc++.h>
using namespace std;

int a[] = {4,5,65,12,48,17,23};
int b[1000000];
int lb=0,ub=6;

void merge(int a[],int lb,int mid, int ub){
    int i=lb,j=mid+1,k=lb;

    while (i <= mid && j <= ub)
    {
        if(a[i] <= a[j]){
            b[k] = a[i];
            i++;
            k++;
        }
        else{
            b[k] = a[j];
            j++;
            k++;
        }
    }
    if(i > mid){
        while (j <= ub)
        {
            b[k] = a[j];
            j++;
            k++;
        }
        
    }
    else{
        while (i <= mid)
        {
            b[k] = a[i];
            i++;
            k++;
        }   
    }
    
}
void MergeSort(int a[], int lb, int ub){
    if(lb < ub){
        int mid = (lb + ub)/2;
        MergeSort(a, lb, mid);
        MergeSort(a, mid+1, ub);

        merge(a,lb,mid,ub);
    }
}

int main(){
    MergeSort(a,lb,ub);

    for (int i = 0; i < 7; i++)
    {
       cout << b[i] << " ";
    }
}