//
// Created by 君不见 on 24-7-29.
//

#ifndef SMITHSTRUCT_H
#define SMITHSTRUCT_H

#endif //SMITHSTRUCT_H

#define MAX_ARRAY 100

typedef struct {
    int data[MAX_ARRAY];
    int lenth;
} Sqllist1;

typedef struct {
    int *data;
    int maxSize;
    int lenth;
} SqList;

// 使用的时候声明变量需要加struct
struct Lnode {
    int val;
    struct Lnode *next;
};

//typedef 使用的时候不需要加struct
typedef struct {
    int val;
    struct DoubleLnode *next;
    struct DoubleLnode *pre;
} DoubleLnode, *DoubleLinkLIst;
