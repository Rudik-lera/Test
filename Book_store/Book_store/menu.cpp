#include "pch.h"
#include "menu.h"

namespace Auth {

	int Auth_main()
	{
		int choose;

		cout << "1.���������������� ��� �����"<<endl;
		cout << "2.���������������� ��� ������������" << endl;
		cout << "0.�����" << endl << endl;

		switch (choose)
		{
			case 1:
			{
				return 1;
				break;
			}
			case 2:

			{
				return 2;
				break;
			}
			case 0:
			{
				exit(0);
				break;
			}
			default:
			{
				cout << "�������� ����� �� ������"<<endl<<endl;
				Auth_main();
				break;
			}
		}
	}

	void Choose_user_type()
	{
		int user_type = 0;

		user_type = Auth::Auth_main();

		switch (user_type)
		{
		case 1:
		{
			
		}
		case 2:
		{
			
		}
		default:
			cout << endl << "�������� ����� �� ������" << endl;
			Choose_user_type();
			break;
		}
	}
}

