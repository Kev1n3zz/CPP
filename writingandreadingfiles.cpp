#include <fstream>
#include <iostream>
#include <string>

using namespace std;
const int num_tries='a';//直接写数字会输出数字，写字母会编译成ASCII的value输出
//输出文件
int main(){
    // ofstream outfile("seq_data.txt");//直接使用 outfile会创建一个文件，如果有同名文件会导致文件内容丢失
    ofstream outfile("seq_data.txt",ios_base::app);//使用如此则不会丢失原文件内容，而是在文件中添加信息。
    if (! outfile)
    {
        cerr << "Oops,some error happened!\n";       
    }
    else
        outfile << num_tries ;//向文档里面写入了内容11

    ifstream infile("seq_data.txt");
    cout << num_tries << endl;
    system("pause");
    return 0;
} 
