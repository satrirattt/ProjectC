#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	int id = 66000; // เริ่มต้นที่ 66000
    char menu, ch;
    string name, firstName, lastName, fullName,customerFullName;
    bool registered = false; // ตัวแปรเพื่อตรวจสอบว่าลงทะเบียนแล้วหรือยัง

    do {
        cout << setfill('=') << setw(30) << "" << endl;
        cout << "  Clinic Smilelyyy Yimsuyyy  " << endl;
        cout << "        ยินดีต้อนรับ " << endl;
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
                registered = true; // ตั้งค่าเป็น true เมื่อลงทะเบียนเรียบร้อย
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
			cout << "ประวัติการรักษาของ " << customerFullName <<endl;
			cout << "รายการทำฟัน" <<endl;
			cout << "1.ขูดหินปูน 200 บาท" <<endl; 
			cout << "2.ถอนฟัน 500 บาท" <<endl; 
			cout << "3.รักษารากฟัน 25000 บาท" <<endl; 
			cout << "4.พิมพ์ฟัน 1000 บาท" <<endl; 
			cout << "5.เอกเซรย์ฟัน 500 บาท " <<endl;
			cout << "ใช้บริการ : " ; 

			cout <<endl;
			}
			else 
			{
				cout << "ไม่พบประวัติลูกค้า" <<endl;
			}
			
		}

		else if(menu == '3')
		{
		cout << "3.รายงานประวัติ\n" ;
		cout << "กรอกรหัส : ";
		cin >> id;
		cout << "ประวัติ" <<endl;
		cout <<	"kiku ranone\n เคยมารักษา\n 1.ขูดหินปูน 200 บาท\n 2.ถอนฟัน 500 บาท\n" ;
		cout << "รายการที่รักษาวันนี้\n 3.รักษารากฟัน 25000 บาท\n 4.พิมพ์ฟัน 1000 บาท \n 5.เอกเซรย์ฟัน 500 บาท \n " ;
		cout << "Total : 26500 บาท" ;
		cout << "\nสรุปการรักษาทั้งหมด\n 66000 kiku ranone \n 1.ขูดหินปูน 200 บาท\n 2.ถอนฟัน 500 บาท \n 3.รักษารากฟัน 25000 บาท\n 4.พิมพ์ฟัน 1000 บาท\n 5.เอกเซรย์ฟัน 500 บาท\n";
		cout << endl;
		cout << "กรอกรหัส : n66001\n ";
		cout << "ประวัติ\n 66001 Prayut Janaungkarn\n" ;
		cout << "รายการที่รักษาวันนี้\n 1.ขูดหินปูน 200 บาท\n 2.ถอนฟัน 500 บาท\n " ;
		cout << "Total : 700 บาท" ;
		cout << "\nสรุปการรักษาทั้งหมด\n n660001 Prayut Janaungkarn \n 1.ขูดหินปูน 200 บาท\n 2.ถอนฟัน 500 บาท" <<endl;
		}
		}while(menu != '4');

return(0);
}