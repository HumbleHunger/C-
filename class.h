/*************************************************************************
	> File Name: class.h
	> Author: 
	> Mail: 
	> Created Time: 2020年09月14日 星期一 22时22分05秒
 ************************************************************************/

#ifndef _CLASS_H
#define _CLASS_H

class test {
public:
    test();
    virtual ~test;
    void insert(int b);
    void add();
    void del();
    void print();
private:
    int a;
};
#endif