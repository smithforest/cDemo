//
// Created by 君不见 on 24-7-29.
//
#include "SmithLinerList.h"

#include <stdio.h>
#include <stdlib.h>

#include "../struct/SmithStruct.h"
//初始化顺序表【动态分配】
int init_list(SqList *L, int maxsize) {
    L->data = (int *) malloc(sizeof(int) * maxsize);
    if (!L->data) {
        printf("初始化顺序表失败！");
        return 0;
    }
    L->maxSize = maxsize;
    L->lenth = 0;
    return 1;
}

//求顺序表制定元素
int locate_elem(SqList *L, int elem) {
    for (int i = 0; i < L->lenth; ++i) {
        if (L->data[i] == elem) {
            return 1;
        }
    }
    return 0;
}

//插入元素
int insert_elem(SqList *L, int pos, int elem) {
    if (pos < 1 || pos > L->lenth + 1) {
        printf("位置非法");
        return 0;
    }
    if (L->lenth == L->maxSize) {
        printf("无插入位置");
        return 0;
    }
    //不可以从前往后，因为会影像后面还未移动的值
    // for (int i = pos; i <= L->lenth; ++i) {
    //     L->data[pos] = L->data[pos - 1];
    // }
    for (int i = L->lenth - 1; i >= pos - 1; --i) {
        L->data[i + 1] = L->data[i];
    }
    L->data[pos - 1] = elem;
    return 1;
}
