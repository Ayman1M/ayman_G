

#include <iostream>
#include<cmath>
#include <cstdlib>

/* x is the first traingle
y is second traingle
z is third ttraingle
a is the angle betwen x & y
b is the  angle betwen y & z
c is the  angle betwen z & x
isosceles triangle
acute triangle
*/
using namespace std;
double x;
double y;
double z;
double a;
double b;
double c;

void iformation(){

   
    cout <<"valua x? if not available press (-1) ";
    cin>> x;
    
    cout<<"\nvalue y? if not available press (-1) ";
    cin >>y;
    
    
    cout<<" \nvalue z? if not available press (-1) ";
    cin>>z;
    
    cout<<"\nis the value of {a} is available";
    cout<<"\nif No press (-1) \n if yes Enter  the value:: ";

    cout<<"a?";
    cin>>a;
    
    cout<<"\nis the value of {b} is available";
    cout<<"\nif No press (-1) \n if yes  Enter value:: ";

    cout<<"b?";
    cin>>b;

    cout<<"\nis the value of {c}  is available";
    cout<<"\nif No press (-1) \n if yes Enter the value""  ";

    cout<<"c?";
    cin>>c;
}

void Testing_Angles_AND_TRAINGLE()

{
    if (a==0){cout<<"That is not traingle "; exit(0);}
    if (b==0){cout<<"That is not traingle "; exit(0);}
    if (c==0){cout<<"That is not traingle "; exit(0);}
    if (x==0){cout<<"That is not traingle "; exit(0);}
    if (y==0){cout<<"That is not traingle "; exit(0);}
    if (z==0){cout<<"That is not traingle "; exit(0);}
}


void Testing_If_Prosses_Is_Available()
{
    if(a==b==c==-1)
    {if(x<=-1 && y<=-1 && z<=-1){cout<<"Sorry, information is not enough"; exit(0);}
    

    }}


    void Testing_traingle_When_Angles_Is_not_Available()
{ 
    if(a==b==c==-1){

    if (x==y==z){cout<<"Equilateral triangle"; exit(0);}
    if (x==y){cout<<"isosceles triangle"; exit(0);}
    if (y==z){cout<<"isosceles triangle"; exit(0);}
    if (z==x){cout<<"isosceles triangle"; exit(0);}
    if (x==y==z){cout<<"Equilateral triangle"; exit(0);}

    if (pow(x,2)==pow(y,2)+pow(z,2)){cout<<"Traingle is right Triangle "; exit(0);}
    if (pow(y,2)==pow(x,2)+pow(z,2)){cout<<"Traingle is right triangle ";exit(0);}  
      if (pow(z,2)==pow(y,2)+pow(x,2)){cout<<"Traingle is right triangle ";exit(0);}

    if (x>y+z){if (pow(x,2)<pow(y,2)+pow(z,2)){cout<<"acute triangle "; exit(0);}}
    if (y>x+z){if (pow(y,2)<pow(x,2)+pow(z,2)){cout<<"acute triangle ";exit(0);}}
    if (z>y+x){if (pow(z,2)<pow(y,2)+pow(x,2)){cout<<"acute triangle ";exit(0);}}

   
  
  if (pow(x,2)>pow(y,2)+pow(z,2)){cout<<"obtuse triangle "; exit(0);}
if (pow(y,2)>pow(x,2)+pow(z,2)){cout<<"obtuse triangle";exit(0);}  
  if (pow(z,2)>pow(y,2)+pow(x,2)){cout<<" obtuse triangle";exit(0);}
  
}
}



