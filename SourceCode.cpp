#include<iostream>
using namespace std;
int main()
{
	cout<<"\n\n                                   SUPERMARKET                                "<<endl;
	cout<<"______________________________________________________________________________"<<endl;
	cout<<"|Sr No|Products                    1kg |  |Sr No.|Products                1kg |"<<endl;
	cout<<"|_____|________________________________|  |______|____________________________|"<<endl;
	cout<<"|1.   |Garam Masala                640 |  |  11. |Pulao Masala            580 |"<<endl;
	cout<<"|2.   |Supar(Strong)Garam Masala   680 |  |  12. |Briyani Masla           600 |"<<endl;
	cout<<"|3.   |Sabzi Masala                480 |  |  13. |Punjabi Masala          580 |"<<endl;
	cout<<"|4.   |Paneer Masala               580 |  |  14. |Kashmiri Masala         580 |"<<endl;
	cout<<"|5.   |Chola/Chana Masala          540 |  |  15. |kolhapuri Masala        600 |"<<endl;
	cout<<"|6.   |Kitchen king Masala         680 |  |  16. |Pani puri Masala        360 |"<<endl;
	cout<<"|7.   |Dal Tadka Masala            480 |  |  17. |Jaljeera Masala         680 |"<<endl;
	cout<<"|8.   |Raita Masala                480 |  |  18. |Mutton Masala           680 |"<<endl;
	cout<<"|9.   |Chat Masala                 470 |  |  19. |chicken Masala          680 |"<<endl;
	cout<<"|10.  |Tea Masala                  700 |  |  20. |Tandori Chicken Masala  380 |"<<endl;
	cout<<" _____________________________________________________________________________"<<endl;
	int choice;
	char ch;
	do{
		cout<<"\n Enter your choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				{
				int n;
				cout<<"\n\tGaram Masala\n";
				cout<<"\n\t 1. 1 kg\n\t 2. 100 gram\n\t 3. 50 gram\n\t 4. 15 gram"<<endl;
				cout<<"\n How much you want: ";
				cin>>n;
				if(n==1)
				{cout<<"\n\tTotal price is: "<<640*n;}
				else if(n==2)
				{cout<<"\n\tTotal price is: "<<64*n;}
				else if(n==3)
				{cout<<"\n\tTotal price is: "<<32*n;}
				else if(n==4)
				{cout<<"\n\tTotal price is: "<<10*n;}
				else
				{
					cout<<"\n\tTotal price is: "<<640*n;
				}
				break;
				}
			case 2:
				{
				int n;
				cout<<"\n\tSuper(Strong)Garam Masala\n";
				cout<<"\n\t 1. 1 kg\n\t 2. 100 gram\n\t 3. 50 gram\n\t 4. 15 gram"<<endl;
				cout<<"\n How much you want: ";
				cin>>n;
				if(n==1)
				{cout<<"\n\tTotal price is: "<<680*n;}
				else if(n==2)
				{cout<<"\n\tTotal price is: "<<68*n;}
				else if(n==3)
				{cout<<"\n\tTotal price is: "<<34*n;}
				else if(n==4)
				{cout<<"\n\tTotal price is: "<<10*n;}
				else
				{
					cout<<"\n\tTotal Price is: "<<680*n;
				}
				break;
				}
			case 3:
				{
				int n;
				cout<<"\n\tSabzi Masala\n";
				cout<<"\n\t 1. 1 kg\n\t 2. 100 gram\n\t 3. 50 gram\n\t 4. 15 gram"<<endl;
				cout<<"\n How much you want: ";
				cin>>n;
				if(n==1)
				{cout<<"\n\tTotal price is: "<<480*n;}
				else if(n==2)
				{cout<<"\n\tTotal price is: "<<48*n;}
				else if(n==3)
				{cout<<"\n\tTotal price is: "<<24*n;}
				else if(n==4)
				{cout<<"\n\tTotal price is: "<<10*n;}
				else
				{
					cout<<"\n\tTotal Price is: "<<480*n;
				}
				break;
				}
			case 4:
				{
				int n;
				cout<<"\n\tPaneer Masala\n";
				cout<<"\n\t 1. 1 kg\n\t 2. 100 gram\n\t 3. 50 gram\n\t 4. 15 gram"<<endl;
				cout<<"\n How much you want: ";
				cin>>n;
				if(n==1)
				{cout<<"\n\tTotal price is: "<<580*n;}
				else if(n==2)
				{cout<<"\n\tTotal price is: "<<58*n;}
				else if(n==3)
				{cout<<"\n\tTotal price is: "<<29*n;}
				else if(n==4)
				{cout<<"\n\tTotal price is: "<<10*n;}
				else
				{
					cout<<"\n\tTotal Price is: "<<580*n;
				}
				break;
				}
			case 5:
				{
				int n;
				cout<<"\n\tChoola/Channa Masala\n";
				cout<<"\n\t 1. 1 kg\n\t 2. 100 gram\n\t 3. 50 gram\n\t 4. 15 gram"<<endl;
				cout<<"\n How much you want: ";
				cin>>n;
				if(n==1)
				{cout<<"\n\tTotal price is: "<<540*n;}
				else if(n==2)
				{cout<<"\n\tTotal price is: "<<54*n;}
				else if(n==3)
				{cout<<"\n\tTotal price is: "<<27*n;}
				else if(n==4)
				{cout<<"\n\tTotal price is: "<<10*n;}
				else
				{
					cout<<"\n\tTotal Price is: "<<540*n;
				}
				break;
				}
			case 6:
				{
				int n;
				cout<<"\n\tKitchen king Masala\n";
				cout<<"\n\t 1. 1 kg\n\t 2. 100 gram\n\t 3. 50 gram\n\t 4. 15 gram"<<endl;
				cout<<"\n How much you want: ";
				cin>>n;
				if(n==1)
				{cout<<"\n\tTotal price is: "<<680*n;}
				else if(n==2)
				{cout<<"\n\tTotal price is: "<<68*n;}
				else if(n==3)
				{cout<<"\n\tTotal price is: "<<34*n;}
				else if(n==4)
				{cout<<"\n\tTotal price is: "<<10*n;}
				else
				{
					cout<<"\n\tTotal Price is: "<<680*n;
				}
				break;
				}
			case 7:
				{
				int n;
				cout<<"\n\tDal tadka Masala\n";
				cout<<"\n\t 1. 1 kg\n\t 2. 100 gram\n\t 3. 50 gram\n\t 4. 15 gram"<<endl;
				cout<<"\n How much you want: ";
				cin>>n;
				if(n==1)
				{cout<<"\n\tTotal price is: "<<480*n;}
				else if(n==2)
				{cout<<"\n\tTotal price is: "<<48*n;}
				else if(n==3)
				{cout<<"\n\tTotal price is: "<<24*n;}
				else if(n==4)
				{cout<<"\n\tTotal price is: "<<10*n;}
				else
				{
					cout<<"\n\tTotal Price is: "<<480*n;
				}
				break;
				}
			case 8:
				{
				int n;
				cout<<"\n\tRaita Masala\n";
				cout<<"\n\t 1. 1 kg\n\t 2. 100 gram\n\t 3. 50 gram\n\t 4. 15 gram"<<endl;
				cout<<"\n How much you want: ";
				cin>>n;
				if(n==1)
				{cout<<"\n\tTotal price is: "<<480*n;}
				else if(n==2)
				{cout<<"\n\tTotal price is: "<<48*n;}
				else if(n==3)
				{cout<<"\n\tTotal price is: "<<24*n;}
				else if(n==4)
				{cout<<"\n\tTotal price is: "<<10*n;}
				else
				{
					cout<<"\n\tTotal Price is: "<<480*n;
				}
				break;
				}
			case 9:
				{
				int n;
				cout<<"\n\tChat Masala\n";
				cout<<"\n\t 1. 1 kg\n\t 2. 100 gram\n\t 3. 50 gram\n\t 4. 15 gram"<<endl;
				cout<<"\n How much you want: ";
				cin>>n;
				if(n==1)
				{cout<<"\n\tTotal price is: "<<420*n;}
				else if(n==2)
				{cout<<"\n\tTotal price is: "<<42*n;}
				else if(n==3)
				{cout<<"\n\tTotal price is: "<<21*n;}
				else if(n==4)
				{cout<<"\n\tTotal price is: "<<10*n;}
				else
				{
					cout<<"\n\tTotal Price is: "<<420*n;
				}
				break;
				}
			case 10:
				{
				int n;
				cout<<"\n\tTea Masala\n";
				cout<<"\n\t 1. 1 kg\n\t 2. 100 gram\n\t 3. 50 gram\n\t 4. 15 gram"<<endl;
				cout<<"\n How much you want: ";
				cin>>n;
				if(n==1)
				{cout<<"\n\tTotal price is: "<<700*n;}
				else if(n==2)
				{cout<<"\n\tTotal price is: "<<70*n;}
				else if(n==3)
				{cout<<"\n\tTotal price is: "<<35*n;}
				else if(n==4)
				{cout<<"\n\tTotal price is: "<<10*n;}
				else
				{
					cout<<"\n\tTotal Price is: "<<700*n;
				}
				break;
				}
			case 11:
				{
				int n;
				cout<<"\n\tPulao Masala\n";
				cout<<"\n\t 1. 1 kg\n\t 2. 100 gram\n\t 3. 50 gram\n\t 4. 15 gram"<<endl;
				cout<<"\n How much you want: ";
				cin>>n;
				if(n==1)
				{cout<<"\n\tTotal price is: "<<580*n;}
				else if(n==2)
				{cout<<"\n\tTotal price is: "<<58*n;}
				else if(n==3)
				{cout<<"\n\tTotal price is: "<<29*n;}
				else if(n==4)
				{cout<<"\n\tTotal price is: "<<10*n;}
				else
				{
					cout<<"\n\tTotal Price is: "<<580*n;
				}
				break;
				}
			case 12:
				{
				int n;
				cout<<"\n\tBriyani Masala\n";
				cout<<"\n\t 1. 1 kg\n\t 2. 100 gram\n\t 3. 50 gram\n\t 4. 15 gram"<<endl;
				cout<<"\n How much you want: ";
				cin>>n;
				if(n==1)
				{cout<<"\n\tTotal price is: "<<600*n;}
				else if(n==2)
				{cout<<"\n\tTotal price is: "<<60*n;}
				else if(n==3)
				{cout<<"\n\tTotal price is: "<<30*n;}
				else if(n==4)
				{cout<<"\n\tTotal price is: "<<10*n;}
				else
				{
					cout<<"\n\tTotal Price is: "<<600*n;
				}
				break;
				}
			case 13:
				{
				int n;
				cout<<"\n\tPunjabi Masala\n";
				cout<<"\n\t 1. 1 kg\n\t 2. 100 gram\n\t 3. 50 gram\n\t 4. 15 gram"<<endl;
				cout<<"\n How much you want: ";
				cin>>n;
				if(n==1)
				{cout<<"\n\tTotal price is: "<<580*n;}
				else if(n==2)
				{cout<<"\n\tTotal price is: "<<58*n;}
				else if(n==3)
				{cout<<"\n\tTotal price is: "<<29*n;}
				else if(n==4)
				{cout<<"\n\tTotal price is: "<<10*n;}
				else
				{
					cout<<"\n\tTotal Price is: "<<580*n;
				}
				break;
				}
			case 14:
				{
				int n;
				cout<<"\n\tKashmiri Masala\n";
				cout<<"\n\t 1. 1 kg\n\t 2. 100 gram\n\t 3. 50 gram\n\t 4. 15 gram"<<endl;
				cout<<"\n How much you want: ";
				cin>>n;
				if(n==1)
				{cout<<"\n\tTotal price is: "<<580*n;}
				else if(n==2)
				{cout<<"\n\tTotal price is: "<<58*n;}
				else if(n==3)
				{cout<<"\n\tTotal price is: "<<29*n;}
				else if(n==4)
				{cout<<"\n\tTotal price is: "<<10*n;}
				else
				{
					cout<<"\n\tTotal Price is: "<<580*n;
				}
				break;
				}
			case 15:
				{
				int n;
				cout<<"\n\tKolhapuri Masala\n";
				cout<<"\n\t 1. 1 kg\n\t 2. 100 gram\n\t 3. 50 gram\n\t 4. 15 gram"<<endl;
				cout<<"\n How much you want: ";
				cin>>n;
				if(n==1)
				{cout<<"\n\tTotal price is: "<<600*n;}
				else if(n==2)
				{cout<<"\n\tTotal price is: "<<60*n;}
				else if(n==3)
				{cout<<"\n\tTotal price is: "<<30*n;}
				else if(n==4)
				{cout<<"\n\tTotal price is: "<<10*n;}
				else
				{
					cout<<"\n\tTotal Price is: "<<600*n;
				}
				break;
				}
			case 16:
				{
				int n;
				cout<<"\n\tPani puri Masala\n";
				cout<<"\n\t 1. 1 kg\n\t 2. 100 gram\n\t 3. 50 gram\n\t 4. 15 gram"<<endl;
				cout<<"\n How much you want: ";
				cin>>n;
				if(n==1)
				{cout<<"\n\tTotal price is: "<<360*n;}
				else if(n==2)
				{cout<<"\n\tTotal price is: "<<36*n;}
				else if(n==3)
				{cout<<"\n\tTotal price is: "<<18*n;}
				else if(n==4)
				{cout<<"\n\tTotal price is: "<<10*n;}
				else
				{
					cout<<"\n\tTotal Price is: "<<360*n;
				}
				break;
				}
			case 17:
				{
				int n;
				cout<<"\n\t Jaljeera Masala\n";
				cout<<"\n\t 1. 1 kg\n\t 2. 100 gram\n\t 3. 50 gram\n\t 4. 15 gram"<<endl;
				cout<<"\n How much you want: ";
				cin>>n;
				if(n==1)
				{cout<<"\n\tTotal price is: "<<600*n;}
				else if(n==2)
				{cout<<"\n\tTotal price is: "<<60*n;}
				else if(n==3)
				{cout<<"\n\tTotal price is: "<<30*n;}
				else if(n==4)
				{cout<<"\n\tTotal price is: "<<10*n;}
				else
				{
					cout<<"\n\tTotal Price is: "<<600*n;
				}
				break;
				}
			case 18:
				{
				int n;
				cout<<"\n\t Mutton Masala\n";
				cout<<"\n\t 1. 1 kg\n\t 2. 100 gram\n\t 3. 50 gram\n\t 4. 15 gram"<<endl;
				cout<<"\n How much you want: ";
				cin>>n;
				if(n==1)
				{cout<<"\n\tTotal price is: "<<680*n;}
				else if(n==2)
				{cout<<"\n\tTotal price is: "<<68*n;}
				else if(n==3)
				{cout<<"\n\tTotal price is: "<<34*n;}
				else if(n==4)
				{cout<<"\n\tTotal price is: "<<10*n;}
				else
				{
					cout<<"\n\tTotal Price is: "<<680*n;
				}
				break;
				}
			case 19:
				{
				int n;
				cout<<"\n\t Chicken Masala\n";
				cout<<"\n\t 1. 1 kg\n\t 2. 100 gram\n\t 3. 50 gram\n\t 4. 15 gram"<<endl;
				cout<<"\n How much you want: ";
				cin>>n;
				if(n==1)
				{cout<<"\n\tTotal price is: "<<680*n;}
				else if(n==2)
				{cout<<"\n\tTotal price is: "<<68*n;}
				else if(n==3)
				{cout<<"\n\tTotal price is: "<<34*n;}
				else if(n==4)
				{cout<<"\n\tTotal price is: "<<10*n;}
				else
				{
					cout<<"\n\tTotal Price is: "<<680*n;
				}
				break;
				}
			case 20:
				{
				int n;
				cout<<"\n\t Tandori Chicen Masala\n";
				cout<<"\n\t 1. 1 kg\n\t 2. 100 gram\n\t 3. 50 gram\n\t 4. 15 gram"<<endl;
				cout<<"\n How much you want: ";
				cin>>n;
				if(n==1)
				{cout<<"\n\tTotal price is: "<<600*n;}
				else if(n==2)
				{cout<<"\n\tTotal price is: "<<60*n;}
				else if(n==3)
				{cout<<"\n\tTotal price is: "<<34*n;}
				else if(n==4)
				{cout<<"\n\tTotal price is: "<<10*n;}
				else
				{
					cout<<"\n\tTotal Price is: "<<600*n;
				}
				break;
				}
		}
		cout<<"\n\n Do you want to back (y/n)?";
		cin>>ch;
	}
	while(ch=='y' || ch=='Y');
}
