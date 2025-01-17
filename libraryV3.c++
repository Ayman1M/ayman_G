#include <iostream>
#include <string_view>
#include <string>
#include <array>
#include <vector>
using namespace std;

enum enPubication { Book=1 ,Magazine=2  };
enum enCategory { History=1,Science=2 ,Math=3};
enum enColor { Red=1, Green=2, Blue=3 };
enum enDelivary { Yes=1, No=2 };
enum enDelivary_Way {Car=1, Bicycle=2,Motocycle=3};
enum ePaymentWay {Cash=1, CreditCard=2};


//prices
float books=562.37,magazines=123.89;

float Car_delivary=15.9,Bicycle_delivary=3.7,Motocycle_delivary=10;


struct stClient
{
    string name;
    string address;
    string email;
    long long phone;
};


struct stOrder
{
    short publication;
    short category ;
    short color;
    short delivary;
  
};

struct stService
{
  short delivary;
    short delivaryWay;  
  
    
};
struct stPayment
{
    short paymentWay;
    double price;
};

struct stProccesseng
{
    stOrder order;
    stService service;
};


enPubication publication;
enCategory category;
enColor color;
enDelivary delivary;
enDelivary_Way delivaryWay;
ePaymentWay paymentWay;

stClient client_info;
stOrder order_info;
stService service_info;
stPayment payment_info;

string informations[6];


void client()
    {

cout<<"\nEnter your name: ";
cout<<"\n______________________\n";
cin.ignore(3,'\n');

getline( cin, client_info.name);

cout<<"Enter your address: ";
cout<<"\n______________________\n";
cin.ignore(3,'\n');
getline( cin, client_info.address);

cout<<"Enter your email: ";
cout<<"\n______________________\n";
cin.ignore(1,'\n');
getline( cin, client_info.email);

cout<<"Enter your phone: ";
cout<<"\n______________________\n";
cin>>client_info.phone;
    }



void order()
    {
cout<<"\nEnter the publication type: ";
cout<<"\n1-Book\n2.magazine";
cout<<"\n______________________\n";
cin>>order_info.publication;


switch(order_info.publication)
{
    case 1:  order_info.publication=Book;
    break;

    case 2:  order_info.publication=Magazine;
    break;

    default: cout<<"Invalid choice";exit(0);
    break;
}


cout<<"\nEnter the category of  publication: ";
cout<<"\n1-History\n2-Science\n3-math";
cout<<"\n______________________\n";
cin>>order_info.category;

switch(order_info.category)
{
    case 1:  order_info.category=History;
    break;

    case 2:  order_info.category=Science;
    break;

    case 3:  order_info.category=Math;
    break;

    default: cout<<"Invalid choice";exit(0);
    break;

    }


cout<<"\nEnter the color you want: ";
cout<<"\n1-Red\n2-Green\n3-Blue";
cout<<"\n______________________\n";
cin>>order_info.color;

    switch(order_info.color)
    {
        case 1:  order_info.color=Red;
        break;

        case 2:  order_info.color=Green;
        break;

        case 3:  order_info.color=Blue;
        break;

        default: cout<<"Invalid choice";exit(0);
        break;

    }   
    }

 

 /*the next  Procedure will be calling if user choose use delivary service.*/
 void service_delivary_ways()
    {


cout<<"\nChoose the delivary way: ";
cout<<"\n1-Car\n2-Bicycle\n3-Motocycle";
cout<<"\n______________________\n";
cin>>service_info.delivaryWay;

switch(service_info.delivaryWay)
    {
      case 1:service_info.delivaryWay=Car;
      break;
       
      case 2:service_info.delivaryWay=Bicycle;
      break;

      case 3:service_info.delivaryWay=Motocycle;
      break;
      
      default: cout<<"Invalid choice";exit(0);
      break;

    }

    }

/*the next  Procedure will be calling if user choose use delivary service.*/
void Analisis_service_delivary_ways()
{
switch(service_info.delivaryWay)
{
case Car:informations[5]="Car";
break;
case Bicycle:informations[5]="Bicycle";
break;
default:informations[5]="Motocycle";
break;
}
}

void service_delivary()
    {

cout<<"\nDo you want delivary: ";
cout<<"\n1-Yes\n2-No";
cout<<"\n______________________\n";
cin>>service_info.delivary;

switch (service_info.delivary)
{
case 1:service_info.delivary=Yes;

service_delivary_ways();
Analisis_service_delivary_ways();
    break;

default:service_info.delivary=No;
    break;
}


    }


void Payment()
    {
cout<<"\nChoose the payment way: ";
cout<<"\n1-Cash\n2-CreditCard";
cout<<"\n______________________\n";
cin>>payment_info.paymentWay;

switch(payment_info.paymentWay)
{
case 1:payment_info.paymentWay=Cash;
break;

case 2:payment_info.paymentWay=CreditCard;
break;

default: cout<<"Invalid choice";exit(0);
break;



}
    }


void Analysis_data()
{
   

switch (order_info.publication)
{
case Book:informations[0]="Book";
break;
case Magazine:informations[0]="Magazine";
break;
}
switch(order_info.category)
{
 case History:informations[1]="History";
 break;
case Science:informations[1]="Science";
break;
case Math:informations[1]="Math";
break;
}
switch(order_info.color)
{
case Red:informations[2]="Red";
break;
case Green:informations[2]="Grean";
break;
case Blue:informations[2]="Blue";
}
switch (service_info.delivary)
{
case Yes:informations[3]="Yes";
    
    break;

default:informations[3]="No";
    break;
}
switch (payment_info.paymentWay)
{
case Cash:informations[4]="Cash";
    
    break;

default:informations[4]="Cridit card";
    break;
}

}


void printing_prosses()
{
    cout<<"\nTotal bill: ";

cout<<"\nName: "<<client_info.name;
cout<<"\nPhone: "<<client_info.phone;
cout<<"\nEmail: "<<client_info.email;
cout<<"\nAddress: "<<client_info.address;
cout<<"\npublication: "<<informations[0];
cout<<"\ncategory: "<<informations[1];
cout<<"\ncolour: "<<informations[2];

cout<<"\ndelivary: "<<informations[3];
if(informations[3]=="Yes"){cout<<"\nDelivary Way"<<informations[5];}
if(informations[5]=="Car"){cout<<"\nDelivary costing: "<<Car_delivary;}
if(informations[5]=="Bicycle"){cout<<"\nDelivary costing: "<<Bicycle_delivary;}
if(informations[5]=="Motocycle"){cout<<"\nDelivary costing: "<<Motocycle_delivary;}


cout<<"\nPay way: "<<informations[4];








}


int main()
{ 
   cout<<"\n==========================================================";
   cout<<"\n**********************************************************";
   cout<<"\n__________________________________________________________";
   cout<<"\n**************Welcome To Your Lybrary*********************";
   cout<<"\n==========================================================";
   cout<<"\n**********************************************************";
   cout<<"\n__________________________________________________________";
    

     
     order();

     client();

     service_delivary();

     Payment();

     Analysis_data();

     printing_prosses();

  cout<<"\n==========================================================";
  cout<<"\n**********************************************************";
  cout<<"\n__________________________________________________________";
     
}