void When_one_Angle_Is_Available_And_Two_Traing()
{
    if (a>0){if(x>0 && y>0){
        cout<<"Z="<< sqrt(pow(x,2)+pow(y,2)-2*x*y*cos(a));
      cout<<"Enter the value of z which out for you";
        cin>>z;
        if (x==y==z){cout<<"Equilateral triangle"; exit(0);}
    if (x==y){cout<<"isosceles triangle"; exit(0);}
    if (y==z){cout<<"isosceles triangle"; exit(0);}
    if (z==x){cout<<"isosceles triangle"; exit(0);}
    if (x==y==z){cout<<"Equilateral triangle"; exit(0);}

    if (pow(x,2)==pow(y,2)+pow(z,2)){cout<<"Traingle is right Triangle "; exit(0);}
    if (pow(y,2)==pow(x,2)+pow(z,2)){cout<<"Traingle is right triangle ";exit(0);}  
      if (pow(z,2)==pow(y,2)+pow(x,2)){cout<<"Traingle is right triangle ";exit(0);}

    if (x>y+z){if (pow(x,2)<pow(y,2)+pow(z,2)){cout<<"acute triangle "; exit(0);}}
    if (y>x+z){if (pow(y,2)<pow(x,2)+pow(z,2)){cout<<"acute triangle ";exit(0);}}
    if (z>y+x){if (pow(z,2)<pow(y,2)+pow(x,2)){cout<<"acute triangle ";exit(0);}}

   
  
  if (pow(x,2)>pow(y,2)+pow(z,2)){cout<<"obtuse triangle "; exit(0);}
if (pow(y,2)>pow(x,2)+pow(z,2)){cout<<"obtuse triangle";exit(0);}  
  if (pow(z,2)>pow(y,2)+pow(x,2)){cout<<" obtuse triangle";exit(0);}
    }
}     

if (b>0){if(y>0 && z>0){
    cout<<"X="<< sqrt(pow(y,2)+pow(z,2)-2*y*z*cos(b));
    cout<<"Enter the value of x which out for you";
    cin>>x;
    if (x==y==z){cout<<"Equilateral triangle"; exit(0);}
    if (x==y){cout<<"isosceles triangle"; exit(0);}
    if (y==z){cout<<"isosceles triangle"; exit(0);}
    if (z==x){cout<<"isosceles triangle"; exit(0);}
    if (x==y==z){cout<<"Equilateral triangle"; exit(0);}

    if (pow(x,2)==pow(y,2)+pow(z,2)){cout<<"Traingle is right Triangle "; exit(0);}
    if (pow(y,2)==pow(x,2)+pow(z,2)){cout<<"Traingle is right triangle ";exit(0);}  
      if (pow(z,2)==pow(y,2)+pow(x,2)){cout<<"Traingle is right triangle ";exit(0);}

    if (x>y+z){if (pow(x,2)<pow(y,2)+pow(z,2)){cout<<"acute triangle "; exit(0);}}
    if (y>x+z){if (pow(y,2)<pow(x,2)+pow(z,2)){cout<<"acute triangle ";exit(0);}}
    if (z>y+x){if (pow(z,2)<pow(y,2)+pow(x,2)){cout<<"acute triangle ";exit(0);}}

   
  
  if (pow(x,2)>pow(y,2)+pow(z,2)){cout<<"obtuse triangle "; exit(0);}
    
}
}

if (c>0){if(z>0 && x>0){
    cout << "Y=" << sqrt(pow(z,2)+pow(x,2)-2*z*x*cos(c));
    cout<<"Enter the value of y which out for you";
    cin>>y;
    if (x==y==z){cout<<"Equilateral triangle"; exit(0);}
    if (x==y){cout<<"isosceles triangle"; exit(0);}
    if (y==z){cout<<"isosceles triangle"; exit(0);}
    if (z==x){cout<<"isosceles triangle"; exit(0);}
    if (x==y==z){cout<<"Equilateral triangle"; exit(0);}

    if (pow(x,2)==pow(y,2)+pow(z,2)){cout<<"Traingle is right Triangle "; exit(0);}
    if (pow(y,2)==pow(x,2)+pow(z,2)){cout<<"Traingle is right triangle ";exit(0);}  
      if (pow(z,2)==pow(y,2)+pow(x,2)){cout<<"Traingle is right triangle ";exit(0);}

    if (x>y+z){if (pow(x,2)<pow(y,2)+pow(z,2)){cout<<"acute triangle "; exit(0);}}
    if (y>x+z){if (pow(y,2)<pow(x,2)+pow(z,2)){cout<<"acute triangle ";exit(0);}}
    if (z>y+x){if (pow(z,2)<pow(y,2)+pow(x,2)){cout<<"acute triangle ";exit(0);}}

   
  
  if (pow(x,2)>pow(y,2)+pow(z,2)){cout<<"obtuse triangle "; exit(0);}
}
 
}

}


