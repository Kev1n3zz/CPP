#include <vector>
#include <iostream>
#include <fstream>
//Pell Series(18),vector
using namespace std; //在使用 complex、array、vector时，知道他们在namespace的std中

const int seq_size = 18;//在此可以const或者不用
// int pell_seq [ seq_size ] ;
vector<int> pell_seq (seq_size);
int main(){                 //不允许在函数外部给全局变量赋值
    pell_seq [ 0 ] = 1 ;
    pell_seq [ 1 ] = 2 ;

    cout <<"The first "
         << seq_size 
         <<" elements of the Pell Series:"
         <<"\n";
    for(int ix=2;ix<seq_size;++ix) //计算pell数
    {
        pell_seq[ix]=pell_seq[ix-2]+2*pell_seq[ix-1];
    }

    

    for (int ix = 0; ix < seq_size; ++ix)   //打印每个pell数
    {
        
        cout << pell_seq[ix]<<' ';
        ofstream outfile("pell.txt",ios_base::app);
        outfile << pell_seq[ix]
                <<' ';
        // cout << '\n';
    }
    system("pause") ;//在iostream中
    return 0;
}
