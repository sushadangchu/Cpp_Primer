//
// Created by ldl on 2020/5/1.
//
/*
 * r1 = v2; 合法，顶层const作为拷贝对象时无影响
 * p1 = p2; 非法，p2是底层const，指向常量v2，p1不是底层const，不能指向v2
 * p2 = p1; 合法，p2是底层const，可以更改值，也可以指向非const变量
 * p1 = p3; 非法，p3是底层const，指向常量v2，p1不是底层const，不能指向v2
 * p2 = p3; 合法，p2是底层const，可以更改值，p3是顶层const，可以赋值给p2
 */
