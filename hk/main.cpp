#include <iostream>
#include <Windows.h>


/*
2023��4��25�ţ���ʼд�����Լ���վ��һ��Ӧ�������
�����˺ź����룬���й��ܲ˵���
*/

using namespace std;

int main(void)
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
	
	system("cls");          // ����
	cout << "1,������վ" << endl;
	cout << "2,��ѯ������¼" << endl;
	cout << "3,�޸���������վ" << endl;
	cout << "4,dos����" << endl;
	cout << "5,����" << endl;
	return 0;
}