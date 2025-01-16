#include <iostream>
using namespace std;
 
enum treatment {buy=1,sell=2,rental=3};
enum publication {book=1,magazine=2,Encyclopedia=3};
enum category {novel=1,story=2,poem=3,history=4,science=5,math=6,sport=7};
enum color {red=1,green=2,blue=3,black=4,white=5};
enum stutes {original=1,copy_status=2};
enum dilivery {yes=1,no=2};
enum dilivery_way {post=1,car=2,plane=3,Bicycle=4,motorcycle=5};
enum payment_way {cash=1,credit_card=2};

const double price_book_original = 122.2466;
const double price_magazine_original= 50.1274183;
const double price_Encyclopedia_original= 500.1248413;
const double price_book_copy = 500.12464843;
const double price_magazine_copy= 20.12184813;
const double price_Encyclopedia_copy= 2000.127415253;

const double weight_book = 200;
const double weight_magazine = 30;
const double weight_Encyclopedia = 800.825415;
const double size_book = 130.5952;
const double size_magazine = 180.8989;
const double size_Encyclopedia = 150.36224;

const double price_post = 10.125415;
const double price_car= 20.125415;
const double price_plane= 30.125415;
const double price_Bicycle= 5.125415;
const double price_motorcycle= 15.125415;
const double price_cash= 0.125415;
const double price_credit_card= 5.125415;
//for selling eny thing
const double price_sell_original=74;
const double price_sell_copy= 6;



struct costomer {

 string name;

 string address;

int phone;
};
struct Order {  

 short publication;

 short category;
};
struct properties {

 short color;
 
 short status; //original or copy

};
struct Treatment {
    
 short treatment;

};
struct servece {
    short delivery;
     short delivery_way;
};
struct payment {

 short way;
};

costomer information;

void costomers(){
   
 cout <<"\nEnter your name: ";
 cin >> information.name;

 cout <<"\nEnter your phone: ";
 cin >> information.phone;

 cout <<"\nEnter your address: ";
 cin >> information.address;
}

Treatment Your_treatment;

void treatment(){
 cout<<"\nEnter your choice's number";
 cout <<"\nWhat's your Treatment: \n1.Buy \n2.Sell\n3.Rental";
 cout<<"______________________________"; 
 cin >> Your_treatment.treatment;

 if (Your_treatment.treatment ==1){Your_treatment.treatment=treatment::buy;} 
 if (Your_treatment.treatment ==2){Your_treatment.treatment=treatment::sell;}  
 if (Your_treatment.treatment ==3){Your_treatment.treatment=treatment::rental;}
if (Your_treatment.treatment !=1 && Your_treatment.treatment !=2 && Your_treatment.treatment !=3){cout <<"\nerror in treatment";  treatment();}

}

Order Your_order;

void order(){ 
    
 cout<<"\nEnter your choice's number";
 cout <<"\nEnter your order \n1.Book\n2.Magazine\n3.Encyclopedia ";

  cout<<"______________________________";

 cin >> Your_order.publication;
 cout <<"\nEnter the category: \n1.Novel\n2.Story\n3.Poem\n4.Science\n5.Math\n6.Sport\n7.Science\nhistory ";

 cout<<"______________________________";

 cin >> Your_order.category;

 if (Your_order.publication ==1){Your_order.publication=publication::book;} 
 else if (Your_order.publication ==2){Your_order.publication=publication::magazine;}  
 else if (Your_order.publication ==3){Your_order.publication=publication::Encyclopedia;}
 if (Your_order.publication != 1&& Your_order.publication !=2 && Your_order.publication !=3){cout <<"\nerror in publication";  order();}
}

properties Your_order_properties;

