#include<iostream>
using namespace std;
class supermarket
{
	private:
		int product_number1;
		int product_number2;
		int product_number3;
		char product_name1[50];
		char product_name2[50];
		char product_name3[50];
		float product_price1;
		float product_price2;
		float product_price3;
	public:
		void getdata()
		{
			cout<<endl<<"Enter first Product Details"<<endl;
			cout<<endl<<"Please Enter The Product Number: ";
			cin>>product_number1;
			cout<<endl<<"Please Enter The Name of The Product: ";
			cin.ignore();
			cin.getline(product_name1 ,50);
			cout<<endl<<"Please Enter The Price of The Product: ";
			cin>>product_price1;
			cout<<endl<<endl<<"Enter Second Product Details"<<endl;
			cout<<endl<<"Please Enter The Product Number: ";
			cin>>product_number2;
			cout<<endl<<"Please Enter The Name of The Product: ";
			cin.ignore();
			cin.getline(product_name2 ,50);
			cout<<endl<<"Please Enter The Price of The Product: ";
			cin>>product_price2;
			cout<<endl<<endl<<"Enter Third Product Details"<<endl;
			cout<<endl<<"Please Enter The Product Number: ";
			cin>>product_number3;
			cout<<endl<<"Please Enter The Name of The Product: ";
			cin.ignore();
			cin.getline(product_name3 ,50);
			cout<<endl<<"Please Enter The Price of The Product: ";
			cin>>product_price3;
		}
		void showdata()
		{
			cout<<"\n\n\t\t\t           SUPERMARKET"<<endl;
			cout<<"\t\t\t_______________________________________ "<<endl;
			cout<<"\t\t\t|Sr No|Products                    1kg |"<<endl;
			cout<<"\t\t\t|_____|________________________________|"<<endl;
			cout<<"\t\t\t|  "<<product_number1<<"  |\t"<<product_name1<<"\t\t  |"<<product_price1<<" |"<<endl;
			cout<<"\t\t\t|  "<<product_number2<<"  |\t"<<product_name2<<"\t\t  |"<<product_price2<<" |"<<endl;
			cout<<"\t\t\t|  "<<product_number3<<"  |\t"<<product_name3<<"\t\t  |"<<product_price3<<" |"<<endl;
			int a,b,c,d;
			char ch;
			do{
			int choice;
			cout<<"Enter a Choice: ";
			cin>>choice;
			switch(choice)
			{
				case 1:
					{
						cout<<"\n\t\tYou selected a Order "<<product_name1<<endl;
						cout<<"\t\t1 Item price is: "<<product_price1<<endl;
						int n;
						cout<<"\n\n\tHow much you want items ";
						cin>>n;
						a=n*product_price1;
						cout<<"\n\n\tTotal price is: "<<a;
						break;
					}
				case 2:
					{
						cout<<"\n\t\tYou selected a Order "<<product_name2<<endl;
						cout<<"\t\t1 Item price is: "<<product_price2<<endl;
						int n;
						cout<<"\n\t\tHow much you want items ";
						cin>>n;
						b=n*product_price2;
						cout<<"\n\n\tTotal price is: "<<b;
						break;
					}
				case 3:
					{
						cout<<"\n\t\tYou selected a Order "<<product_name3<<endl;
						cout<<"\t\t1 Item price is: "<<product_price3<<endl;
						int n;
						cout<<"\n\t\tHow much you want items ";
						cin>>n;
						c=n*product_price3;
						cout<<"\n\n\tTotal price is: "<<c;
						break;
					}
			}
			cout<<"\n\n\tDo you want to Back (y/n)?";
			cin>>ch;
		}
			while(ch=='y' || ch=='Y');
			cout<<"\n\n\t\t________________________"<<endl;
			d=a+b+c;
			cout<<"\t\tGrand total is ="<<d;
			cout<<"\n\t\t________________________"<<endl<<endl<<endl;
		}
		void modifydata()
		{
			cout<<endl<<"\n\t\tFirst Product Details"<<endl;
			cout<<endl<<"\t\t1 Product Number: "<<product_number1;
			cout<<endl<<"\t\t2 Name of Product: "<<product_name1;
			cout<<endl<<"\t\t3 Price of The Product: "<<product_price1;
			cout<<endl<<endl<<"\n\n\t\tSecond Product Details"<<endl;
			cout<<endl<<"\t\t4 Product Number: "<<product_number2;
			cout<<endl<<"\t\t5 Name of Product: "<<product_name2;
			cout<<endl<<"\t\t6 Price of The Product: "<<product_price2;
			cout<<endl<<endl<<"\n\n\t\tThird Product Details"<<endl;
			cout<<endl<<"\t\t7 Product Number: "<<product_number3;
			cout<<endl<<"\t\t8 Name of Product: "<<product_name3;
			cout<<endl<<"\t\t9 Price of The Product: "<<product_price3;
			int choice;
			cout<<"Enter a Choice: ";
			cin>>choice;
			switch(choice)
			{
				case 1:
					{
						cout<<endl<<"Please Enter The Product Number: ";
						cin>>product_number1;
						break;	
					}
				case 2:
					{
						cout<<endl<<"Please Enter The Name of The Product: ";
						cin.ignore();
						cin.getline(product_name1 ,50);
						break;
					}
				case 3:
					{
						cout<<endl<<"Please Enter The Price of The Product: ";
						cin>>product_price1;
						break;
					}
				case 4:
					{
						cout<<endl<<"Please Enter The Product Number: ";
						cin>>product_number2;
						break;	
					}
				case 5:
					{
						cout<<endl<<"Please Enter The Name of The Product: ";
						cin.ignore();
						cin.getline(product_name2 ,50);
						break;
					}
				case 6:
					{
						cout<<endl<<"Please Enter The Price of The Product: ";
						cin>>product_price2;
						break;
					}
				case 7:
					{
						cout<<endl<<"Please Enter The Product Number: ";
						cin>>product_number3;
						break;	
					}
				case 8:
					{
						cout<<endl<<"Please Enter The Name of The Product: ";
						cin.ignore();
						cin.getline(product_name3 ,50);
						break;
					}
				case 9:
					{
						cout<<endl<<"Please Enter The Price of The Product: ";
						cin>>product_price3;
						break;
					}
				default:
					{
						cout<<"Invalid Choice";
						break;
					}
			}
		}
};
int main(int argc, char *argv[])
{
	supermarket sm;
	system("cls");
	int option;
	
	for(;;)
	{
	cout<<"\n			Developed by Faraz Ahmad Jutt		"<<endl<<endl;
	cout<<"			SuperMarket Billing Project 		"<<endl<<endl<<endl;
	cout<<"			1 --> CREATE RECORD					"<<endl;
	cout<<"			2 --> DISPLAY RECORD				"<<endl;
	cout<<"			3 --> MODIFY RECORD					"<<endl;
	cout<<"			4 --> EXIT PROGRAM					"<<endl;
	int choice;
	cout<<"Enter your choice: ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			{
				sm.getdata();
				break;
			}
		case 2:
			{
				sm.showdata();
				break;
			}
		case 3:
			{
				sm.modifydata();
				break;
			}
		case 4:
			{
				cout<<"\n\tGood Bye!";
				exit(0);
			}
		default:
			{
				cout<<"Invalid Choice";
				break;
			}
	}
}
}
