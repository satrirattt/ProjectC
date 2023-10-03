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
			cout << " ประวัติการรักษาของ Prayut Janaungkarn" <<endl;
			cout << setfill('-') << setw(40) << "" << endl;
			cout << " ครั้งที่      ทำรายการ      ราคา(บาท)" <<endl;
			cout << setfill('-') << setw(40) << "" << endl;
			cout << setfill('-') << setw(40) << "" << endl;
			cout <<endl;
			cout << "รายการทำฟัน" <<endl;
			cout << "1.ขูดหินปูน 200 บาท" <<endl; 
			cout << "2.ถอนฟัน 500 บาท" <<endl; 
			cout << "3.รักษารากฟัน 25000 บาท" <<endl; 
			cout << "4.พิมพ์ฟัน 1000 บาท" <<endl; 
			cout << "5.เอกเซรย์ฟัน 500 บาท " <<endl;
			cout << "ใช้บริการ : 3 ";
			cout << endl;*/

			cout << "Enter id : 66000 " <<endl;
			cout << setfill('-') << setw(40) << "" << endl;
			cout << " ประวัติการรักษาของ Prawit Janaungkarn" <<endl;
			cout << setfill('-') << setw(40) << "" << endl;
			cout << " ครั้งที่      ทำรายการ      ราคา(บาท)" <<endl;
			cout << setfill('-') << setw(40) << "" << endl;
			cout << "   1           ขูดหินปูน        200" <<endl;
			cout << "   2            ถอนฟัน          500 " <<endl;
			cout << setfill('-') << setw(40) << "" << endl;
			cout <<endl;
			cout << "รายการทำฟัน" <<endl;
			cout << "1.ขูดหินปูน 200 บาท" <<endl; 
			cout << "2.ถอนฟัน 500 บาท" <<endl; 
			cout << "3.รักษารากฟัน 25000 บาท" <<endl; 
			cout << "4.พิมพ์ฟัน 1000 บาท" <<endl; 
			cout << "5.เอกเซรย์ฟัน 500 บาท " <<endl;
			cout << "ใช้บริการ : 4 5 ";
			cout << endl;

			/*cout << "Enter id : 66002 " <<endl;
			cout << "ไม่พบประวัติลูกค้า" <<endl;*/
		}

		else if(menu == '3')
		{
		cout << "3.ออกรายงาน" <<endl ;
		/*cout << "กรอกรหัส : 66001 " <<endl;
		cout << setfill('=') << setw(40) << "" << endl;
		cout << " การรักษาวันนี้ของ Prayut Janaungkarn" <<endl;
		cout << setfill('-') << setw(40) << "" << endl;
		cout << " ครั้งที่      ทำรายการ      ราคา(บาท)" <<endl;
		cout << setfill('-') << setw(40) << "" << endl;
		cout << "   1         รักษารากฟัน        25000" <<endl;
		cout << setfill('-') << setw(40) << "" << endl;
		cout << "ยอดเงินรวม                      25000 "<<endl;
		cout << setfill('=') << setw(40) << "" << endl;
		cout <<endl;
		cout << setfill('=') << setw(40) << "" << endl;
		cout << " สรุปการรักษาของ Prayut Janaungkarn" <<endl;
		cout << setfill('-') << setw(40) << "" << endl;
		cout << " ครั้งที่      ทำรายการ      ราคา(บาท)" <<endl;
		cout << setfill('-') << setw(40) << "" << endl;
		cout << "   1         รักษารากฟัน        25000" <<endl;
		cout << setfill('=') << setw(40) << "" << endl;
		cout << endl;*/

		cout << "กรอกรหัส : 66000 " <<endl;
		cout << setfill('=') << setw(40) << "" << endl;
		cout << " การรักษาวันนี้ของ Prawit Janaungkarn" <<endl;
		cout << setfill('-') << setw(40) << "" << endl;
		cout << " ครั้งที่      ทำรายการ      ราคา(บาท)" <<endl;
		cout << setfill('-') << setw(40) << "" << endl;
		cout << "   3           พิมพ์ฟัน        1000" <<endl;
		cout << "              เอกเซรย์ฟัน       500" <<endl;
		cout << setfill('-') << setw(40) << "" << endl;
		cout << "ยอดเงินรวม                      1500 "<<endl;
		cout << setfill('=') << setw(40) << "" << endl;
		cout <<endl;
		cout << setfill('=') << setw(40) << "" << endl;
		cout << " สรุปการรักษาของ Prawit Janaungkarn" <<endl;
		cout << setfill('-') << setw(40) << "" << endl;
		cout << " ครั้งที่      ทำรายการ      ราคา(บาท)" <<endl;
		cout << setfill('-') << setw(40) << "" << endl;
		cout << "   1           ขูดหินปูน        200" <<endl;
		cout << "   2            ถอนฟัน          500 " <<endl;
		cout << "   3           พิมพ์ฟัน        1000" <<endl;
		cout << "              เอกเซรย์ฟัน       500" <<endl;
		cout << setfill('=') << setw(40) << "" << endl;
		cout << endl;

		/*cout << "กรอกรหัส : n66001\n ";*/
		}
		}while(menu != '4') ;
		cout << "Exit Program " <<endl;
		

return(0);
}