void propertiesOrder(){


 cout<<"\neEnter your choice's number";
 cout <<"\nEnter your color \n1.Red\n2.Green\n3.Blue\n4.Black\n5.White ";
 cout<<"______________________________";

 cin >> Your_order_properties.color;

 cout <<"\nEnter your stutes \n1.Original\n2.Copy ";
 cout<<"______________________________";
 cin >> Your_order_properties.status;

if (Your_order_properties.color ==1){Your_order_properties.color=color::red;} 
if (Your_order_properties.color ==2){Your_order_properties.color=color::green;}  
 if (Your_order_properties.color ==3){Your_order_properties.color=color::blue;}
 if (Your_order_properties.color ==4){Your_order_properties.color=color::black;}
 if (Your_order_properties.color ==5){Your_order_properties.color=color::white;}
 if (Your_order_properties.color !=1 && Your_order_properties.color !=2 && Your_order_properties.color !=3 && Your_order_properties.color !=4 && Your_order_properties.color !=5){cout <<"\nerror in color";  propertiesOrder();}
if (Your_order_properties.status==1){Your_order_properties.status=stutes::original;} 
 if (Your_order_properties.status==2){Your_order_properties.status=stutes::copy_status;}
 if (Your_order_properties.status !=1 && Your_order_properties.status !=2){cout <<"\nerror in status";  propertiesOrder();}  
}

servece Your_delivery;

void delivery(){

cout<<"\nEnter your choice's number";
cout <<"\nDo you want delivery \n1.Yes  \n2.No ";
cout<<"______________________________";
cin >> Your_delivery.delivery;

cout <<"\nEnter your delivery way \n1.car\n2.Plane\n3.Bicycle\n4.Motorcycle";
cout<<"______________________________";
cin >> Your_delivery.delivery_way;

if (Your_delivery.delivery ==1){Your_delivery.delivery=dilivery::yes;} 
if (Your_delivery.delivery ==2){Your_delivery.delivery=dilivery::no;}
if (Your_delivery.delivery !=1 && Your_delivery.delivery !=2){cout <<"\nerror in dilivery"; dilivery();}
}

payment Your_payment_way;

void payments(){

 cout<<"\neEnter your choice's number";
 cout <<"\nEnter your payment way \n1.Cash\n2.Credit ";
 cout<<"______________________________";

 cin >> Your_payment_way.way;

 if (Your_payment_way.way ==1){Your_payment_way.way=payment_way::cash;} 
 if (Your_payment_way.way ==2){Your_payment_way.way=payment_way::credit_card;}
 if (Your_payment_way.way !=1 && Your_payment_way.way !=2){cout <<"\nerror in payment";  payments();}

}

;