void When_one_Angle_Is_Available_And_Three_Traingle()
{ 
    if(b == -1 && c == -1)
    {
        if (a == M_1_PI/3){
        if (x==y==z){cout<<"Equilateral triangle"; exit(0);}
        if (x==y){cout<<" equilateral triangle"; exit(0);}
        if (y==z){cout<<"equilateral triangle"; exit(0);}
        if (z==x){cout<<"equilateral triangle"; exit(0);}
    
        if (pow(x,2)==pow(y,2)+pow(z,2)){cout<<"Traingle is right Triangle "; exit(0);}
        if (pow(y,2)==pow(x,2)+pow(z,2)){cout<<"Traingle is right triangle ";exit(0);}  
          if (pow(z,2)==pow(y,2)+pow(x,2)){cout<<"Traingle is right triangle ";exit(0);}
    
        if (x>y+z){if (pow(x,2)<pow(y,2)+pow(z,2)){cout<<"acute triangle "; exit(0);}}
        if (y>x+z){if (pow(y,2)<pow(x,2)+pow(z,2)){cout<<"acute triangle ";exit(0);}}
        if (z>y+x){if (pow(z,2)<pow(y,2)+pow(x,2)){cout<<"acute triangle ";exit(0);}}
    
       
      
      if (pow(x,2)>pow(y,2)+pow(z,2)){cout<<"obtuse triangle "; exit(0);}
    if (pow(y,2)>pow(x,2)+pow(z,2)){cout<<"obtuse triangle";exit(0);}  
      if (pow(z,2)>pow(y,2)+pow(x,2)){cout<<" obtuse triangle";exit(0);}
      }
 
        }
    
        if(a == -1 && c == -1)
    {
        if (a == M_1_PI/3){
        if (x==y==z){cout<<"Equilateral triangle"; exit(0);}
        if (x==y){cout<<" equilateral triangle"; exit(0);}
        if (y==z){cout<<"equilateral triangle"; exit(0);}
        if (z==x){cout<<"equilateral triangle"; exit(0);}
    
        if (pow(x,2)==pow(y,2)+pow(z,2)){cout<<"Traingle is right Triangle "; exit(0);}
        if (pow(y,2)==pow(x,2)+pow(z,2)){cout<<"Traingle is right triangle ";exit(0);}  
          if (pow(z,2)==pow(y,2)+pow(x,2)){cout<<"Traingle is right triangle ";exit(0);}
    
        if (x>y+z){if (pow(x,2)<pow(y,2)+pow(z,2)){cout<<"acute triangle "; exit(0);}}
        if (y>x+z){if (pow(y,2)<pow(x,2)+pow(z,2)){cout<<"acute triangle ";exit(0);}}
        if (z>y+x){if (pow(z,2)<pow(y,2)+pow(x,2)){cout<<"acute triangle ";exit(0);}}
    
       
      
      if (pow(x,2)>pow(y,2)+pow(z,2)){cout<<"obtuse triangle "; exit(0);}
    if (pow(y,2)>pow(x,2)+pow(z,2)){cout<<"obtuse triangle";exit(0);}  
      if (pow(z,2)>pow(y,2)+pow(x,2)){cout<<" obtuse triangle";exit(0);}
      }
 
        }

        if(a == -1 && b == -1)
    {
        if (b == M_1_PI/3){
        if (x==y==z){cout<<"Equilateral triangle"; exit(0);}
        if (x==y){cout<<" equilateral triangle"; exit(0);}
        if (y==z){cout<<"equilateral triangle"; exit(0);}
        if (z==x){cout<<"equilateral triangle"; exit(0);}
    
        if (pow(x,2)==pow(y,2)+pow(z,2)){cout<<"Traingle is right Triangle "; exit(0);}
        if (pow(y,2)==pow(x,2)+pow(z,2)){cout<<"Traingle is right triangle ";exit(0);}  
          if (pow(z,2)==pow(y,2)+pow(x,2)){cout<<"Traingle is right triangle ";exit(0);}
    
        if (x>y+z){if (pow(x,2)<pow(y,2)+pow(z,2)){cout<<"acute triangle "; exit(0);}}
        if (y>x+z){if (pow(y,2)<pow(x,2)+pow(z,2)){cout<<"acute triangle ";exit(0);}}
        if (z>y+x){if (pow(z,2)<pow(y,2)+pow(x,2)){cout<<"acute triangle ";exit(0);}}
    
       
      
      if (pow(x,2)>pow(y,2)+pow(z,2)){cout<<"obtuse triangle "; exit(0);}
    if (pow(y,2)>pow(x,2)+pow(z,2)){cout<<"obtuse triangle";exit(0);}  
      if (pow(z,2)>pow(y,2)+pow(x,2)){cout<<" obtuse triangle";exit(0);}
      }
 
        }
    }

