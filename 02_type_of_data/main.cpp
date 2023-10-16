#include<iostream>
#include<string>
using namespace std;
int main(){
    /*
     * 01: 整型
     *      short 短整型 2字节 -2^15 ~ 2^15-1
     *      int 整型 4字节 -2^31 ~ 2^31-1
     *      long 长整型 Windows 4字节, linux 4字节(32位)/8字节(64位) -2^31 ~ 2^31-1
     *      long long 长长整型 8字节 -2^63 ~ 2^63-1
     * */

    /*
     * 02: sizeof关键字
     *      作用: 利用sizeof关键字可以统计数据类型所占用的内存大小
     *      语法: sizeof(数据类型/变量)
     * */
    cout<<"int "<<sizeof (int)<< endl;
    cout<<"long "<<sizeof (long)<< endl;
    cout<<"long long "<<sizeof (long long)<< endl;
    short a = 1;
    cout<<"a "<<sizeof (a)<< endl;

    /*
     * 03: 实型(浮点型)
     *      作用: 用于小数
     *      浮点型变量:
         *      单精度float 4字节 7位有效数字
         *      双精度double 8字节 15~16位有效数字
         *  默认输出显示6位有效数字
         *  科学计数法: 3e-2 = 0.03
     * */

    /*
     * 04: 字符型
     *      作用: 显示单个字符
     *      只占1个字节
     *      不是把字符本身放到内存中存储,而是把对应的ASCII编码放入存储单元
     * */
    char c = 'a';
    cout<<c<<endl;
    //    输出ASCII码
    cout<<(int)c<<endl; //97

    /*
     * 05: 转义字符
     *      作用: 用于表示一些不能显示出来的ASCII字符
     *      常用: \n(换行), \t(制表,占8个位置,保持工整), \\(一个\字符)
     * */
    cout<<"aa\taa\n";
    cout<<"aaaa\taa\n";
    cout<<"aaaaa\taa\n";

    /*
     * 06: 字符串
     *      作用: 用于表示一串字符
     *      c风格: char 变量名[] = ""
     *      c++ string
     * */
    char str[] = "666";
    cout<<str<<endl;
    string str2 = "777";
    cout<<str2<<endl;

    /*
     * 07: 布尔类型bool
     *      作用: 用于代表真假
     *      true/false
     *      占1个字节
     * */

    /*
     * 08: 数据的输入
     *      cin>>
     * */
    int y;
    cin>>y;
    cout<<y<<endl;
}