void price_product()
{
//type of product
//way of delivery
switch(Your_order.publication){

    case book: switch(Your_order_properties.status){
              case original : cout <<"\nprice of original book"<<price_book_original;
              
                if (Your_delivery.delivery_way=car){cout<<"\nprice of car"<<price_car;cout<<"\nTotal price"<<price_car+price_book_original;}    
                if (Your_delivery.delivery_way=plane){cout<<"\nprice of plane"<<price_plane;cout<<"\nTotal price"<<price_plane+price_book_original;}    
                if (Your_delivery.delivery_way=Bicycle){cout<<"\nprice of Bicycle"<<price_Bicycle;cout<<"\nTotal price"<<price_Bicycle+price_book_original;}    
                if (Your_delivery.delivery_way=motorcycle){cout<<"\nprice of motorcycle"<<price_motorcycle;cout<<"\nTotal price"<<price_motorcycle+price_book_original;}    
break;

              case copy_status:cout<<"\nprice of copy book: "<<price_book_copy;
}               
               if (Your_delivery.delivery_way=car){cout<<"\nprice of car"<<price_car;cout<<"\nTotal price"<<price_car+price_book_copy;} 
                if (Your_delivery.delivery_way=plane){cout<<"\nprice of plane"<<price_plane;cout<<"\nTotal price"<<price_plane+price_book_copy;}    
                if (Your_delivery.delivery_way=Bicycle){cout<<"\nprice of Bicycle"<<price_Bicycle;cout<<"\nTotal price"<<price_Bicycle+price_book_copy;}    
                if (Your_delivery.delivery_way=motorcycle){cout<<"\nprice of motorcycle"<<price_motorcycle;cout<<"\nTotal price"<<price_motorcycle+price_book_copy;}    

 break;
 

    case magazine: switch(Your_order_properties.status){
                  case original : cout<<"\nprice of original magazine"<<price_magazine_original;    

                  
                  if (Your_delivery.delivery_way=car){cout<<"\nprice of car"<<price_car;cout<<"\nTotal price"<<price_car+price_magazine_original;}
                   if (Your_delivery.delivery_way=plane){cout<<"\nprice of plane"<<price_plane;cout<<"\nTotal price"<<price_plane+price_magazine_original;}
                   if (Your_delivery.delivery_way=Bicycle){cout<<"\nprice of Bicycle"<<price_Bicycle;cout<<"\nTotal price"<<price_Bicycle+price_magazine_original;}
                   if (Your_delivery.delivery_way=motorcycle){cout<<"\nprice of motorcycle"<<price_motorcycle;cout<<"\nTotal price"<<price_motorcycle+price_magazine_original;}
                   
                   break;

                   case copy_status :if (Your_order_properties.status==stutes::copy_status){cout<<"\nprice of copy magazine" <<price_magazine_copy;} 
                
                   if (Your_delivery.delivery_way=car){cout<<"\nprice of car"<<price_car;cout<<"\nTotal price"  <<price_car+price_magazine_copy;}
                   if (Your_delivery.delivery_way=plane){cout<<"\nprice of plane"<<price_plane;cout<<"\nTotal price"  <<price_plane+price_magazine_copy;}
                   if (Your_delivery.delivery_way=Bicycle){cout<<"\nprice of Bicycle"<<price_Bicycle;cout<<"\nTotal price"  <<price_Bicycle+price_magazine_copy;}
                   if (Your_delivery.delivery_way=motorcycle){cout<<"\nprice of motorcycle"<<price_motorcycle;cout<<"\nTotal price"<<price_motorcycle+price_magazine_copy;}
                   break;
}
   
  

    case Encyclopedia: switch(Your_order_properties.status){
                        case original : cout<<"\nprice of original Encyclopedia"<<price_Encyclopedia_original;    

                        if (Your_delivery.delivery_way=car){cout<<"\nprice of car"<<price_car;cout<<"\nTotal price"<<price_car+price_Encyclopedia_original;}
                        if (Your_delivery.delivery_way=plane){cout<<"\nprice of plane"<<price_plane;cout<<"\nTotal price"<<price_plane+price_Encyclopedia_original;}
                        if (Your_delivery.delivery_way=Bicycle){cout<<"\nprice of Bicycle"<<price_Bicycle;cout<<"\nTotal price"<<price_Bicycle+price_Encyclopedia_original;}
                        if (Your_delivery.delivery_way=motorcycle){cout<<"\nprice of motorcycle"<<price_motorcycle;cout<<"\nTotal price"<<price_motorcycle+price_Encyclopedia_original;}
break;
                       case copy_status :if (Your_order_properties.status==stutes::copy_status){cout<<"\nprice of copy Encyclopedia" <<price_Encyclopedia_copy;}    
                        if (Your_delivery.delivery_way=car){cout<<"\nprice of car"<<price_car;cout<<"\nTotal price"<<price_car+price_Encyclopedia_copy;}
                        if (Your_delivery.delivery_way=plane){cout<<"\nprice of plane"<<price_plane;cout<<"\nTotal price"<<price_plane+price_Encyclopedia_copy;}
                        if (Your_delivery.delivery_way=Bicycle){cout<<"\nprice of Bicycle"<<price_Bicycle;cout<<"\nTotal price"<<price_Bicycle+price_Encyclopedia_copy;}
                        if (Your_delivery.delivery_way=motorcycle){cout<<"\nprice of motorcycle"<<price_motorcycle;cout<<"\nTotal price"<<price_motorcycle+price_Encyclopedia_copy;}

break;
                       
        
        }}
    }




