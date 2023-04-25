#include <iostream>
#include <Windows.h>


/*
2023年4月25号，开始写攻击自己网站的一个应用软件。
输入账号和密码，还有功能菜单。
*/

using namespace std;

int main(void)
{
	string usr;
	string pwd;


	while (1) {
		
		cout << "请输入您的账号：" << endl;
		cin >> usr;

		cout << "请输入您的密码：" << endl;
		cin >> pwd;

		if (usr == "1234hk" && pwd == "123") {
			break;
		}
		else {
			cout << "您输入的账号或者密码错误！，请重新输入" << endl;
			system("cls");     // 清屏
		}
	}
	
	system("cls");          // 清屏
	cout << "1,攻击网站" << endl;
	cout << "2,查询攻击记录" << endl;
	cout << "3,修复攻击的网站" << endl;
	cout << "4,dos攻击" << endl;
	cout << "5,结束" << endl;
	return 0;
}