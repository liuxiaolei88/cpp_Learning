#include<iostream>
#include <windows.h>
using namespace std;
int main(){
    SetConsoleOutputCP(CP_UTF8);
    /*
     * 01: 选择结构
     *      1：if/if包括if
     *      2：if else
     *      3: if elseif else：如果第一个条件满足，执行第一个（即使后面的条件也满足），执行结束退出。以此类推。else包括其他的所有条件。
     *      4：三目运算符：表达式？表达式位真的赋值：表达式为假的赋值
     *      5：switch case 值：break
     */
    int a; cin>>a;
    if (a > 3) {
        cout << "大于3";
    }
    else if(a>4){
        cout << "大于5";
    }
    else{
        cout<<"啥也不是";
    }
    cout<<endl;
    int x=10,y=90,z=100;
    int u = x>y?6:66;
    cout<<u; //66

    /*
     * 02: 循环结构
     *      1：while
     *      2：do while,先执行一次语句，再判断循环条件
     *      3: for
     *      4: break
     *      5: continue
     *      6: goto
     */
}