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
        cout << setfill('-') << setw(20) << "" << endl;
        cout << "  Clinic Smilelyyy" << endl;
        cout << "     Welcome " << endl;
        cout << setfill('-') << setw(20) << "" << endl;
        cout << "       MENU          " << endl;
        cout << setfill('-') << setw(20) << "" << endl;
        cout << setfill('-') << setw(20) << "" << endl;
        cout << "1.Check history" << endl;
        cout << "2.Treatment data" << endl;
        cout << "3.Issue data" << endl;
        cout << "4.Exit" <<endl ;
        cout << "Enter menu : ";
        cin >> menu;
        cout <<endl;
        
        if (menu == '1') {
            cout << "1.Check history" << endl;
            cout << "  1.Register" << endl;
            cout << "  2.Enter id" << endl;
            cout << "Choose : ";
            cin >> ch;
            if (ch == '1') {
                cout << "Name : Prayut" <<endl;
                cout << "Lastname : Janaungkarn " <<endl;
                cout << "Registered successfully 66001 Prayut Janaungkarn "<< endl;
				cout <<endl;
            }
            else if (ch == '2') {
				/*cout << "Enter id : 66000 "<<endl;
                cout << "66000 Prawit Janaungkarn There is data in the system." << endl;*/

                /*cout << "Enter id : 66001 " <<endl;
                cout << "There is no information in the system, please register." << endl;*/
				cout << "Enter id : 66001 "<<endl;
                cout << "66001 Prayut Janaungkarn There is data in the system." << endl;
                
               
			}
		
		}
		else if(menu == '2')
		{
			/*cout << "2.Treatment data" <<endl;
			cout << "Enter id : 66001 " <<endl;
			cout << setfill('-') << setw(40) << "" << endl;
			cout << " ����ѵԡ���ѡ�Ңͧ Prayut Janaungkarn" <<endl;
			cout << setfill('-') << setw(40) << "" << endl;
			cout << " ���駷��      ����¡��      �Ҥ�(�ҷ)" <<endl;
			cout << setfill('-') << setw(40) << "" << endl;
			cout << setfill('-') << setw(40) << "" << endl;
			cout <<endl;
			cout << "��¡�÷ӿѹ" <<endl;
			cout << "1.�ٴ�Թ�ٹ 200 �ҷ" <<endl; 
			cout << "2.�͹�ѹ 500 �ҷ" <<endl; 
			cout << "3.�ѡ���ҡ�ѹ 25000 �ҷ" <<endl; 
			cout << "4.�����ѹ 1000 �ҷ" <<endl; 
			cout << "5.�͡����ѹ 500 �ҷ " <<endl;
			cout << "���ԡ�� : 3 ";
			cout << endl;*/

			cout << "Enter id : 66000 " <<endl;
			cout << setfill('-') << setw(40) << "" << endl;
			cout << " ����ѵԡ���ѡ�Ңͧ Prawit Janaungkarn" <<endl;
			cout << setfill('-') << setw(40) << "" << endl;
			cout << " ���駷��      ����¡��      �Ҥ�(�ҷ)" <<endl;
			cout << setfill('-') << setw(40) << "" << endl;
			cout << "   1           �ٴ�Թ�ٹ        200" <<endl;
			cout << "   2            �͹�ѹ          500 " <<endl;
			cout << setfill('-') << setw(40) << "" << endl;
			cout <<endl;
			cout << "��¡�÷ӿѹ" <<endl;
			cout << "1.�ٴ�Թ�ٹ 200 �ҷ" <<endl; 
			cout << "2.�͹�ѹ 500 �ҷ" <<endl; 
			cout << "3.�ѡ���ҡ�ѹ 25000 �ҷ" <<endl; 
			cout << "4.�����ѹ 1000 �ҷ" <<endl; 
			cout << "5.�͡����ѹ 500 �ҷ " <<endl;
			cout << "���ԡ�� : 4 5 ";
			cout << endl;

			/*cout << "Enter id : 66002 " <<endl;
			cout << "��辺����ѵ��١���" <<endl;*/
		}

		else if(menu == '3')
		{
		cout << "3.�͡��§ҹ" <<endl ;
		/*cout << "��͡���� : 66001 " <<endl;
		cout << setfill('=') << setw(40) << "" << endl;
		cout << " ����ѡ���ѹ���ͧ Prayut Janaungkarn" <<endl;
		cout << setfill('-') << setw(40) << "" << endl;
		cout << " ���駷��      ����¡��      �Ҥ�(�ҷ)" <<endl;
		cout << setfill('-') << setw(40) << "" << endl;
		cout << "   1         �ѡ���ҡ�ѹ        25000" <<endl;
		cout << setfill('-') << setw(40) << "" << endl;
		cout << "�ʹ�Թ���                      25000 "<<endl;
		cout << setfill('=') << setw(40) << "" << endl;
		cout <<endl;
		cout << setfill('=') << setw(40) << "" << endl;
		cout << " ��ػ����ѡ�Ңͧ Prayut Janaungkarn" <<endl;
		cout << setfill('-') << setw(40) << "" << endl;
		cout << " ���駷��      ����¡��      �Ҥ�(�ҷ)" <<endl;
		cout << setfill('-') << setw(40) << "" << endl;
		cout << "   1         �ѡ���ҡ�ѹ        25000" <<endl;
		cout << setfill('=') << setw(40) << "" << endl;
		cout << endl;*/

		cout << "��͡���� : 66000 " <<endl;
		cout << setfill('=') << setw(40) << "" << endl;
		cout << " ����ѡ���ѹ���ͧ Prawit Janaungkarn" <<endl;
		cout << setfill('-') << setw(40) << "" << endl;
		cout << " ���駷��      ����¡��      �Ҥ�(�ҷ)" <<endl;
		cout << setfill('-') << setw(40) << "" << endl;
		cout << "   3           �����ѹ        1000" <<endl;
		cout << "              �͡����ѹ       500" <<endl;
		cout << setfill('-') << setw(40) << "" << endl;
		cout << "�ʹ�Թ���                      1500 "<<endl;
		cout << setfill('=') << setw(40) << "" << endl;
		cout <<endl;
		cout << setfill('=') << setw(40) << "" << endl;
		cout << " ��ػ����ѡ�Ңͧ Prawit Janaungkarn" <<endl;
		cout << setfill('-') << setw(40) << "" << endl;
		cout << " ���駷��      ����¡��      �Ҥ�(�ҷ)" <<endl;
		cout << setfill('-') << setw(40) << "" << endl;
		cout << "   1           �ٴ�Թ�ٹ        200" <<endl;
		cout << "   2            �͹�ѹ          500 " <<endl;
		cout << "   3           �����ѹ        1000" <<endl;
		cout << "              �͡����ѹ       500" <<endl;
		cout << setfill('=') << setw(40) << "" << endl;
		cout << endl;

		/*cout << "��͡���� : n66001\n ";*/
		}
		}while(menu != '4') ;
		cout << "Exit Program " <<endl;
		

return(0);
}