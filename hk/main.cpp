#include <iostream>
#include <Windows.h>


/*
2023��4��25�ţ���ʼд�����Լ���վ��һ��Ӧ�������
�����˺ź����룬���й��ܲ˵���
����

2023��5��11�գ���װlogin������ʹ�������������������ۡ�
�Ż��˵���ʾ��ѡ��˵�
*/

using namespace std;

void login(void)
{
	string usr;
	string pwd;

	while (1) {
		cout << "�����������˺ţ�" << endl;
		cin >> usr;

		cout << "�������������룺" << endl;
		cin >> pwd;

		if (usr == "1234hk" && pwd == "123") {
			break;
		}
		else {
			cout << "��������˺Ż���������󣡣�����������" << endl;
			system("cls");     // ����
		}
	}
}

void menuShow(void)
{
	system("cls");          // ����
	cout << "1,������վ" << endl;
	cout << "2,��ѯ������¼" << endl;
	cout << "3,�޸���������վ" << endl;
	cout << "4,dos����" << endl;
	cout << "5,����" << endl;
}
/*
������뻺����
*/
void clearBuf(void)
{
	char temp;
	while ((temp = getchar()) != '\n');
}

/*
�˵�ѡ��
*/
int menuChoice() {
	int n = 0;

	while (1) {
		// ѡ��˵�
		cout << "��ѡ��Ҫѡ��Ĳ˵���ţ�" << endl;
		cin >> n;

		if (cin.fail()) {
			cin.clear();  // ��������־
			clearBuf();
			cout << "��������������������룡" << endl;
		}
		else {
			break;
		}
	}
	return n;
}
int main(void)
{
	// ��¼
	login();
	
	while (1) {
		// �˵���ʾ
		menuShow();

		// �˵�ѡ��
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