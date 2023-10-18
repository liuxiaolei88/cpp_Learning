#include<iostream>
#include <windows.h>
#include "func.h"
using namespace std;


int main(){
    SetConsoleOutputCP(CP_UTF8);
// 01：函数的格式
//        函数返回类型 函数名 参数列表 {语句}
//
// 02：函数的调用
//
// 03：函数的值传递
//      形参发生改变，不影响实参。
//
// 04：函数的常见样式
//      无/有 参数， 无/有 返回值
//
// 04：函数的声明
//      作用：告诉编译器函数名称以及如何调用函数，函数实际主体单独定义
//      函数声明可以多次，定义只能有一次
//      声明需要写到前面，定义可以写后面，声明写后面则没办法索引到。
// 05：函数的分文件编写

    cout<<maxx(3,4)<<endl;
}
// 定义
int maxx(int a, int b){
    int c = max(a,b);
    return c;
}