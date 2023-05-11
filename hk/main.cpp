#include <iostream>
#include <Windows.h>


/*
2023年4月25号，开始写攻击自己网站的一个应用软件。
输入账号和密码，还有功能菜单。
测试

2023年5月11日，封装login函数，使主函数看起来更加美观。
优化菜单显示及选择菜单
*/

using namespace std;

void login(void)
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
}

void menuShow(void)
{
	system("cls");          // 清屏
	cout << "1,攻击网站" << endl;
	cout << "2,查询攻击记录" << endl;
	cout << "3,修复攻击的网站" << endl;
	cout << "4,dos攻击" << endl;
	cout << "5,结束" << endl;
}
/*
清除输入缓冲区
*/
void clearBuf(void)
{
	char temp;
	while ((temp = getchar()) != '\n');
}

/*
菜单选择
*/
int menuChoice() {
	int n = 0;

	while (1) {
		// 选择菜单
		cout << "请选择要选择的菜单编号：" << endl;
		cin >> n;

		if (cin.fail()) {
			cin.clear();  // 清除错误标志
			clearBuf();
			cout << "编号输入有误请重新输入！" << endl;
		}
		else {
			break;
		}
	}
	return n;
}
int main(void)
{
	// 登录
	login();
	
	while (1) {
		// 菜单显示
		menuShow();

		// 菜单选择
		int menuNum = menuChoice();

		switch (menuNum) {
		case 1:

		case 2:

		case 3:

		case 4:

		case 5:

		default:
			break;
		}
	}
	
	return 0;
}