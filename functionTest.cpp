#include <iostream>
#include "fibon_elem.h"//引用一个同在一个工程文件中的头文件（.h）需要使用“”而不是<>
// bool fibon_elem( int , int & );//声明引用这个Fibonacci生成函数
using namespace std;

//main function
int main(){
    int pos ;
    cout << "Please enter a postion: ";
    cin >> pos ;

    int elem ;
    if ( fibon_elem(pos,elem) )
    {
        cout << "Element # pos "
             << pos
             <<" is "
             << elem
             << endl;
    }
    else cout<< "Something wrong happend,can't calulate element #"
             << pos
             << endl;
    system("pause");
    return 0;
}

