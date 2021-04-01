#include <vector>
#include <iostream>
//vector的指针（指针的vector形式）
//用&获取地址
int main(){
    using namespace std;
    
    vector<int> *pv=0;//调用一个vector<int> 类型的指针
    //pv= &vectorname; 可以如此调用一个vector的地址
    //将数组的地址存在vector里面也可以用来
    system("pause");
    return 0;
}