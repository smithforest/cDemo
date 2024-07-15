#include "../common/common.h"
//冒泡排序
void bubble_sort(int *a, int size) {
    //总共要循环n-1次
    for (int i = 0; i < size - 1; ++i) {
        //未排序的个数
        for (int j = 0; j < size - 1 - i; ++j) {
            if (a[j] > a[j + 1]) {
                swap(&a[j], &a[j + 1]);
            }
        }
    }
}

//快速排序的划分,整体交换顺序
int partion(int *a, int low, int high) {
    int pivot = a[low];
    while (low < high) {
        while (low < high && pivot <= a[high]) {
            high--;
        }
        if (low < high) {
            a[low] = a[high];
        }
        while (low < high && a[low] <= pivot) {
            low++;
        }
        if (low < high) {
            a[high] = a[low];
        }
    }
    a[low] = pivot;
    return low;
}

//快速排序
void quickSort(int *a, int low, int high) {
    if (low < high) {
        int pivot = partion(a, low, high);
        quickSort(a, low, pivot - 1);
        quickSort(a, pivot + 1, high);
    }
}
