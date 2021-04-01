#include <iostream>
using namespace std;
int main(){
    int ival =1023;//int ival = 1024;
    int *pi = &ival;//pi是个int类型的指针。取得ival地址，写入pi
    if (*pi != 1024)
    {
        *pi=1024;//指针中的值给了ival
    }
 //提领：使用指针中所指向的内容

    cout << ival
         << '\n'
         << pi;
    system("pause");
    return 0;
}
//初始化指针，不指向任何对象
// int *pi = 0；
// double *pi = 0;
// string *pi = 0;