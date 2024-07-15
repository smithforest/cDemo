#include "common/common.h"
#include"sort/smithSort.h"

int main(void)
{
    int size=10;
    int * array=arrayGenerate(size);
    arrayOutPut(array, size);
    // bubble_sort(array,size);
    quickSort(array,0,size-1);
    arrayOutPut(array,size);

}
