#include<iostream>
#include <windows.h>
using namespace std;


int main(){
    SetConsoleOutputCP(CP_UTF8);
// 01：指针的基本概念
//      指针的作用：通过指针间接访问内存
//      可以利用指针变量保存地址
//      指针的定义：数据类型 *变量名
    int a = 10;
    int *p;
    p = &a; // 指针存放的是地址
    cout<<p<<endl; //p和&a等价
    cout<<&a<<endl;
//      使用指针
//          可以通过解引用的方式来找到指针指向的内存，指针前面加*代表解引用
    cout<<a<<endl; //10 a和*p等价
    cout<<*p<<endl; //10
    *p = 1000; //*p 指向了a的内存，修改*p相当于修改a
    cout<<a<<endl;// 1000
    cout<<*p<<endl;//1000

//  02：指针所占的内存空间
//      指针也是一种数据类型，32位系统4字节，64位系统8字节
    cout<<sizeof(int *)<<endl;
    cout<<sizeof(float *)<<endl; //4

//  03: 空指针
//      空指针：指针变量指向内存中编号为0的空间
//      用途：初始化指针变量，空指针指向的内存不可以访问(0-255之间的内存编号是系统占用)
    int *q = NULL; //不可以*q=100
// 04：野指针
//      指针变量指向非法的内存空间
}
