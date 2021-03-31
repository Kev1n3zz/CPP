//essential中的练习题
//include 引用声明
#include <iostream>
#include <string>

using namespace std;//声明使用std（名） std-standard，以namespace的方式使用std
int main()
{   
    string user_firstname;//string 储存字符串
	string user_lastname;
    cout << "please enter your firstname: \n";
	cin >> user_firstname;
	cout << "please enter your lastname: \n";
	cin >> user_lastname;
    cout << '\n'
        << "Hellow, "
        << user_firstname
		<< user_lastname
        << " goodbye!\n";//在cout-cin中可以直接写空格
		system("pause");
    return 0;
}
