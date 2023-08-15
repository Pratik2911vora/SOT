#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<fstream>
#include<process.h>
using namespace std;
class SOT
{
	public:
	int choice,g_choice,m,l_choice,choice_1;
	char phne[10];
	char add[50],name[100];
	float P1=50,P2=80.00,P3=90.00,P4=95.00; //member for pulses.
	float R1=175.80,R2=125.20,R3=100.50,R4=95.60; // member for Rice.
	float F1=30.00,F2=40.00,F3=25.00; // member for Flour.
	float T1=200.00,T2=152.00,T3=710.00; //member of Tea.
	float C1=155.00,C2=152.78,C3=975.00; //member for coffee.
	float S1=26.00,S2=20.00,S3=20.00; // Member for sugar.
	float M1=30.00,M2=23.00,M3=20.00;//member for Milk

	int quantity=1;
	int Pulse,Rice,Flour,Tea,Coffee,Sugar,Milk;
	char address;
	public:
		void abc();
   		void xyz();
   		void list();
   		void pqr();
};
exit()
{
    system("cls");
    cout<<"Thankyou for Using our program!";
    exit(0);
}
void SOT::xyz()
	 {
	cout<<"\t\t\t\t\t\t***************************\n";
	cout<<"\t\t\t\t\t\tWelcome To SHOP ON TIME\n";
	cout<<"\t\t\t\t\t\t***************************\n";
	cout<<"\t\t\t\t\t\t Items\n";
	cout<<"\t\t\t\t\t\t1 Groceries\n";
	cout<<"\t\t\t\t\t\t2 Electronics\n";
	cout<<"\t\t\t\t\t\t3 Vegetables & Fruits"<<endl;
	cout<<"\t\t\t\t\t\t4 Clothes\n";

	cout<<"------------------------------------------------------------------------------------------------------------------------\n";
	cout<<"Enter Your Choice:";
	cin>>choice;
	system("cls");
}
	void SOT::abc()
	{

	switch(choice)
	{
		case 1:
			cout<<"********** You Have Selected Groceries**********\n";
			cout<<"1 Pulses\n";
			cout<<"2 Rice\n";
			cout<<"3 Flour\n";
			cout<<"4 Tea\n";
			cout<<"5 Coffee\n";
			cout<<"6 Sugar\n";
			cout<<"7 Milk\n ";

			cout<<"\nEnter Your Choice:";
			cin>>g_choice;
			if(g_choice==1)
			{
				cout<<"\n\t******** Pulses ************\n";
					cout<<"\tName\t";
	cout<<"\tPrice(Rs.)\n";
	cout<<"\t1 Mung Dal\t";
	cout<<"50/kg\n";
	cout<<"\t2 Chana Dal";
	cout<<"\t80/Kg\n";
	cout<<"\t3 Toor Dal\t";
	cout<<"90/kg\n";
	cout<<"\t4 Masoor Dal\t";
	cout<<"95/kg\n";
	cout<<"\nEnter Choice Which Pulse You Want:";
	cin>>Pulse;
	if(Pulse==1)
	{
		cout<<"******** Your Choice is Mung Dal***********\n";
		cout<<"Enter Your Quantity in KG:";
		cin>>quantity;		P1=P1*quantity;
		cout<<"Total cost:"<<P1<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nYour order is placed sucessfully.....\n";
		cout<<"Shop name- All in one genral store\t\tShop Contact no-9876543210\n";
		cout<<"Shop address-LIG square ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM.\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
}	else if(Pulse==2)
	{
		cout<<"*********Your Choice is Chana Dal**********\n";
		cout<<"Enter Your Quantity in KG:";
		cin>>quantity;	P2=P2*quantity;
		cout<<"Total cost:"<<P2<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nYour order is placed sucessfully.....\n";
		cout<<"Shop name- All in one genral store \t\tcontact no-9876543210\n";
		cout<<"Shop address-LIG square ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else if(Pulse==3)
	{
		cout<<"*********Your Choice is Toor Dal**********\n";
		cout<<"Enter Your Quantity in KG:";
		cin>>quantity;		P3=P3*quantity;
		cout<<"Total cost:"<<P3<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nYour order is placed sucessfully.....\n";
		cout<<"Shop name- All in one genral store \t\tcontact no-9876543210\n";
		cout<<"Shop address-LIG square ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		}
	else if(Pulse==4)
	{
		cout<<"********Your Choice is Masoor Dal*********\n";
		cout<<"Enter Your Quantity in KG:";
		cin>>quantity;		P4=P4*quantity;
		cout<<"Total cost:"<<P4<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nYour order is placed sucessfully.....\n";
		cout<<"Shop name- Grocers street \t\tcontact no-9876001210\n";
		cout<<"shop address-Tilak nagar \n";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	cout<<"\n1 for Main Menu\n";
	cout<<"2 for Groceries Menu\n";
	cout<<"3 for EXIT\n";
	cin>>m;
	if(m==1)
	{
		xyz();
		abc();
	}
	else if(m==2)
	{
		abc();
	}
	else if (m==3)
    {
        exit();
    }
	else
	{
		cout<<"Invalid Input\n";
		xyz();
	}
}
else if(g_choice==2)
{
		cout<<"********Rice*********:-\n";
	cout<<"\tName of Rice\t";
	cout<<"Price(Rs.)\n";
	cout<<"\t1 Basmati\t";
	cout<<"175/kg\n";
	cout<<"\t2 Taj Mahal";
	cout<<"\t125/Kg\n";
	cout<<"\t3 India Gate\t";
	cout<<"100/kg\n";
	cout<<"\t4 Sun Rise\t";
	cout<<"95/kg\n";
	cout<<"-------------------------------------------------------------------------------------\n";
	cout<<"Enter Choice Which Rice You Want:";
	cin>>Rice;
		if(Rice==1)
	{
		cout<<"*Your Choice is Basmati Rice**\n";
		cout<<"Enter Your Quantity in KG:";
		cin>>quantity;		R1=R1*quantity;
		cout<<"Total cost:"<<R1<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nYour order is placed sucessfully.....\n";
		cout<<"Shop name- Everfresh \t\tcontact no-9876543210\n";
		cout<<"shop address-choithram  square \n";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else if(Rice==2)
	{
		cout<<"**Your Choice is Taj Mahal Rice*\n";
		cout<<"Enter Your Quantity in KG:";
		cin>>quantity;		R2=R2*quantity;
		cout<<"Total cost:"<<R2<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nYour order is placed sucessfully.....\n";
		cout<<"Shop name- All in one genral store \t\tcontact no-9876543400\n";
		cout<<"shop address-LIG square\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else if(Rice==3)
	{
		cout<<"**Your Choice is India Gate Rice*\n";
		cout<<"Enter Your Quantity in KG:";
		cin>>quantity;		R3=R3*quantity;
		cout<<"Total cost:"<<R3<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nYour order is placed sucessfully.....\n";
		cout<<"Shop name- All in one genral store \t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else if(Rice==4)
	{
		cout<<"**Your Choice is Sun Rise Rice*\n";
		cout<<"Enter Your Quantity in KG:";
		cin>>quantity;		R4=R4*quantity;
		cout<<"Total cost:"<<R4<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"Your order is placed sucessfully.....\n";
		cout<<"Shop name- Bigbazar \t\tcontact no-9876543210\n";
		cout<<"shop address-vijay nagar\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
 	cout<<"1 for Main Menu\n";
	cout<<"2 for Groceries Menu\n";
	cout<<"3 for EXIT\n";
	cin>>m;
	if(m==1)
	{
		xyz();
		abc();
	}
	else if(m==2)
	{
		abc();
	}
	else if (m==3)
    {
        exit();
    }
	else
	{
		cout<<"Invalid Input\n";
		xyz();
	}
	}
else if(g_choice==3)
{
	cout<<"**Flour**\n";
	cout<<"\tName of Flour\t";
	cout<<"Price(Rs.)\n";
	cout<<"\t1 AAA\t";
	cout<<"\t30/kg\n";
	cout<<"\t2 Aashirwad";
	cout<<"\t40/Kg\n";
	cout<<"\t3 Ghar Ka AATA\t";
	cout<<"20/kg\n";
		cout<<"-------------------------------------------------------------------------------------\n";
	cout<<"Enter Choice Which Flour You Want:";
	cin>>Flour;
		if(Flour==1)
	{
		cout<<"*Your Choice is AAA Flour**\n";
		cout<<"Enter Your Quantity in KG:";
		cin>>quantity;		F1=F1*quantity;
		cout<<"Total cost:"<<F1<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nYour order is placed sucessfully.....\n";
		cout<<"Shop name- All in one genral store \t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square \n";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else if(Flour==2)
	{
		cout<<"**Your Choice is Aashirwad Flour*\n";
		cout<<"Enter Your Quantity in KG:";
		cin>>quantity;		F2=F2*quantity;
		cout<<"Total cost:"<<F2<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nYour order is placed sucessfully.....\n";
		cout<<"Shop name- All in one genral store \t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square \n";
        cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else if(Flour==3)
	{
		cout<<"**Your Choice is Ghar ka Aata Flour*\n";
		cout<<"Enter Your Quantity in KG:";
		cin>>quantity;		F3=F3*quantity;
		cout<<"Total cost:"<<R3<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nYour order is placed sucessfully.....\n";
		cout<<"Shop name- All in one genral store \t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		}
	cout<<"1 for Main Menu\n";
	cout<<"2 for Groceries Menu\n";
	cout<<"3 for EXIT\n";
	cin>>m;
	if(m==1)
	{
		xyz();
		abc();

	}
	else if(m==2)
	{
		abc();
	}
	else if (m==3)
    {
        exit();
    }
	else
	{
		cout<<"Invalid Input\n";
		xyz();
	}
	}
else if(g_choice==4)
{
	cout<<"**TEA**\n";
	cout<<"\tName of Tea\t";
	cout<<"\tPrice 500g\n";
	cout<<"\t1 Red Label\t";
	cout<<"\t200\n";
	cout<<"\t2 Tata Tea";
	cout<<"\t\t152\n";
	cout<<"\t3 Lipton Pure & Green Tea ";
	cout<<"710\n";
		cout<<"-------------------------------------------------------------------------------------\n";
	cout<<"Enter Choice Which Tea You Want:";
	cin>>Tea;
		if(Tea==1)
	{
		cout<<"*Your Choice is Red Label Tea**\n";
		cout<<"Enter Your Quantity of 500g Box:";
		cin>>quantity;		T1=T1*quantity;
		cout<<"Total cost:"<<T1<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nYour order is placed sucessfully.....\n";
		cout<<"Shop name- Big bazar \t\tcontact no-9248753210\n";
		cout<<"shop address-near c21 mall\n";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else if(Tea==2)
	{
		cout<<"**Your Choice is Tata Tea*\n";
		cout<<"Enter Your Quantity of 500g Box:";
		cin>>quantity;			T2=T2*quantity;
		cout<<"Total cost:"<<T2<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nYour order is placed sucessfully.....\n";
		cout<<"Shop name- All in one genral store \t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square \n";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else if(Tea==3)
	{
		cout<<"**Your Choice is Lipton Pure & Green Tea*\n";
		cout<<"Enter Your Quantity of 500g Box\n";
		cin>>quantity;	T3=T3*quantity;
		cout<<"Total cost:"<<T3<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nYour order is placed sucessfully.....\n";
		cout<<"Shop name- All in one genral store \t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		}
		cout<<"\n1 for Main Menu\n";
	cout<<"2 for Groceries Menu\n";
	cout<<"3 for EXIT\n";
	cin>>m;
	if(m==1)
	{
		xyz();
		abc();
	}
	else if(m==2)
	{
		abc();
	}
	else if (m==3)
    {
        exit();
    }
	else
	{
		cout<<"Invalid Input\n";
		xyz();
	}
	}
	else if(g_choice==5)
{
	cout<<"*******COFFEE**********\n";
	cout<<"\tName of Coffee\t";
	cout<<"\t\tPrice 500g\n";
	cout<<"\t1 BRU Green Label Coffee";
	cout<<"\t155\n";
	cout<<"\t2 Nescafe";
	cout<<"\t\t\t152\n";
	cout<<"\t3 BRU Gold Coffee";
	cout<<"\t\t975\n";
		cout<<"\n-------------------------------------------------------------------------------------\n";
	cout<<"Enter Choice Which Tea You Want\n";
	cin>>Coffee;
		if(Coffee==1)
	{
		cout<<"*Your Choice is Bru Green Label Coffee**\n";
		cout<<"Enter Your Quantity of 500g Box\n";
		cin>>quantity;		C1=C1*quantity;
		cout<<"Total cost:"<<C1<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nYour order is placed sucessfully.....\n";
		cout<<"Shop name- All in one genral store \t\tcontact no-9876511210\n";
		cout<<"shop address-LIG square\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else if(Coffee==2)
	{
		cout<<"**Your Choice is Nescafe Coffee*\n";
		cout<<"Enter Your Quantity of 500g Box:";
		cin>>quantity;		C2=C2*quantity;
		cout<<"Total cost:"<<C2<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nYour order is placed sucessfully.....\n";
		cout<<"Shop name- All in one genral store \t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square \n";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else if(Coffee==3)
	{
		cout<<"**Your Choice is Bru Gold Coffee*\n";
		cout<<"Enter Your Quantity of 500g Box:";
		cin>>quantity;		C3=C3*quantity;
		cout<<"Total cost:"<<C3<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nYour order is placed sucessfully.....\n";
		cout<<"Shop name- All in one genral store \t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		}
	cout<<"1 for Main Menu\n";
	cout<<"2 for Groceries Menu\n";
	cout<<"3 for EXIT\n";
	cin>>m;
	if(m==1)
	{
		xyz();
		abc();
	}
	else if(m==2)
	{
		abc();
	}
	else if (m==3)
    {
        exit();
    }
	else
	{
		cout<<"Invalid Input\n";
		xyz();
	}
	}
	else if(g_choice==7)
{
	cout<<"********Milk*********\n";
	cout<<"\t*Name of Milk*\t";
	cout<<"\tPrice of 500/ml \n";
	cout<<"\t1 Amul\t\t";
	cout<<"\t\t\t30.00Rs\n";
	cout<<"\t2 Amul Tazza";
	cout<<"\t\t\t\t23.00Rs\n";
	cout<<"\t3 Sanchi\t ";
	cout<<"\t\t\t20.00Rs\n";
		cout<<"-------------------------------------------------------------------------------------\n";
	cout<<"Enter Choice Which Type of Milk You Want\n";
	cin>>Milk;
		if(Milk==1)
	{
		cout<<"*Your Choice is Amul Milk**\n";
		cout<<"Enter Your Quantity in 500/ml\n";
		cin>>quantity;		M1=M1*quantity;
		cout<<"Total cost:"<<M1<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nYour order is placed sucessfully.....\n";
		cout<<"Shop name- Amul store \t\tcontact no-878783210\n";
		cout<<"shop address-geeta bhavan square\n ";
        cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else if(Milk==2)
	{
		cout<<"**Your Choice is Amul Tazza *\n";
		cout<<"Enter Your Quantity in 500/ml::";
		cin>>quantity;
		M2=M2*quantity;
		cout<<"Total cost:"<<M2<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nYour order is placed sucessfully.....\n";
		cout<<"Shop name- All in one genral store \t\tcontact no-9876543210\n";
		cout<<"shop address-geeta bhavan square\n";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else if(Milk==3)
	{
		cout<<"**Your Choice is Sanchi Milk*\n";
		cout<<"Enter Your Quantity in 500/ml::";
		cin>>quantity;		M3=M3*quantity;
		cout<<"Total cost:"<<M3<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nYour order is placed sucessfully.....\n";
		cout<<"Shop name- All in one genral store \t\tcontact no-9876543210\n";
		cout<<"shop address-geeta bhavan square\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
			}
		cout<<"1 for Main Menu\n";
	cout<<"2 for Groceries Menu\n";
	cout<<"3 for EXIT\n";
	cin>>m;
	if(m==1)
	{
		xyz();
		abc();
	}
	else if(m==2)
	{
		abc();
	}
	else if (m==3)
    {
        exit();
    }
	else
	{
		cout<<"Invalid Input\n";
		xyz();
	}
	}
	else if(g_choice==6)
{
	cout<<"***********SUGAR************\n";
		cout<<"\t*Name of Sugar*\t";
	cout<<"\tPrice of 500g \n";
	cout<<"\t1 Big Crystal Sugar\t"; 	cout<<"\t\t26Rs\n";
	cout<<"\t2 Medium Sugar";			cout<<"\t\t\t\t20Rs\n";
	cout<<"\t3 Sugar Powder\t ";		cout<<"\t\t\t20.5Rs\n";
		cout<<"\n-------------------------------------------------------------------------------------\n";
	cout<<"Enter Choice Which Sugar You Want:";
	cin>>Sugar;
		if(Sugar==1)
	{
		cout<<"*Your Choice is Crystal Sugar**\n";
		cout<<"Enter Your Quantity in 500g:";
		cin>>quantity;		S1=S1*quantity;
		cout<<"Total cost:"<<S1<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- MG traders \t\tcontact no-9876543210\n";
		cout<<"shop address-saket\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else if(Sugar==2)
	{
		cout<<"**Your Choice is Medium Sugar*\n";
		cout<<"Enter Your Quantity in 500g:";
		cin>>quantity;		S2=S2*quantity;
		cout<<"Total cost:"<<S2<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- All in one genral store \t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square \n";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else if(Sugar==3)
	{
		cout<<"**Your Choice is Sugar Powder*\n";
		cout<<"Enter Your Quantity in 500g:";
		cin>>quantity;		S3=S3*quantity;
		cout<<"Total cost:"<<S3<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- All in one genral store \t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square \n";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
    cout<<"1 for Main Menu\n";
	cout<<"2 for Groceries Menu\n";
	cout<<"3 for EXIT\n";
	cin>>m;
	if(m==1)
	{
		xyz();
		abc();
	}
	else if(m==2)
	{
		abc();
	}
	else if (m==3)
    {
        exit();
    }
	else
	{
		cout<<"Invalid Input\n";
		xyz();
	}
	}
}
}
class Electronic:public SOT
{
	int e_choice;
	public:
	void ec();
};
void Electronic::ec()
{
	switch(choice)
	{
			case 2:
			cout<<"******** you have selected electronics**********\n";
			cout<<"1 Headphone\n";
			cout<<"2 Speakers\n";
			cout<<"3 Trimmer\n";
			cout<<"4 Charger\n";
			cout<<"5 Mobile\n";
			cout<<"6 Power Bank\n";
			cout<<"7 Mouse,Keyboard, Printer ,Scanner\n";
			cout<<"8 Laptop\n";

	float h1=3200,h2=3000,h3=4500,h4=2500;	//member for haedphone
	float sp1=15500,sp2=3200,sp3=9750;	//member for speaker
	float tr1=5500,tr2=5200,tr3=750;	// member for trimmer
	float cr1=1500,cr2=1200,cr3=750;    //member fro charger
	float mo1=18500,mo2=32000,mo3=17500;
	float pb1=3500,pb2=2000;
	float mu1=500,mu2=2000,mu3=500;
	float lp1=60000,lp2=55000,lp3=40000;
	int headphone,speaker,trimmer,charger,mobile,pbank,mouse,laptop;
			cout<<"Enter Your Choice:";
			cin>>e_choice;
			//member for headphone
			if(e_choice==1)
			{
				cout<<"************Headphones:-*******8\n";
				cout<<"\tName\t";
	cout<<"\t\t\t\t\tPrice(Rs.)\n";
	cout<<"\t1 JBL Wireless Headphone \t\t\t3000\n";
	cout<<"\t2 JbL Wire Headphone      \t\t\t3500\n";
	cout<<"\t3 BOAT Wireleass Headphone\t\t\t4500\n";
	cout<<"\t4 BOAT wire Headphone      \t\t\t2500\n";
		cout<<"-------------------------------------------------------------------------------------\n";
	cout<<"Enter Choice Which Headphone You Want\n";
	cin>>headphone;
	if(headphone==1)
	{
		cout<<"Your Choice is JBL Wireless Headphone*\n";
		cout<<"Enter Your Quantity \n";
		cin>>quantity;		h1=h1*quantity;
		cout<<"Total cost:"<<h1<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- Lotus \t\tcontact no-9876543210\n";
		cout<<"shop address-navlakha\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else
	if(headphone==2)
	{
		cout<<"*Your Choice is JBL wire Headphone\n";
		cout<<"Enter Your Quantity :";
		cin>>quantity;			h2=h2*quantity;
		cout<<"Total cost:"<<h2<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- lotus \t\tcontact no-9876543210\n";
		cout<<"shop address-c21 mall\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else
	if(headphone==3)
	{
		cout<<"*Your Choice is BOAT WIRELEASS HEADPHONE\n";
		cout<<"Enter Your Quantity \n";
		cin>>quantity;		h3=h3*quantity;
		cout<<"Total cost:"<<h3<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- lotus \t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else
	if(headphone==4)
	{
		cout<<"*Your Choice is BOAT wire Headphone\n";
		cout<<"Enter Your Quantity \n";
		cin>>quantity;	h4=h4*quantity;
		cout<<"Total cost:"<<h4<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- c21 mall \t\tcontact no-9876543210\n";
		cout<<"shop address-c21 mall \n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	cout<<"1 for Main Menu\n";
	cout<<"2 for Electronic Menu\n";
	cout<<"3 for EXIT\n";
	cin>>m;
	if(m==1)
	{
		xyz();
		ec();

	}
	else if(m==2)
	{
		ec();
	}
	else if (m==3)
    {
        exit();
    }
	else
	{
		cout<<"Invalid Input\n";
		xyz();
	}
	}
			//member for speaker
	if(e_choice==2)
{
	cout<<"*********SPEAKERS********\n";
		cout<<"\tName of Speaker   \t\t\tPrice \n";
	cout<<"\t1 JBL  \t\t\t\t15500\n";
	cout<<"\t2 BOAT \t\t\t\t15200\n";
	cout<<"\t3 Sony \t\t\t\t9750\n";
		cout<<"-------------------------------------------------------------------------------------\n";
	cout<<"Enter Choice Which Speaker You Want:";
	cin>>speaker;
		if(speaker==1)
	{
		cout<<"Your Choice is JBL*\n";
		cout<<"Enter Your Quantity \n";
		cin>>quantity;		sp1=sp1*quantity;
		cout<<"Total cost:"<<sp1<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- lotus \t\tcontact no-9876543210\n";
		cout<<"shop address-c21 mall\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else
		if(speaker==2)
	{
		cout<<"Your Choice is BOAT*\n";
		cout<<"Enter Your Quantity \n";
		cin>>quantity;		sp2=sp2*quantity;
		cout<<"Total cost:"<<sp2<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- lotus \t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else
		if(speaker==3)
	{
		cout<<"Your Choice is SONY*\n";
		cout<<"Enter Your Quantity :";
		cin>>quantity;
		sp3=sp3*quantity;
		cout<<"Total cost:"<<sp3<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- lotus \t\tcontact no-9876543210\n";
		cout<<"shop address- treasure iland\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else
		cout<<"1 for Main Menu\n";
	cout<<"2 for Electronic Menu\n";
	cout<<"3 for EXIT\n";
	cin>>m;
	if(m==1)
	{
		xyz();
		ec();
	}
	else if(m==2)
	{
		ec();
	}
	else if (m==3)
    {
        exit();
    }
	else
	{
		cout<<"Invalid Input\n";
		xyz();
	}
	}
		//member for trimmer
	if(e_choice==3)
{
	cout<<"***********TRIMMER************\n";
	cout<<"\tName of Trimmer\t";
	cout<<"\t\t\tPrice \n";
	cout<<"\t1 Philips   \t\t5500\n";
	cout<<"\t2 MI        \t\t3200\n";
	cout<<"\t3 Sony       \t\t750\n";
		cout<<"-------------------------------------------------------------------------------------\n";
	cout<<"Enter Choice Which Trimmer You Want:";
	cin>>trimmer;
		if(trimmer==1)
	{
		cout<<"Your Choice is PHILIPS*\n";
		cout<<"Enter Your Quantity \n";
		cin>>quantity;		tr1=tr1*quantity;
		cout<<"Total cost:"<<tr1<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- Lotus \t\tcontact no-9876543210\n";
		cout<<"shop address-A B road\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else
		if(trimmer==2)
	{
		cout<<"Your Choice is MI*\n";
		cout<<"Enter Your Quantity :";
		cin>>quantity;		tr2=tr2*quantity;
		cout<<"Total cost:"<<tr2<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- Lotus \t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else
		if(trimmer==3)
	{
		cout<<"Your Choice is SONY*\n";
		cout<<"Enter Your Quantity \n";
		cin>>quantity;		tr3=tr3*quantity;
		cout<<"Total cost:"<<tr3<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- c21 \t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else
		cout<<"\n1 for Main Menu\n";
	cout<<"2 for Electronic Menu\n";
	cout<<"3 for EXIT\n";
	cin>>m;
	if(m==1)
	{
		xyz();
		ec();
	}
	else if(m==2)
	{
		ec();
	}
	else if (m==3)
    {
        exit();
    }
	else
	{
		cout<<"Invalid Input\n";
		xyz();
	}
	}
	// member for charger
	if(e_choice==4)
{
	cout<<"*****CHARGER********\n";
		cout<<"\tName of Charger\t";
	cout<<"\t\tPrice \n";
	cout<<"\t1 MI		\t\t1500\n";
	cout<<"\t2 Realme	\t\t1200\n";
	cout<<"\t3 Sony		\t\t750\n";
		cout<<"-------------------------------------------------------------------------------------\n";
	cout<<"Enter Choice Which Trimmer You Want:";
	cin>>charger;
		if(charger==1)
	{
		cout<<"*Your Choice is PHILIPS**\n";
		cout<<"Enter Your Quantity \n";
		cin>>quantity;		tr1=tr1*quantity;
		cout<<"Total cost:"<<tr1<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- digital store \t\tcontact no-9876543210\n";
		cout<<"shop address-vijay nagar\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else
		if(trimmer==2)
	{
		cout<<"**Your Choice is MI*\n";
		cout<<"Enter Your Quantity :";
		cin>>quantity;		tr2=tr2*quantity;
		cout<<"Total cost:"<<tr2<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name-lotus \t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else
		if(trimmer==3)
	{
		cout<<"*Your Choice is SONY*\n";
		cout<<"Enter Your Quantity :";
		cin>>quantity;	tr3=tr3*quantity;
		cout<<"Total cost:"<<tr3<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- c21 mall \t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square \n";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else
    cout<<"1 for Main Menu\n";
	cout<<"2 for Electronic Menu\n";
	cout<<"3 for EXIT\n";
	cin>>m;
	if(m==1)
	{
		xyz();
		ec();
	}
	else if(m==2)
	{
		ec();
	}
	else if (m==3)
    {
        exit();
    }
	else
	{
		cout<<"Invalid Input\n";
		xyz();
	}
	}
		//moblie
		if(e_choice==5)
	{
	cout<<"*********MOBILE*******\n";
	cout<<"\tName of Mobile\t";
	cout<<"\t\t\t\t\tPrice \n";
	cout<<"\t1 Redmi note 10 pro (8gb/128gb) 	\t\t18500\n";
	cout<<"\t2 Samsung galaxy M52				\t32000\n";
	cout<<"\t3 Vivo v12 pro						17500\n";
		cout<<"\n-------------------------------------------------------------------------------------\n";
	cout<<"Enter Choice Which Mobile You Want:";
	cin>>mobile;
		if(mobile==1)
	{
		cout<<"*Your Choice is Redmi**\n";
		cout<<"Enter Your Quantity :";
		cin>>quantity;		mo1=mo1*quantity;
		cout<<"Total cost:"<<mo1<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- Relaince digital \t\tcontact no-9876543210\n";
		cout<<"shop address-AB road rau\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else
		if(mobile==2)
	{
		cout<<"*Your Choice is Samsung**\n";
		cout<<"Enter Your Quantity :";
		cin>>quantity;		mo2=mo2*quantity;
		cout<<"Total cost:"<<mo2<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- relaince digital \t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else
		if(mobile==3)
	{
		cout<<"**Your Choice is Vivo*\n";
		cout<<"Enter Your Quantity \n";
		cin>>quantity;		mo3=mo3*quantity;
		cout<<"Total cost:"<<mo3<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- c21 \t\tcontact no-9876543210\n";
		cout<<"shop address-c21 mall\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else
	cout<<"\n1 for Main Menu\n";
	cout<<"2 for Electronic Menu\n";
	cout<<"3 for EXIT\n";
	cin>>m;
	if(m==1)
	{
		xyz();
		ec();
			}
	else if(m==2)
	{
		ec();
	}
	else if (m==3)
    {
        exit();
    }
	else
	{
		cout<<"Invalid Input\n";
		xyz();
	}
	}
	//power bank
	if(e_choice==6)
	{
	cout<<"*********Power Bank*********\n";
	cout<<"\tName of Power Bank\t";
	cout<<"\t\tPrice \n";
	cout<<"\t1 MI Bank		\t\t4500\n";
	cout<<"\t2 Samsung Bank  \t\t\t2000\n";
		cout<<"-------------------------------------------------------------------------------------\n";
	cout<<"Enter Choice Which Mobile You Want:";
	cin>>pbank;
		if(pbank==1)
	{
		cout<<"*Your Choice is MI Bank*\n";
		cout<<"Enter Your Quantity \n";
		cin>>quantity;	pb1=pb1*quantity;
		cout<<"Total cost:"<<pb1<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- Lotus \t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else
		if(pbank==2)
	{
		cout<<"*Your Choice is Samsung Bank 2*\n";
		cout<<"Enter Your Quantity \n";
		cin>>quantity;		pb2=pb2*quantity;
		cout<<"Total cost:"<<pb2<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- c21 \t\tcontact no-9876543210\n";
		cout<<"shop address-c21 mall\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else
	cout<<"1 for Main Menu\n";
	cout<<"2 for Electronic Menu\n";
	cout<<"3 for EXIT\n";
	cin>>m;
	if(m==1)
	{
		xyz();
		ec();

	}
	else if(m==2)
	{
		ec();
	}
	else if (m==3)
    {
        exit();
    }
	else
	{
		cout<<"Invalid Input\n";
		xyz();
	}
	}
		// mouse kyboard
	if(e_choice==7)
	{
	cout<<"*MOUSE KEYBOARD*\n";
	cout<<"\tName of MOUSE\t";
	cout<<"\t\t\tPrice \n";
	cout<<"\t1 DELL MOUSE   		 \t\t500\n";
	cout<<"\t2 DELL KEY BOARD 		 \t2000\n";
	cout<<"\t3 SANDISK PENDRIVE		\t500\n";
		cout<<"-------------------------------------------------------------------------------------\n";
	cout<<"Enter Choice Your choice:";
	cin>>mouse;
		if(mouse==1)
	{
		cout<<"*Your Choice is MOUSE*\n";
		cout<<"Enter Your Quantity \n";
		cin>>quantity;		mu1=mu1*quantity;
		cout<<"Total cost:"<<mu1<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- silver mall \t\tcontact no-9876543210\n";
		cout<<"shop address-regal\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else
		if(mouse==2)
	{
		cout<<"**Your Choice is Keyboard**\n";
		cout<<"Enter Your Quantity \n";
		cin>>quantity;		mu2=mu2*quantity;
		cout<<"Total cost:"<<mu2<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- silver mall \t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square \n";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else
		if(mouse==3)
	{
		cout<<"**Your Choice is Pendrive*\n";
		cout<<"Enter Your Quantity \n";
		cin>>quantity;		mu3=mu3*quantity;
		cout<<"Total cost:"<<mu3<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"-\n-----------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- c21e \t\tcontact no-9876543210\n";
		cout<<"shop address-c21 mall\n";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else
	cout<<"1 for Main Menu\n";
	cout<<"2 for Electronic Menu\n";
	cout<<"3 for EXIT\n";
	cin>>m;
	if(m==1)
	{
		xyz();
		ec();
	}
	else if(m==2)
	{
		ec();
	}
	else if (m==3)
    {
        exit();
    }
	else
	{
		cout<<"Invalid Input\n";
		xyz();
	}
	}
		//laptop
		if(e_choice==8)
{
	cout<<"*********LAPTOP*********\n";
	cout<<"\tName of LAPTOP\t";
	cout<<"\t\tPrice \n";
	cout<<"\t1 Macbook Air";
	cout<<"\t\t\t60000\n";
	cout<<"\t2 DELL inspiron";
	cout<<"\t\t\t55000\n";
	cout<<"\t3 HP notebook";
	cout<<"\t\t\t40000\n";
		cout<<"-------------------------------------------------------------------------------------\n";
	cout<<"Enter Choice Which Laptop You Want:";
	cin>>laptop;
		if(laptop==1)
	{
		cout<<"**Your Choice is Macbook Air*\n";
		cout<<"Enter Your Quantity \n";
		cin>>quantity;		lp1=lp1*quantity;
		cout<<"Total cost:"<<lp1<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- relaince digital   \t\tcontact no-9876543210\n";
		cout<<"shop address-near c21 mall\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else
		if(laptop==2)
	{
		cout<<"*Your Choice is DELL*\n";
		cout<<"Enter Your Quantity \n";
		cin>>quantity;		lp2=lp2*quantity;
		cout<<"Total cost:"<<lp2<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- Lotus \t\tcontact no-9876543210\n";
		cout<<"shop address-vijay nagar\n";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else
		if(laptop==3)
	{
		cout<<"Your Choice is HP*\n";
		cout<<"Enter Your Quantity \n";
		cin>>quantity;		lp3=lp3*quantity;
		cout<<"Total cost:"<<lp3<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- lotus \t\tcontact no-9876543210\n";
		cout<<"shop address-vijay nagar\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else
	cout<<"1 for Main Menu\n";
	cout<<"2 for Electronic Menu\n";
	cout<<"3 for EXIT\n";
	cin>>m;
	if(m==1)
	{
		xyz();
		ec();
	}
	else if(m==2)
	{
		ec();
	}
	else if (m==3)
    {
        exit();
    }
	else
	{
		cout<<"Invalid Input\n";
		xyz();
	}
	}
}}
// vegitable
class Fruitsvegetables:public Electronic
{
	int fv_choice;
	public:
	void list();
};
void Fruitsvegetables::list()
{
	switch(choice)
	{
        case 3:
			cout<<"******* You have selected Fruits and Vegetables********\n";

			cout<<"1 Fruits\n";
			cout<<"2 Vegetables\n";
			float f1=80,f2=40,f3=45,f4=120,f5=50,f6=35,f7=290;
			float v1=40,v2=40,v3=20,v4=45,v5=30,v6=60,v7=42;
			int Fruit,vegetable;
			cout<<"Enter Your Choice:";
			cin>>fv_choice;
			if(fv_choice==1)
			{
				cout<<"*FRUITS:-\n";
				cout<<"\tName\t";
	cout<<"\t\t\t\tPrice(Rs.)\n";
	cout<<"\t1 Apple		\t\t\t80RS/Kg\n";
	cout<<"\t2 Banana		\t\t40Rs/Kg\n";
	cout<<"\t3 Orange		\t\t45Rs/Kg\n";
	cout<<"\t4 Mango		\t\t\t120Rs/Kg\n";
	cout<<"\t5 Pears		\t\t\t50Rs/Kg\n";
	cout<<"\t6 Papaya		\t\t35Rs/Kg\n";
	cout<<"\t7 Pomegranate	\t\t\t290Rs/Kg\n";
	cout<<"Enter Your Choice:";
	cin>>Fruit;
	if(Fruit==1)
	{
		cout<<"Your Choice is Apple*\n";
		cout<<"Enter Your Quantity: ";
		cin>>quantity;		f1=f1*quantity;
		cout<<"Total cost:"<<f1<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- fruit shop \t\tcontact no-9876543210\n";
		cout<<"shop address-choithram square \n";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else
	if(Fruit==2)
	{
		cout<<"*Your Choice is Banana\n";
		cout<<"Enter Your Quantity:";
		cin>>quantity;		f2=f2*quantity;
		cout<<"Total cost:"<<f2<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- fruit store \t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else
	if(Fruit==3)
	{
		cout<<"*Your Choice is Orange\n";
		cout<<"Enter Your Quantity: ";
		cin>>quantity;		f3=f3*quantity;
		cout<<"Total cost:"<<f3<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- fruit store \t\tcontact no-9876543210\n";
		cout<<"shop address-Big basket\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else
	if(Fruit==4)
	{
		cout<<"*Your Choice is Mango\n";
		cout<<"Enter Your Quantity: ";
		cin>>quantity;		f4=f4*quantity;
		cout<<"Total cost:"<<f4<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- fruit store \t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else
	if(Fruit==5)
	{
		cout<<"*Your Choice is Pears\n";
		cout<<"Enter Your Quantity: ";
		cin>>quantity;		f5=f5*quantity;
		cout<<"Total cost:"<<f5<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- fruit store \t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else
	if(Fruit==6)
	{
		cout<<"*Your Choice is Papaya\n";
		cout<<"Enter Your Quantity: ";
		cin>>quantity;		f6=f6*quantity;
		cout<<"Total cost:"<<f6<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- fruit store \t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square \n";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else
	if(Fruit==7)
	{
		cout<<"*Your Choice is Pomegranate\n";
		cout<<"Enter Your Quantity: ";
		cin>>quantity;		f7=f7*quantity;
		cout<<"Total cost:"<<f7<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- All in one store \t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
    cout<<"1 for Main Menu\n";
	cout<<"2 for Fruits & Vegetables Menu\n";
	cout<<"3 for EXIT\n";
	cin>>m;
	if(m==1)
	{
		xyz();
		list();
	}
	else if(m==2)
	{
		list();
	}
	else if (m==3)
    {
        exit();
    }
	else
	{
		cout<<"Invalid Input\n";
		xyz();
	}
	}
	if(fv_choice==2)
    {
	cout<<"VEGETABLES\n";
    cout<<"\tName of Vegetables\t";
	cout<<"\t\t\tPrice \n";
	cout<<"\t1 Potato			\t\t40Rs/Kg\n";
	cout<<"\t2 Onion			\t\t\t40Rs/Kg\n";
	cout<<"\t3 Cabbage			\t\t20Rs/pc\n";
	cout<<"\t4 Ladyfinger		\t\t\t45Rs/Kg\n";
	cout<<"\t5 Palak			\t\t\t30Rs/Kg\n";
	cout<<"\t6 Tomato			\t\t60Rs/Kg\n";
	cout<<"\t7 Loki				\t\t42Rs/Kg\n";
		cout<<"-------------------------------------------------------------------------------------\n";
	cout<<"Enter Your Choice:";
	cin>>vegetable;
	if(vegetable==1)
	{
		cout<<"Your Choice is Potato*\n";
		cout<<"Enter Your Quantity: \n";
		cin>>quantity;		v1=v1*quantity;
		cout<<"Total cost:"<<v1<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- big basket \t\tcontact no-9876543210\n";
		cout<<"shop address-sakti nagar\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else
		if(vegetable==2)
	{
		cout<<"Your Choice is Onion*\n";
		cout<<"Enter Your Quantity: ";
		cin>>quantity;		v2=v2*quantity;
		cout<<"Total cost:"<<v2<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- big basket \t\tcontact no-9876543210\n";
		cout<<"shop address-sakti nagar\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else
		if(vegetable==3)
	{
		cout<<"Your Choice is Cabbage*\n";
		cout<<"Enter Your Quantity: ";
		cin>>quantity;		v3=v3*quantity;
		cout<<"Total cost:"<<v3<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- big basket \t\tcontact no-9876543210\n";
		cout<<"shop address-sakti nagar\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else
		if(vegetable==4)
	{
		cout<<"Your Choice is Ladyfinger*\n";
		cout<<"Enter Your Quantity: ";
		cin>>quantity;		v4=v4*quantity;
		cout<<"Total cost:"<<v4<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- big basket \t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else
		if(vegetable==5)
	{
		cout<<"Your Choice is Palak*\n";
		cout<<"Enter Your Quantity: ";
		cin>>quantity;		v5=v5*quantity;
		cout<<"Total cost:"<<v5<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- big basket \t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square \n";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else
		if(vegetable==6)
	{
		cout<<"Your Choice is Tomato*\n";
		cout<<"Enter Your Quantity: ";
		cin>>quantity;		v6=v6*quantity;
		cout<<"Total cost:"<<v6<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- big basket \t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square \n";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else
		if(vegetable==7)
	{
		cout<<"Your Choice is Loki*\n";
		cout<<"Enter Your Quantity: ";
		cin>>quantity;		v7=v7*quantity;
		cout<<"Total cost:"<<v7<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- Big basket \t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square \n";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	    cout<<"1 for Main Menu\n";
	cout<<"2 for Fruits & Vegetables Menu\n";
	cout<<"3 for EXIT\n";
	cin>>m;
	if(m==1)
	{
		xyz();
		list();
	}
	else if(m==2)
	{
		list();
	}
	else if (m==3)
    {
        exit();
    }
	else
	{
		cout<<"Invalid Input\n";
		xyz();
	}}

}}
//cloth
class Clothes:public Fruitsvegetables
{
    int c_choice;
	public:
	void cl();
};
void Clothes::cl()
{
	switch(choice)
	{
		case 4:
			cout<<"******** You have selected Clothes************\n";
			cout<<"1 Men's Wear\n";
			cout<<"2 Women's Wear\n";
			cout<<"3 Kid's Wear\n";
    float m1=3000,m2=3200,m3=4500,m4=5000,m5=6000,m6=2000,m7=800;
	float w1=1800,w2=799,w3=999,w4=1200,w5=599,w6=599,w7=700;
	float k1=800,k2=1000,k3=999,k4=900,k5=447,k6=599,k7=700;
	int men,women,kids;
		cout<<"-------------------------------------------------------------------------------------\n";
	cout<<"Enter Your Choice:";
			cin>>c_choice;
			//member for headphone
			if(c_choice==1)
			{
    cout<<"*Men's Wear:-\n";
    cout<<"\tName\t";		cout<<"\t\t\t\tPrice(Rs.)\n";
	cout<<"\t1 Shirt \t";	cout<<"\t\t\t3000\n";
	cout<<"\t2 T-Shirt";	cout<<"\t\t\t\t3200\n";
	cout<<"\t3 Jeans\t";	cout<<"\t\t\t\t4500\n";
	cout<<"\t4 Trouser\t";	cout<<"\t\t\t5000\n";
	cout<<"\t5 Suit\t";	    cout<<"\t\t\t\t6000\n";
	cout<<"\t6 Kurta-Pajma\t";	cout<<"\t\t\t2000\n";
	cout<<"\t7 Footwear\t";	cout<<"\t\t\t800\n";
		cout<<"-------------------------------------------------------------------------------------\n";
	cout<<"Enter Choice Which Clothes You Want:";
	cin>>men;
	if(men==1)
	{
		cout<<"Your Choice is Shirt*\n";
		cout<<"Enter Your Quantity: ";
		cin>>quantity;		m1=m1*quantity;
		cout<<"Total cost:"<<m1<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- Appolo tower \t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else if (men==2)
    {
        cout<<"Your Choice is T-Shirt*\n";
		cout<<"Enter Your Quantity: ";
		cin>>quantity;		m2=m2*quantity;
		cout<<"Total cost:"<<m2<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- Appolo tower \t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square \n";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
    }
    else if (men==3)
    {
        cout<<"Your Choice is Jeans*\n";
		cout<<"Enter Your Quantity: ";
		cin>>quantity;		m3=m3*quantity;
		cout<<"Total cost:"<<m3<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- Appolo tower \t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
    }
    else if (men==4)
    {
        cout<<"Your Choice is Trouser*\n";
		cout<<"Enter Your Quantity: ";
		cin>>quantity;		m4=m4*quantity;
		cout<<"Total cost:"<<m4<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- Appolo tower \t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
    }
    else if (men==5)
    {
        cout<<"Your Choice is Suit*\n";
		cout<<"Enter Your Quantity: ";
		cin>>quantity;		m5=m5*quantity;
		cout<<"Total cost:"<<m5<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- Appolo tower \t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
    }
    else if (men==6)
    {
        cout<<"Your Choice is Kurta-Pajma*\n";
		cout<<"Enter Your Quantity: ";
		cin>>quantity;		m6=m6*quantity;
		cout<<"Total cost:"<<m6<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- Appolo tower \t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
    }
    else if (men==7)
    {
        cout<<"Your Choice is Footwear*\n";
		cout<<"Enter Your Quantity: ";
		cin>>quantity;		m7=m7*quantity;
		cout<<"Total cost:"<<m7<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- Appolo tower \t\tcontact no-9876543210\n";
		cout<<"shop address-LIG squaren\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
    }
    cout<<"1 for Main Menu\n";
	cout<<"2 for Clothes\n";
	cout<<"3 for EXIT\n";
	cin>>m;
	if(m==1)
	{
		xyz();
		cl();
	}
	else if(m==2)
	{
		cl();
	}
	else if (m==3)
    {
        exit();
    }
		else
	{
		cout<<"Invalid Input\n";
		xyz();
    }
    }
    if(c_choice==2)
{
	cout<<"Women's Wear\n";
    cout<<"\tName";		    cout<<"\t\t\t\tPrice \n";
	cout<<"\t1 Sarees";		cout<<"\t\t\t1800Rs\n";
	cout<<"\t2 Kurtis";		cout<<"\t\t\t799Rs\n";
	cout<<"\t3 Tops";		cout<<"\t\t\t\t999Rs\n";
	cout<<"\t4 Jeans";		cout<<"\t\t\t\t1200Rs\n";
	cout<<"\t5 Handbags";	cout<<"\t\t\t599Rs\n";
	cout<<"\t6 Flats";		cout<<"\t\t\t\t599Rs\n";
	cout<<"\t7 Watches";	cout<<"\t\t\t700Rs\n";
		cout<<"-------------------------------------------------------------------------------------\n";
	cout<<"Enter Your Choice: ";
	cin>>women;
	if(women==1)
	{
		cout<<"Your Choice is Sarees*\n";
		cout<<"Enter Your Quantity: ";
		cin>>quantity;		w1=w1*quantity;
		cout<<"Total cost:"<<w1<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- GCM \t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square \n";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else if (women==2)
    {
        cout<<"Your Choice is Kurtis*\n";
		cout<<"Enter Your Quantity: ";
		cin>>quantity;		w2=w2*quantity;
		cout<<"Total cost:"<<w2<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- GCM \t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
    }
    else if (women==3)
    {
        cout<<"Your Choice is Tops*\n";
		cout<<"Enter Your Quantity: ";
		cin>>quantity;		w3=w3*quantity;
		cout<<"Total cost:"<<w3<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- GCM \t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
    }
    else if (women==4)
    {
        cout<<"Your Choice is Jeans*\n";
		cout<<"Enter Your Quantity: ";
		cin>>quantity;		w4=w4*quantity;
		cout<<"Total cost:"<<w4<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- GCM \t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
    }
    else if (women==5)
    {
        cout<<"Your Choice is Handbags*\n";
		cout<<"Enter Your Quantity: ";
		cin>>quantity;		w5=w5*quantity;
		cout<<"Total cost:"<<w5<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- GCM \t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
    }
    else if (women==6)
    {
        cout<<"Your Choice is Flats*\n";
		cout<<"Enter Your Quantity: ";
		cin>>quantity;		w6=w6*quantity;
		cout<<"Total cost:"<<w6<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- GCM\t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square \n";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
    }
    else if (women==7)
    {
        cout<<"Your Choice is Watches*\n";
		cout<<"Enter Your Quantity: ";
		cin>>quantity;		w7=w7*quantity;
		cout<<"Total cost:"<<w7<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- GCM \t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
    }
    cout<<"1 for Main Menu\n";
	cout<<"2 for Clothes\n";
	cout<<"3 for EXIT\n";
	cin>>m;
	if(m==1)
	{
		xyz();
		cl();
	}
	else if(m==2)
	{
		cl();
	}
	else if (m==3)
    {
        exit();
    }
		else
	{
		cout<<"Invalid Input\n";
		xyz();
    }
    }
    if(c_choice==3)
{
	cout<<"Kid's Wear\n";
    cout<<"\tName";			    cout<<"\t\t\t\tPrice\n";
	cout<<"\t1 T-shirts";		cout<<"\t\t\t800Rs\n";
	cout<<"\t2 Dresses";		cout<<"\t\t\t1000Rs\n";
	cout<<"\t3 Jeans";			cout<<"\t\t\t\t999Rs\n";
	cout<<"\t4 Trackpants";		cout<<"\t\t\t900Rs\n";
	cout<<"\t5 Sleepwear";		cout<<"\t\t\t447Rs\n";
	cout<<"\t6 Footwear";		cout<<"\t\t\t599Rs\n";
	cout<<"\t7 watches";		cout<<"\t\t\t700Rs\n";
		cout<<"-------------------------------------------------------------------------------------\n";
	cout<<"Enter Your Choice: ";
	cin>>kids;
	if(kids==1)
	{
		cout<<"Your Choice is T-shirts*\n";
		cout<<"Enter Your Quantity: ";
		cin>>quantity;		k1=k1*quantity;
		cout<<"Total cost:"<<k1<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- GCM\t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}
	else if (kids==2)
    {
        cout<<"Your Choice is Dresses*\n";
		cout<<"Enter Your Quantity: ";
		cin>>quantity;		k2=k2*quantity;
		cout<<"Total cost:"<<k2<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- GCM \t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
    }
    else if (kids==3)
    {
        cout<<"Your Choice is Jeans*\n";
		cout<<"Enter Your Quantity: ";
		cin>>quantity;		k3=k3*quantity;
		cout<<"Total cost:"<<k3<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- GCM \t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
    }
    else if (kids==4)
    {
        cout<<"Your Choice is Trackpants*\n";
		cout<<"Enter Your Quantity: ";
		cin>>quantity;		k4=k4*quantity;
		cout<<"Total cost:"<<k4<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- GCM \t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
    }
    else if (kids==5)
    {
        cout<<"Your Choice is Sleepwear*\n";
		cout<<"Enter Your Quantity: ";
		cin>>quantity;		k5=k5*quantity;
		cout<<"Total cost:"<<k5<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- GCM \t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square \n";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
    }
    else if (kids==6)
    {
        cout<<"Your Choice is Footwear*\n";
		cout<<"Enter Your Quantity: ";
		cin>>quantity;		k6=k6*quantity;
		cout<<"Total cost:"<<k6<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- GCM\t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square \n";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
    }
    else if (kids==7)
    {
        cout<<"Your Choice is Watches*\n";
		cout<<"Enter Your Quantity: ";
		cin>>quantity;		k7=k7*quantity;
		cout<<"Total cost:"<<k7<<"Rs"<<endl;
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your Contact No.:";
		cin>>phne;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\nyour order is placed sucessfully.....\n";
		cout<<"Shop name- GCM \t\tcontact no-9876543210\n";
		cout<<"shop address-LIG square\n ";
		cout<<"\n"<<name<<":Your order is delivered by 9:00 PM\n";
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
    }
    cout<<"1 for Main Menu\n";
	cout<<"2 for Clothes\n";
	cout<<"3 for EXIT\n";
	cin>>m;
	if(m==1)
	{
		xyz();
		cl();
	}
	else if(m==2)
	{
		cl();
	}
	else if (m==3)
    {
        exit();
    }
		else
	{
		cout<<"Invalid Input\n";
		xyz();
    }}}
}


void SOT::pqr()
{
    while (true)
    {
    	cout << "----\n";
        cout << "MENU" << endl;
        cout << "----\n\n\n";
		cout << "1. Login" << endl;
        cout << "2. Registr" << endl;
        cout << "3. Forgot User name & Password" << endl;
        cout << "4. Exit" << endl;
        cout << "\n\n---------------\n";
        cout << "Enter Your Choice (1/4): ";
        if (cin >> choice_1)
        {
        	cout << "---------------\n";
            break;
        }
        else
        {
        	cout << "---------------\n";
            cin.clear();
            cin.ignore(50000, '\n');
            system("cls");
            pqr();
        }
    }

    if (choice_1 == 1)
    {
        int count;
        string user, pass, u, p;
        system("cls");
        cout << "Please Enter the following details:-" << endl;
        cout << "Username: " << endl;
        cin >> user;
        cout << "Password: " << endl;
        cin >> pass;

        ifstream in("eshumali.txt");
        while (in >> u >> p)
        {
            if (u == user && p == pass)
            {
                count = 1;
                system("cls");
            }
        }
        in.close();
        if (count == 1)
        {
            cout << "Login Successful" << user << endl;
            xyz();
            cin.get();
            xyz();
        }
        else
        {
            cout << "\nLogin Failed!!!!!\n Please check Your username & password" << endl;
            pqr();
        }
    }

    else if (choice_1 == 2)
    {
        string reguser, regpass, ru, rp;
        system("cls");
        cout << "Enter the Username" << endl;
        cin >> reguser;
        cout << "Enter the Password" << endl;
        cin >> regpass;
        cout<<"Enter your address:";

        ofstream reg("eshumali.txt", ios::app);
        reg << reguser << " " << regpass << endl;
        system("cls");
        cout << "\nRegistration Successful. " << endl;
        pqr();
    }

    else if (choice_1 == 3)
    {
        int ch;
        system("cls");
        cout << "Forgotten? we're here to help." << endl;
        cout << "1 Search Your Id By Username" << endl;
        cout << "2 Main Menu" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            int count = 0;
            string searchu, su, sp;
            cout << "\n Enter your Username" << endl;
            cin >> searchu;

            ifstream search("eshumali.txt", ios::in);
            while (search >> su >> sp)
            {
                count = 1;
            }
            search.close();
            if (count == 1)
            {
                cout << "\n Account Found" << endl;
                cout << "\n Your Password is:" << endl;
                cin.get();
               pqr();
            }
            else if (count != 1)
            {

                //system("cls");
                cout << "\n Sorry, Your UserId is not found in our data" << endl;
                cin.get();
                pqr();
            }
        }
    }

    else if (choice_1 == 4)
    {
        system("cls");
        cout<<"THANKS FOR VISITING ..........";
		exit(0);

    }

    else
    {
        system("cls");
        cout << "its not 1 or 2 or 3 or 4\n\n";
        pqr();
    }
}
int main()
{
	SOT obj;
	obj.pqr();
	obj.xyz();
	obj.abc();

	Clothes cobj;
	cobj.xyz();
	cobj.abc();
	cobj.ec();
	cobj.list();
	cobj.cl();

	return 0;
}
