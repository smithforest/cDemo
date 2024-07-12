#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//数组输出
void arrayOutPut(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    };
}
//生成指定大小的随机数组
int* arrayGenerate(int size)
{
    int* arr = (int*)malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++)
    {
        arr[i] =  rand() % 100 + 1;;
    }
    return arr;
}
//验证指针关系，*p=var ;p=&var
void pointerOutput(int number)
{
    int var =10;
    //正确
    printf("%p\n",&var);
    printf("%d\n",var);
    //严格来说 编译会报错
    printf("%d\n",&var);
    printf("%p\n",var);
    int *p=&var;
    printf("%p\n",p);
    printf("%d\n",*p);
}