int main() {
   cout <<"==================================================================";
 cout <<"\n=====================Welcome to our library======================="; 
 cout <<"\n==================================================================";
     
                  
                  
                  
   treatment();
   

    order();
    
   
    propertiesOrder();
    
    
    delivery();
   

    costomers();

    payments();

    price_product();
    
  
   
    string publication;
    string category;
    string colour;
    string status;
    string delivery;
    string delivery_way;
    string payment_way;


    
   switch(Your_treatment.treatment){

     case buy :cout<<"\nname:"<<information.name;
               cout<<"\nphone:"<<information.phone;
                cout<<"\naddress:"<<information.address;
                 cout<<"________________________________________________________";
                                    switch (Your_order.publication)
                                         {
                                            case book :     publication="book";
                                            cout<<"\npublication:"<<publication;
break;
                                            case magazine :  publication="magazine";
                                                cout<<"\npublication:"<<publication;
break;
                                        case Encyclopedia :publication="Encyclopedia";
                                                 cout<<"\npublication:"<<publication;
break;
    }

                                        switch(Your_order.category){
                                                      case novel : category="novel";
                                                         cout<<"\ncategory:"<<category;  
break;
                                                      case story : category="story";
                                                         cout<<"\ncategory:"<<category;  
break;
                                                      case poem : category="poem";
                                                         cout<<"\ncategory:"<<category;
break;
                                                       case history : category="history";
                                                          cout<<"\ncategory:"<<category;
break;
                                                        case science : category="science";
                                                          cout<<"\ncategory:"<<category;
break;
                                                         case math : category="math";
                                                         cout<<"\ncategory:"<<category;
break;
                                                          case sport : category="sport";
                                                             cout<<"\ncategory:"<<category;
break;

    }
                                        switch(Your_order_properties.color){
                                              case red : colour="red";
                                              cout<<"\ncolor:"<<colour;
break;                                                                            
                                              case green : colour="green";
                                              cout<<"\ncolor:"<<colour;
break;
                                              case blue : colour="blue";
                                              cout<<"\ncolor:"<<colour;
break;
                                              case black : colour="black";
                                              cout<<"\ncolor:"<<colour;
break;
                                              case white : colour="white";
                                              cout<<"\ncolor:"<<colour;
break;  
     }
                                        switch(Your_order_properties.status){
                                                  case original : status="original";
                                                  cout<<"\nstutes:"<<status;
                                                                                        
                                                   cout<<"\n_____________________________________________________";
break;
                                                   case copy_status : status="copy";
                                                   cout<<"\nstutes:"<<status;
                                                   cout<<"\n_____________________________________________________";
break;
      }
                                        switch(Your_delivery.delivery){
                                        
                                            case yes : delivery="yes";
                                            cout<<"\ndilivery:"<<delivery;
break;

                                            case no : delivery="no";
                                             cout<<"\ndilivery:"<<delivery;

                                         switch(Your_delivery.delivery_way){
                                             case post : delivery_way="post";
                                                cout<<"\ndilivery way:"<<delivery_way;
 break;      
                                             case car : delivery_way="car";
                                                cout<<"\ndilivery way:"<<delivery_way;
 break;      
                                              case plane : delivery_way="plane";
                                              cout<<"\ndilivery way:"<<delivery_way;
 break;      
                                              case Bicycle : delivery_way="Bicycle";
                                               cout<<"\ndilivery way:"<<delivery_way;
 break;      
                                                case motorcycle : delivery_way="motorcycle";
                                                 cout<<"\ndilivery way:"<<delivery_way;
       
                   }
   
      
   
      }

price_product();//print the price of the product

     
                                        switch(Your_payment_way.way){//print the payment way
    
                                            case cash : payment_way="cash";
                                             cout<<"\npayment way:"<<payment_way;
   
                                            case credit_card : payment_way="credit card";
                                             cout<<"\npayment way:"<<payment_way;

      }
     

    
    break;
    

    case sell:cout<<"sorry we can't sell your product";

    break;

    
    case rental:cout<<"sorry we can't rental your product";
    
    break;
    }

    
    
        
    return 0;}
