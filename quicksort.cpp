#include<bits/stdc++.h>
using namespace std;

int a[] = {5,45,21,69,78,10};
int lb=0,ub=5;

int partition(int a[], int lb, int ub){
    int pivot = a[lb];
    int start = lb, end = ub;

    while (start < end)
    {
        while (a[start] <= pivot)
        {
          start++;
        }
        while (a[end] > pivot)
        {
          end--;
        }
        if(start < end){
            swap(a[start],a[end]);
        }
    }
    swap(a[lb], a[end]);
    return end;
    
}
void QuickSort(int a[], int lb, int ub){
    if(lb < ub){
        int loc = partition(a,lb,ub);
        QuickSort(a,loc+1, ub);
        QuickSort(a, lb, loc-1);
    }
}


int main(){
    QuickSort(a,lb,ub);

    for (int i = 0; i < 6; i++)
    {
       cout << a[i] << " ";
    }
    
}