void When_Two_Angle_IS_Available()
    {
        if (a==-1)
        {
            if(b>0 && c>0)
            
            { if(c+b<M_1_PI){
            
                if (b==c==M_1_PI/3){cout<<"Equilateral triangle"; exit(0);}
            
                if(c=M_1_PI/2){cout<<"right triangle"; exit(0);}
            
                if(b=M_1_PI/2){cout<<"right triangle"; exit(0);}
            
                if (c>M_1_PI/2){cout<<"obtuse triangle"; exit(0);}
            
                if (b>M_1_PI/2){cout<<"obtuse triangle"; exit(0);}
            
                if (c<M_1_PI/2 && b<M_1_PI/2 && c+b==M_1_PI/2){cout<<"right triangle"; exit(0);}
            
                if (c<M_1_PI/2 && b<M_1_PI/2 && c+b<M_1_PI/2){cout<<"obtuse triangle"; exit(0);}
            
                if (c<M_1_PI/2 && b<M_1_PI/2 && c+b>M_1_PI/2){cout<<"acute triangle"; exit(0);}
                   
                  
                 
        }}
    
            }
        
            if (b==-1)
            {
                if(a>0 && c>0)
                {           if(c+b<M_1_PI){
                    
                    if (a==c==M_1_PI/3){cout<<"Equilateral triangle"; exit(0);}
                    
                    if(c=M_1_PI/2){cout<<"right triangle"; exit(0);}
                    
                    if(a=M_1_PI/2){cout<<"right triangle"; exit(0);}
                    
                    if (c>M_1_PI/2){cout<<"obtuse triangle"; exit(0);}
                    
                    if (a>M_1_PI/2){cout<<"obtuse triangle"; exit(0);}
                    
                    if (c<M_1_PI/2 && a<M_1_PI/2 && c+a==M_1_PI/2){cout<<"right triangle"; exit(0);}
                    
                    if (c<M_1_PI/2 && a<M_1_PI/2 && c+a<M_1_PI/2){cout<<"obtuse triangle"; exit(0);}
                    
                    if (c<M_1_PI/2 && a<M_1_PI/2 && c+a>M_1_PI/2){cout<<"acute triangle"; exit(0);}
                       
                      
                     
            }}
        }
               
                if (c==-1)
                    {    if(a>0 && b>0){

                        if(c+b<M_1_PI){
                       
                            if (a==b==M_1_PI/3){cout<<"Equilateral triangle"; exit(0);}
                       
                            if(b=M_1_PI/2){cout<<"right triangle"; exit(0);}
                       
                            if(a=M_1_PI/2){cout<<"right triangle"; exit(0);}
                       
                            if (b>M_1_PI/2){cout<<"obtuse triangle"; exit(0);}
                       
                            if (a>M_1_PI/2){cout<<"obtuse triangle"; exit(0);}
                       
                            if (b< M_1_PI/2 && a<M_LN10/2 && b+a==M_1_PI/2){cout<<"right triangle"; exit(0);}
                       
                            if (b<M_1_PI/2 && a<M_1_PI/2 && b+a<M_1_PI/2){cout<<"obtuse triangle"; exit(0);}
                       
                            if (b<M_1_PI/2 && a<M_1_PI/2 && b+a>M_1_PI/2){cout<<"acute triangle"; exit(0);}
                           
                          
                         
                }}
            }
        }


 void When_Three_Angle_Is_Available()
{
    if (a>0 && b>0 && c>0)
    {
        if (a+b+c==M_1_PI){
            if (a==b==c){cout<<"Equilateral triangle"; exit(0);}
            if (a==b && c!=a){cout<<"isosceles triangle"; exit(0);}
            if (b==c && c!=a){cout<<"isosceles triangle"; exit(0);}
            if (c==a && c!=b){cout<<"isosceles triangle"; exit(0);}
            if (a==b==c){cout<<"Equilateral triangle"; exit(0);}
            if (a==b==M_1_PI/3){cout<<"Equilateral triangle"; exit(0);}
            if (b==c==M_1_PI/3){cout<<"Equilateral triangle"; exit(0);}
            if (a==c==M_1_PI/3){cout<<"Equilateral triangle"; exit(0);}
            if (a==M_1_PI/2){cout<<"right triangle"; exit(0);}
            if (b==M_1_PI/2){cout<<"right triangle"; exit(0);}
            if (c==M_1_PI/2){cout<<"right triangle"; exit(0);}

            if (a>M_1_PI/2){cout<<"obtuse triangle"; exit(0);}
            if (b>M_1_PI/2){cout<<"obtuse triangle"; exit(0);}
            if (c>M_1_PI/2){cout<<"obtuse triangle"; exit(0);}

            if (a<M_1_PI/2 && b<M_1_PI/2 && c<M_1_PI/2){cout<<"acute triangle"; exit(0);}
        
            
        }
    }
}


int main ()
{
    cout<<"======This program is to determine the type of traingle======";
cout<<"\n ======                                                =======";

cout<<"\n The only nigative value whish you can input is (-1)";

cout<<"\n Eny nigative value will be take a wrong Answer i the most cases";

cout<<"\n let x is the first traingle";

cout<<"\nlet y is second traingle";

cout<<"\nlet z is third ttraingle";

cout<<"\nlet a is the angle betwen x & y by radians";

cout<<"\nlet b is the  angle betwen y & z by radians";

cout<<"\nlet c is the  angle betwen z & x byradians \n";

iformation();

Testing_Angles_AND_TRAINGLE();

Testing_If_Prosses_Is_Available();

Testing_traingle_When_Angles_Is_not_Available();

When_one_Angle_Is_Available_And_Two_Traing();

When_one_Angle_Is_Available_And_Three_Traingle();

When_Two_Angle_IS_Available();

When_Three_Angle_Is_Available();
}