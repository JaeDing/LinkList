#ifndef LINKLIST_H
#define LINKLIST_H

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

//节点定义
typedef struct node {
        int data;
        struct node *next;
    }NODE;

class LinkList
{
private:
    NODE *head;

public:
    LinkList() { head = NULL; }
    ~LinkList();
    bool clearSqList();//清空函数
    bool isEmpty() { return head == NULL;}
    int Length();//获取链表长度
    bool GetElem(int i,int *e);//获取指定位置的元素
    int LocateElem(int e);//查找元素的下标
    bool PriorElem(int cur_e,int *pre_e);//取上一个元素
    bool NextElem(int cur_e,int *next_e);//取下一个元素
    bool Insert(int i,int e);//在指定位置插入元素e
    bool Delete(int i,int *e);//删除指定位置的元素，并把删除的元素赋给*e
    NODE* Reverse();//反转一个链表
};

#endif // LINKLIST_H
