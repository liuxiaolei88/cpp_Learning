/*
 * 01: c++书写Hello World
 *  */
#include<iostream>
#include <windows.h>
using namespace std;

#define x 5

int main(){
    SetConsoleOutputCP(CP_UTF8);
    cout<<"hello world"<<endl;

/*
 * 02: 注释
    // 1: 单行注释
    // 2: 多行注释
 *
 * */

/*
 * 03: 变量
    // 1: 内存存在的意义:方便管理内存; eg. int a=1;
 *
 * */
    int a = 1;

/*
 * 04: 常量
    // 1: 常量存在的意义: 用于记录程序中不可更改的数据,一旦修改会报错;
    // 定义的两种方式:
        // 1: #define 宏定义
        // 2: const
 *
 * */
    const int b = 6;
    cout<<"宏定义 define "<<x<<endl;
    cout<<"const 定义 "<<b<<endl;

/*
 * 05: 关键字
    // 1: 不要用关键字给变量起名称
 *
 * */

/*
 * 06: 标识符命名规则
    // 1: 不要用关键字给变量起名称,不能空格,开头不能是数字,区分大小写;
 *
 * */
}
