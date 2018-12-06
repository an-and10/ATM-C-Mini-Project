//START
#include<iostream>		//input/output objects c++
#include<stdio.h>		//standard input/output c
#include<stdlib.h>		//standard library
#include<conio.h>		//getch function
#include<dos.h>			//delay function
#include<windows.h>		//Sleep,gotoxy coordinate functions
#include<iomanip>		//output manipulatons
#include<fstream>		//file handling
#include<string.h>		//string abstract datatype
#include<math.h>		//mathematical operations
#include<ctime>	        //plays audio track
using namespace std;
int my_random(int,int);
int my_random1(int,int);
int pin_num[4];
int acc_num[10];
int interest;
int loan_amount;
void gotoxy (int x, int y);
COORD coord = {0, 0};
int choice;
int current_bal=1000;
void gotoxy (int x, int y)	                               //defining/initializing to predefined objects
{
    coord.X = x;
    coord.Y = y; // X and Y coordinates
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void layout();
class Machine
{	
	protected:
		char Acc_type;
		char name[20];
		char s_name[20];
		char Address[30];
		char DOB[30];
		char pan[15];
		char mobile[10];
		
	public:
		int i,j;
		void line1();
		void line2();
		void Screen1();
		void Screen2();
		void Screen3();
		void Screen4();
		void Screen5();
		void main_menu();
		void option();
		void cash_withdraw();
		void check_bal();
		void cash_deposite();
		void check_EMI();
		void banking_hour();
		void change_pin();
		void home_loan();
		void Gold_loan();
		void vehicle_loan();
		void Education_loan();
		void xyz_loan();
		//long my_random1(ijt,int);
		void transfer_money();
		
		
};
 
void frame_layout()	                       // fixing the frame
{
	int i,j=79;
	for(i = 0;i<80,j>=0;i++,j--)
	{
		gotoxy(i,3);
		cout<<"_";
		gotoxy(j,46);
		cout<<"_";
	}
	gotoxy(56,2);
	char s[20];
	//strcpy(s,date_time());
//	cout<<s;
}
 void Machine :: line1()
 {
 	for(i=0;i<=75;i++)
 	{
 		gotoxy(i,0);
 		cout<<"*";
 		Sleep(7);
	 }
 }
  
 void Machine :: line2()
 {
 	for(i=75;i>=0;i--)
 	{
 		gotoxy(i,45);
 		cout<<"*";
 		Sleep(7);
	 }
 }
 void Machine :: Screen1()
 {
   //line1();
   system("cls");
   Sleep(2000);
   system ("COLOR 1C" );
   	frame_layout();
    Sleep(300);
	gotoxy(25,25);
//	play(1);
	int fg;
	
	cout<<"WELCOMES  YOU IN ATM SEVICES";
	Sleep(310);
	gotoxy(25,47);
	//line2();
	cout<<"\nPress 1: to continue"<<endl;
	//gotoxy(50,40);
	cin>>fg;
	Sleep(3000);
	if(fg==1)
	Screen2();
	else
	cout<<"\nWrong Input!!Please TRY again";

 }
 void Machine :: Screen2()
 {	
 		system("cls");
 		system("COLOR B0");
 		Sleep(2000);
		char ch2;
		frame_layout();
 		gotoxy(10,10);
 		cout<<"Press C: TO CREATE AN ACCOUNT";
 		Sleep(30);
 		gotoxy(10,15);
 		cout<<"PRESS P: TO ENTER PIN NUMBER";
 		Sleep(30);
 		gotoxy(10,20);
 		cout<<"Enter H : to get Help";
 		Sleep(30);
 		Sleep(200);
 		gotoxy(10,25);
 		cout<<"Please Enter Your Option"<<endl;
 		gotoxy(50,25);
 		cin>>ch2;
 		Sleep(1000);
 		if(ch2 == 'c'|| ch2 =='C')
 		Screen3();
 		else if(ch2=='P'|| ch2=='p')
		Screen5();
 		else if(ch2=='H'|| ch2=='h')
 		cout<<"screen16";
 		else
 		cout<<"\nWrong Input";
 		
	 }

 void Machine :: Screen3()
 {	
 	system("cls");
 	int t=1;
 	system("COLOR 5E");
 	Sleep(1000);
 	frame_layout();
 	gotoxy(10,5);
 	cout<<"\nEnter Your Name";
 	gotoxy(40,5);
 	cin>>name;
 	gotoxy(10,10);
 	cout<<"\nEnter Your Surname";
	gotoxy(40,10);
 	cin>>s_name;
 	gotoxy(10,15);
 	cout<<"\nEnter Address";
 	gotoxy(40,15);
 	cin>>Address;
 	gotoxy(10,20);
 	cout<<"\nEnter DOB";
 	gotoxy(40,20);
 	cin>>DOB;
 	gotoxy(10,25);
 	cout<<"\nENTER PAN no.";
 	gotoxy(40,25);
 	cin>>pan;
 	gotoxy(10,30);
 	cout<<"\nEnter Mobile Number";
 	gotoxy(40,30);
 	cin>>mobile;
 	gotoxy(10,35);
 	cout<<"\nEnter A/c type( S/C)";
 	gotoxy(30,40);
 	cin>>Acc_type;
 	gotoxy(17,45);
 	Sleep(100);
 	cout<<"Thank You for Creating an accout with us.."<<endl;
 	gotoxy(30,48);
 	Sleep(2000);
 	cout<<"\nSortly, You will receive you Accout Number and Pin Number";
	Sleep(1000);
	Screen4();


	
 	
 	
 }
	void Machine :: Screen4()
 {
		system("cls");
		system("COLOR 72");
		Sleep(1000);
		frame_layout();
		srand(time(0));
		gotoxy(20,15);
		acc_num[0]=4;
		acc_num[1]=9;
		acc_num[2]=1;
		acc_num[3]=6;
		acc_num[4]=2;
		acc_num[5]=3;
		int l=6;
		int r=0;
		int temp_account=my_random1(2423,7854);
			while(temp_account>0)
		{
			int r=temp_account%10;
			acc_num[l]=r;
			temp_account=temp_account/10;
			l++;
		}
		cout<<"\nYour Account Number is :"<<endl;
		for(int i=0;i<10;i++)
		{
			cout<<acc_num[i];
		}
	
		Sleep(1000);
		 int temp_pin_num=my_random(20893,98534);
		gotoxy(20,20);
		int inc=3;
		while(inc>=0)
		{
			int rem=temp_pin_num%10;
			pin_num[inc]=rem;
			temp_pin_num=temp_pin_num/10;
			inc--;
			
		}
		cout<<"\nYour PIN  Number is:"<<endl;
		gotoxy(40,20);
		for(int j=0;j<4;j++)
		cout<<pin_num[j];
		
		gotoxy(20,35);
		cout<<"\nPLEASE NOTE THE PIN NUMBER FOR FUTURE REFENRECE!";
		cout<<"\n1. Press 1 go to Proceed";
		cout<<"\n2. Pres 2 to return to main window ";
		cout<<"\nEnter option";
		
		int yh;
		cin>>yh;
		if(yh == 1)
		Screen5();
		else
		Screen1();
	
	}
	
	 int  my_random(int  min, int max )
	 {
	   return (rand() % (max - min + 1) + min);

	 }

	 int  my_random1(int  min, int max )
	 {
	   return (rand() % (max - min + 1) + min);

	 }
	 void Machine :: Screen5()
	 {
	 	system("cls");
	 	system("COLOR 2");
	 	int m=2;
	 	line1();


	 	gotoxy(20,19);
	 	cout<<"\nEnter Your Acocunt Number"<<endl;
	 	int user_acc_num[10];
	 	for(int p=0;p<10;p++)
	 	cin>>user_acc_num[p];
	 	Sleep(200);
		gotoxy(20,30);
		cout<<"\nEnter PIN number"<<endl;
		int  user_pass[4];
		gotoxy(40,30);
		for(int k=0;k<4;k++){
		cin>>user_pass[k];
	
	}
		gotoxy(20,40);
		int flag=0;
		int flag2=0;
	
		cout<<"\nPlease wait,We are validating your Details";
		Sleep(4000);
		int counter=0;
		int count=0;
		
		//code to check both arrays are equals or not!!
		for(int m=0;m<10;m++)
		{
				if(acc_num[m]==user_acc_num[m])
				{
					counter++;
					
				}
				
			}
			for(int q=0;q<4;q++)
		{
				if(user_pass[q]==pin_num[q])
				{
					cout<<"counter ";
					count++;

				}

			}
			
	
		Sleep(2000);
		cout<<"\nLoading..... ";
		if(counter==10 && count==4){
		cout<<"\nYou entered an valid Creditials"<<endl;
		Sleep(20);
		line2();

		gotoxy(10,50);
		cout<<"\nPress 1: to procced";
		gotoxy(10,50);
		cout<<"\nPress 2: to return to main window";
		gotoxy(45,50);
		int gh;
		cin>>gh;
		if(gh==1)
		main_menu();
		else
		Screen1();
		}
		else
		{


			

		Sleep(2000);
		cout<<"\nYou entered an invalid details";
		cout<<"\nTry again";
		Sleep(1000);
		m--;
		cout<<"\nYou have "<<m<<" more chance to enter";
		Sleep(3000);
		Screen5();
		
		
		}
	
}

  	  void Machine :: main_menu()
 	  {
								 	 //frame called 1//
 	system("cls");
 	system("COLOR F2");
 	line1();
	gotoxy(20,10);
	cout<<"\n The menu Options";
	gotoxy(20,12);
	cout<<"\n1. Cash Deposite";
	Sleep(1000);
	gotoxy(20,14);
	cout<<"\n2. Cash Withdraw";
	Sleep(1000);
	gotoxy(20,16);
	cout<<"\n3. Check Balance";
	Sleep(1000);
	gotoxy(20,18);
	cout<<"\n4. Change Pin Number";
	Sleep(1000);
	gotoxy(20,20);
	cout<<"\n5. View Last transiction";
	Sleep(1000);
	gotoxy(20,22);
	cout<<"\n6.Check EMI amount";
	Sleep(1000);
	gotoxy(20,24);
	cout<<"\n7.Check Banking Hour";
	Sleep(1000);
	gotoxy(20,26);
	cout<<"\n8. Transfer Money";
	Sleep(3000);
	line2();
	option();

	
 }
 void Machine:: option()
 {
 	gotoxy(20,47);
 	cout<<"\nEnter your option ";
 	cin>>choice;
 	Sleep(1000);
 	switch(choice)
 	{
 		case 1: cash_deposite();
				break;
		case 2: cash_withdraw();
				break;
		case 3: check_bal();
				break;
		case 4: change_pin();
			 	break;
	//	case 5: trans_last();
	//			break;
		case 6: check_EMI();
				break;
		case 7: banking_hour();
				break;
		case 8: transfer_money();
			 	break;
			 	
		default: cout<<"Wrong Input";
	 }
 }
 
 void Machine :: cash_deposite()
 {
 	system("cls");
	system("COLOR F2");
 	int rupees_100=0,rupees_200=0,rupees_500=0,rupees_2000=0;
 	system("COLOR F2");
	//line1();
			                                                   //here, calciulate the number of notes
	gotoxy(20,30);
	cout<<"\nYour Current Balance is "<<current_bal;          //current_bal-global variable
	gotoxy(20,35);
	cout<<"\nEnter the given option and number of notes available";
	gotoxy(20,37);
	cout<<"\n 100 rupess notes";
	gotoxy(50,37);
	cin>>rupees_100;
	gotoxy(20,39);
	cout<<"\n 200 rupess notes";
	gotoxy(50,39);
	cin>>rupees_200;
	gotoxy(20,41);
	cout<<"\n 500 rupess notes";
	gotoxy(50,41);
	cin>>rupees_500;
	gotoxy(20,43);
	cout<<"\n 2000 rupess notes";
	gotoxy(50,43);
	cin>>rupees_2000;
	current_bal=((rupees_100*100)+(rupees_200*200)+(rupees_500*500)+(rupees_2000*2000))+current_bal;
	gotoxy(20,50);
	
	cout<<"\nYour transiction is Successfully Completed";
	gotoxy(20,53);
	cout<<"\nTo check your Current balance Please press Y "<<endl;
	char ch3;
	cin>>ch3;
	if(ch3=='Y'|| ch3=='y')
	{
		gotoxy(25,60);
		cout<<"\nYour Current balance in "<<current_bal;
	}
	
				  //frame line 2-call  -incomplete//

	gotoxy(10,70);
	cout<<"\nPress 1: to return to main menu";
	cout<<"\nEnter 2 to exit to main window";
	int op1;
	cin>>op1;
	if(op1==1)
	main_menu();
	else
	Screen1();
	
 }
 void Machine :: cash_withdraw()                  								// withdraw cash method
{
 	int withdraw_amt=0;
 	system("cls");
 	system("COLOR 2F");
	line1();
	gotoxy(15,15);
	if(current_bal<=1000){

	gotoxy(15,25);
	cout<<"\nYou balance is too low";
	}
	gotoxy(15,30);
	cout<<"\nEnter the Amount";
	gotoxy(30,20);
	cin>>withdraw_amt;
	
	current_bal=current_bal - withdraw_amt;
	gotoxy(15,30);
	if(current_bal<0)
	{
		cout<<"sorry!! You dont have enough balance to withdrw";
		cout<<"please try again!!!";
	}
	gotoxy(20,40);
	cout<<"\nPlease collect your Amount!! Thankyou for using our service";
	Sleep(1000);
	line2();
	Sleep(50);

	gotoxy(10,70);
	cout<<"\nPress 1: to return to main menu";
	cout<<"\nEnter 2 to exit to main window";
	int op1;
	cin>>op1;
	if(op1==1)
	main_menu();
	else
	Screen1();

	
 }
  void Machine :: check_bal()
  {
  	system("cls");
  	system("COLOR F2");
  	line1();
  	gotoxy(25,25);
  	Sleep(20);
  	cout<<"\nAccount Number is : ";     						  //account number variable need to be define here
	for(int i=0;i<10;i++)
	cout<<acc_num[i];
	gotoxy(25,27);
  	Sleep(20);
  	cout<<"\nAccout  Holder name is :  "<<name<<" "<<s_name;
	gotoxy(25,29);
	Sleep(20);
	cout<<"\nDate of Birth  :"<<DOB;
	gotoxy(25,31);
	Sleep(3000);
	cout<<"\nYour current balance is :"<<current_bal;
	
	Sleep(2000);
	line2();
	Sleep(10);
	cout<<"\nPress 1. to return to main menu";
	cout<<"\nPress 2. to exit from the services";
	  //60 need to be redfines its is the laast portion of the code
	char ch5;
	cin>>ch5;
	if(ch5=='1')
	main_menu();
	else
 	Screen1();
  }
 void Machine :: change_pin()
 {
 	system("cls");
 	system("COLOR F2");
	line1();
	gotoxy(23,20);
	Sleep(1000);
	int counter=0;
	int temp_change_pin[6];
	cout<<"\nEnter Current Password";
	for(int i=0;i<4;i++)
	cin>>temp_change_pin[i];
	cout<<"\nEnter new password";
	int changed_pin[j];
	for(int j;j<4;j++)
	
	cin>>changed_pin[j];
	for(int k=0;k<4;k++)
	{
	if(pin_num[k]==temp_change_pin[k])
			counter++;
			}	  	  				   //code to compare both pin number
	if(counter==4)
	{
		for(int g=0;g<4;g++)
		pin_num[g]=changed_pin[g];
		cout<<"\nYou have successfully changed the password";
	}

	else
	cout<<"nYou entered Wrong pin";
	line2();
	cout<<"\nPress 1: to return to main menu";
	cout<<"\npress Any key to return to Main window";
	char num3;
	cin>>num3;
	if(num3=='1')
	main_menu();
	else
	Screen1();
 }
 
  void Machine::check_EMI()
  {
  	system("cls");
  	system("COLOR 2F");
  	line1();
  	Sleep(20);
  	
  	cout<<"\n Enter Loan scheme";
  	Sleep(10);
  	
  	cout<<"\n1. Home Loan";
  		Sleep(10);
  	cout<<"\n2. Vehicle loan";
  		Sleep(10);
  	cout<<"\n3. Education Loan";
  		Sleep(10);
  	cout<<"\n4. Gold Laon";
  		Sleep(10);
  	cout<<"\n5. xyz Loan";
  		Sleep(10);
  	cout<<"\nEnter option";
  		Sleep(10);
  	int choice3;
  	long loan_amount=0;
	long interest=0;
  	cin>>choice3;
	switch(choice3)
	{
		case 1: home_loan();
		break;
		case 2: vehicle_loan();
		break;
		case 3: Education_loan();
		break;
		case 4: Gold_loan();
		break;
		case 5: xyz_loan();
		break;
	 	default: cout<<"Wrong input";
	 }
	 Sleep(200);
	 line2();   //line 2 fram,es calls
	 
	 cout<<"\nPress 1: to return to main menu";
	 cout<<"nPress2 : to return to MAin window";
	 int num9;
	 cin>>num9;
	 if(num9==1){

	 Sleep(100);
	 main_menu();}
	 else
	 Sleep(200);
	 Screen1();
	 
}
	 void Machine :: home_loan()
	 {
	 	
	 	cout<<"\nEnter loan amount";
	 	cin>>loan_amount;
		interest=((loan_amount * 12*12)/100);
		cout<<"\nThe total Emi is "<<interest<<endl;
	 }
	 void Machine:: vehicle_loan()
	 {

	 	cout<<"\nEnter loan anoumt";
	 	cin>>loan_amount;
		interest=((loan_amount * 11*12)/100);
		cout<<"\nThe total Emi is "<<interest<<endl;
	 }
	 void  Machine::Education_loan()
	 {

	 	cout<<"\nEnter loan anoumt";
	 	cin>>loan_amount;
		interest=((loan_amount * 10*12)/100);
		cout<<"\nThe total Emi is "<<interest<<endl;
	 }
	 void  Machine::Gold_loan()
	 {

	 	cout<<"\nEnter loan anoumt";
	 	cin>>loan_amount;
		interest=((loan_amount * 14*12)/100);
		cout<<"\nThe total Emi is "<<interest<<endl;
	 }
	 void Machine ::xyz_loan()
	 {

	 	cout<<"\nEnter loan anoumt";
	 	cin>>loan_amount;
		interest=((loan_amount * 15*12)/100);
		cout<<"\nThe total Emi is "<<interest<<endl;
	 }

	
  void Machine::banking_hour()
  {
	system("cls");
	system("COLOR 2F");
	line1();
	Sleep(20);
	gotoxy(15,30);
	cout<<"\nTiming : 9:00 am to 4 pm";
	gotoxy(45,30);
	cout<<"\nMonday to Friday";
	gotoxy(15,45);
	cout<<"\nTiming : 9:00 am to 1 pm";
	gotoxy(45,45);
	cout<<"\nSaturday";
	line2();
	gotoxy(10,70);

	cout<<"\nPress 1: to return to main menu";
	cout<<"\nPress 2: to return to exi twindow";
	
	int op3;
	cin>>op3;
	if(op3==1)
	main_menu();
	else
	Screen1();
  }
   void Machine:: transfer_money()
		{
		system("cls");
	 	system("COLOR F2");
	 	int des_acc_num;
	 	int source_acc_num;

		frame_layout();

	 	gotoxy(20,15);
	 	cout<<"\nEnter your Account number";
	 	cin>>source_acc_num;
	 	cout<<name;
	 	cout<<s_name;
	 	cout<<"\nEnter the destination Accout number";
	 	cin>>des_acc_num;

	 	cout<<"\nEnter amout to be transferes";
		int transfer_amount;
	 	cin>>transfer_amount;
	 	cout<<"\nAmount transfers successfully";
        current_bal=current_bal-transfer_amount;
	 	cout<<"\nYour current balance is "<<current_bal;
	 	//line 2 frames calls

	 	cout<<"\nPress 1 to return main menu";
	 	cout<<"\nPres 2 to return to main window";
	 	cout<<"\nEnter your option";
		int op;
		cin>>op;
		if(op==1)
		main_menu();
		else
		Screen1();
		}
   int main()
	{	
	Machine M;
	M.Screen1();


	
	
	
	
	}
