#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	int id = 66000; // ������鹷�� 66000
    char menu, ch;
    string name, firstName, lastName, fullName,customerFullName;
    bool registered = false; // ��������͵�Ǩ�ͺ���ŧ����¹���������ѧ

    do {
        cout << setfill('=') << setw(30) << "" << endl;
        cout << "  Clinic Smilelyyy Yimsuyyy  " << endl;
        cout << "        �Թ�յ�͹�Ѻ " << endl;
        cout << setfill('-') << setw(30) << "" << endl;
        cout << "           MENU          " << endl;
        cout << setfill('-') << setw(30) << "" << endl;
        cout << setfill('=') << setw(30) << "" << endl;
        cout << "1.Check history" << endl;
        cout << "2.Treatment data" << endl;
        cout << "3.Issue data" << endl;
        cout << "4.Exit" << endl;
        cout << "Enter menu : ";
        cin >> menu;
        cout << endl;

        if (menu == '1') {
            cout << "1.Check history" << endl;
            cout << "  1.Register" << endl;
            cout << "  2.Enter code" << endl;
            cout << "Choose : ";
            cin >> ch;
            if (ch == '1') {
                cout << "Register" << endl;
                cout << "Name : ";
                cin >> firstName;
                cout << "Lastname : ";
                cin >> lastName;
                fullName = firstName + " " + lastName;
                cout << "Registered successfully " << id << " " << fullName << endl;
                registered = true; // ��駤���� true �����ŧ����¹���º����
                id++;
                cout << endl;
            }
            else if (ch == '2' || (ch == '1' && registered)) {
                cout << "Enter code : ";
				int psid;
                cin >> psid;
                if (psid == id - 1) { 
					customerFullName = fullName;
                    cout << psid << " " << fullName << "There is data in the system." << endl;
                }
                else {
                    cout << "Data not found" << endl;
                }
                cout << endl;
			}
		
		}
		else if(menu == '2')
		{
			cout << "2.Treatment data" <<endl;
			cout << "Enter code : ";
			int psid;
			cin >> psid;
			if(psid == id)
			{
			cout << "����ѵԡ���ѡ�Ңͧ " << customerFullName <<endl;
			cout << "��¡�÷ӿѹ" <<endl;
			cout << "1.�ٴ�Թ�ٹ 200 �ҷ" <<endl; 
			cout << "2.�͹�ѹ 500 �ҷ" <<endl; 
			cout << "3.�ѡ���ҡ�ѹ 25000 �ҷ" <<endl; 
			cout << "4.�����ѹ 1000 �ҷ" <<endl; 
			cout << "5.�͡����ѹ 500 �ҷ " <<endl;
			cout << "���ԡ�� : " ; 

			cout <<endl;
			}
			else 
			{
				cout << "��辺����ѵ��١���" <<endl;
			}
			
		}

		else if(menu == '3')
		{
		cout << "3.��§ҹ����ѵ�\n" ;
		cout << "��͡���� : ";
		cin >> id;
		cout << "����ѵ�" <<endl;
		cout <<	"kiku ranone\n �����ѡ��\n 1.�ٴ�Թ�ٹ 200 �ҷ\n 2.�͹�ѹ 500 �ҷ\n" ;
		cout << "��¡�÷���ѡ���ѹ���\n 3.�ѡ���ҡ�ѹ 25000 �ҷ\n 4.�����ѹ 1000 �ҷ \n 5.�͡����ѹ 500 �ҷ \n " ;
		cout << "Total : 26500 �ҷ" ;
		cout << "\n��ػ����ѡ�ҷ�����\n 66000 kiku ranone \n 1.�ٴ�Թ�ٹ 200 �ҷ\n 2.�͹�ѹ 500 �ҷ \n 3.�ѡ���ҡ�ѹ 25000 �ҷ\n 4.�����ѹ 1000 �ҷ\n 5.�͡����ѹ 500 �ҷ\n";
		cout << endl;
		cout << "��͡���� : n66001\n ";
		cout << "����ѵ�\n 66001 Prayut Janaungkarn\n" ;
		cout << "��¡�÷���ѡ���ѹ���\n 1.�ٴ�Թ�ٹ 200 �ҷ\n 2.�͹�ѹ 500 �ҷ\n " ;
		cout << "Total : 700 �ҷ" ;
		cout << "\n��ػ����ѡ�ҷ�����\n n660001 Prayut Janaungkarn \n 1.�ٴ�Թ�ٹ 200 �ҷ\n 2.�͹�ѹ 500 �ҷ" <<endl;
		}
		}while(menu != '4');

return(0);
}