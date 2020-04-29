//
// Created by ldl on 2020/4/30.
//
//定义i = 42
int i = 42;
//定义一个int指针，指向i
int *p1 = &i;
//i = i * i，结果为42*42(1764)
*p1 = *p1 * *p1;
