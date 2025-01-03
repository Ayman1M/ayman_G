#include <iostream>
#include<cmath>
#include <cstdlib>
using namespace std;

double THE_CASES_INPUT ;
double The_first_side_of_the_triangle , The_second_side_of_the_triangle , The_third_side_of_the_triangle , The_first_angle , The_second_angle , The_third_angle ;

void THE_CASES_input()
{
cout<<"Enter the appropriate value for the information available to you. ";

cout <<"\n1- all value of sides'traingle==0";

cout<<"\n2- all value of angles'traingle by radian==1";

cout<<"\n3- all value of angles'traingle by degree==2";

cout<<"\n4- The value of two adjacent sides is the angle between them==3";

cout<<"\n5- The value of two adjacent sides is not equal to the angle between them==4";

cout <<"\n If your information appropriate more than one case, please enter the number of the case that is most appropriate for you (input one value ) ";

cin>>THE_CASES_INPUT;

}

void PROSSESSING_THE_CASES_INPUT()
{ 
    if(THE_CASES_INPUT ==0){
        
        cout<<"\nEnter the value of the first side of the triangle\n";
        
        cin>>The_first_side_of_the_triangle;
        
        cout<<"\nEnter the value of the second side of the triangle\n";
        
        cin>>The_second_side_of_the_triangle;
        
        cout<<"\nEnter the value of the third side of the triangle\n";
        
        cin>>The_third_side_of_the_triangle;
        
        if (The_first_side_of_the_triangle<=0 or The_second_side_of_the_triangle<=0 or The_third_side_of_the_triangle<=0){cout<<"\nThat is not traingle. Ensure from the your onputs"; exit(0);}
       
        if (The_first_side_of_the_triangle>0 && The_second_side_of_the_triangle>0 && The_third_side_of_the_triangle>0)
       {
            if(The_first_side_of_the_triangle==The_second_side_of_the_triangle==The_third_side_of_the_triangle){cout<<"Equilateral triangle"; exit(0);}
        
            if(The_first_side_of_the_triangle==The_second_side_of_the_triangle){cout<<"isosceles triangle"; exit(0);}
        
        
            if(The_second_side_of_the_triangle==The_third_side_of_the_triangle){cout<<"isosceles triangle"; exit(0);}
        
            if(The_third_side_of_the_triangle==The_first_side_of_the_triangle){cout<<"isosceles triangle"; exit(0);}
        
            if( pow(The_first_side_of_the_triangle,2)==pow(The_second_side_of_the_triangle,2)+pow(The_third_side_of_the_triangle,2) or pow(The_second_side_of_the_triangle,2)==pow(The_first_side_of_the_triangle,2)+pow(The_third_side_of_the_triangle,2) or pow(The_third_side_of_the_triangle,2)==pow(The_first_side_of_the_triangle,2)+pow(The_second_side_of_the_triangle,2)){cout<<"Traingle is right Triangle "; exit(0);}
        
            if (The_first_side_of_the_triangle > The_second_side_of_the_triangle+The_third_side_of_the_triangle){if (pow(The_first_side_of_the_triangle,2)<pow(The_second_side_of_the_triangle,2)+pow(The_third_side_of_the_triangle,2)){cout<<"Triangle with different sides "; exit(0);}}
    
            if (The_second_side_of_the_triangle > The_first_side_of_the_triangle+The_third_side_of_the_triangle){if (pow(The_second_side_of_the_triangle,2)<pow(The_first_side_of_the_triangle,2)+pow(The_third_side_of_the_triangle,2)){cout<<"Triangle with different sides "; exit(0);}}
    
            if (The_third_side_of_the_triangle > The_second_side_of_the_triangle+The_first_side_of_the_triangle){if (pow(The_third_side_of_the_triangle,2)<pow(The_second_side_of_the_triangle,2)+pow(The_first_side_of_the_triangle,2)){cout<<"Triangle with different sides "; exit(0);}}
        }
    
        cout <<" \nform the inputs, that is not a triangle";}
  
  
    if(THE_CASES_INPUT ==1){

        cout<<"\nEnter the value of the first angle of the triangle\n";
        
        cin>>The_first_angle;
        
        cout<<"\nEnter the value of the second angle of the triangle\n";
        
        cin>>The_second_angle;
        
        cout<<"\nEnter the value of the third angle of the triangle\n";
        
        cin>>The_third_angle;
        
        if (The_first_angle<=0 or The_second_angle<=0 or The_third_angle<=0){cout<<"\nThat is not traingle. Ensure from the your inputs"; exit(0);}
        
        if (M_1_PI != The_first_angle + The_second_angle + The_third_angle){cout<<"\nThat is not traingle. Ensure from the your inputs"; exit(0);}

        if (The_first_angle>0 && The_second_angle>0 && The_third_angle>0)
        {
            if (The_first_angle==The_second_angle==The_third_angle){cout<<"Equilateral triangle"; exit(0);}
        
            if (The_first_angle==The_second_angle){cout<<"isosceles triangle"; exit(0);}
        
            if (The_second_angle==The_third_angle){cout<<"isosceles triangle"; exit(0);}
        
            if (The_third_angle==The_first_angle){cout<<"isosceles triangle"; exit(0);}
        
            if (The_first_angle==The_second_angle==M_1_PI/3){cout<<"Equilateral triangle"; exit(0);}
        
            if (The_second_angle==The_third_angle==M_1_PI/3){cout<<"Equilateral triangle"; exit(0);}
        
            if (The_third_angle==The_first_angle==M_1_PI/3){cout<<"Equilateral triangle"; exit(0);}
        
            if (The_first_angle==M_1_PI/2){cout<<"right triangle"; exit(0);}
        
            if (The_second_angle==M_1_PI/2){cout<<"right triangle"; exit(0);}
        
            if (The_third_angle==M_1_PI/2){cout<<"right triangle"; exit(0);}
        
            if (The_first_angle>M_1_PI/2){cout<<"obtuse triangle"; exit(0);}
        
            if (The_second_angle>M_1_PI/2){cout<<"obtuse triangle"; exit(0);}
        
            if (The_third_angle>M_1_PI/2){cout<<"obtuse triangle"; exit(0);}
        
            if (The_first_angle<M_1_PI/2 && The_second_angle<M_1_PI/2 && The_third_angle<M_1_PI/2){cout<<"acute triangle"; exit(0);}
        }
        


    }

   
    if (THE_CASES_INPUT ==2) {  
        cout<<"\n Enter the value of the first angle of the triangle by degree\n";
        
        cin>>The_first_angle;
        
        cout<<"\n Enter the value of the second angle of the triangle by degree\n";
        
        cin>>The_second_angle;
        
        cout<<"\n Enter the value of the third angle of the triangle by degree\n";
        
        cin>>The_third_angle;
        
        if (The_first_angle<=0 or The_second_angle<=0 or The_third_angle<=0){cout<<"\nThat is not traingle. Ensure from the your inputs"; exit(0);}
        
        if (180 != The_first_angle + The_second_angle + The_third_angle){cout<<"\nThat is not traingle. Ensure from the your inputs"; exit(0);}

        if (The_first_angle>0 && The_second_angle>0 && The_third_angle>0)
        {
            if (The_first_angle==The_second_angle==The_third_angle){cout<<"Equilateral triangle"; exit(0);}
        
            if (The_first_angle==The_second_angle){cout<<"isosceles triangle"; exit(0);}
        
            if (The_second_angle==The_third_angle){cout<<"isosceles triangle"; exit(0);}
        
            if (The_third_angle==The_first_angle){cout<<"isosceles triangle"; exit(0);}
        
            if (The_first_angle==The_second_angle==60){cout<<"Equilateral triangle"; exit(0);}
        
            if (The_second_angle==The_third_angle==60){cout<<"Equilateral triangle"; exit(0);}
        
            if (The_third_angle==The_first_angle==60){cout<<"Equilateral triangle"; exit(0);}
        
            if (The_first_angle==90){cout<<"right triangle"; exit(0);}
        
            if (The_second_angle==90){cout<<"right triangle"; exit(0);}
        
            if (The_third_angle==90){cout<<"right triangle"; exit(0);}
        
            if (The_first_angle>90){cout<<"obtuse triangle"; exit(0);}
        
            if (The_second_angle>90){cout<<"obtuse triangle"; exit(0);}
        
            if (The_third_angle>90){cout<<"obtuse triangle"; exit(0);}
        
            if (The_first_angle<90 && The_second_angle<90 && The_third_angle<90){cout<<"acute triangle"; exit(0);}
        }

   
}



   if(THE_CASES_INPUT ==3){
        cout<<"\nEnter the value of the first side of the triangle\n";
      
        cin>>The_first_side_of_the_triangle;
      
        cout<<"\nEnter the value of the second side of the triangle\n";
      
        cin>>The_second_side_of_the_triangle;
      
        cout<<"\nEnter the value of the angle between the first and second sides of the triangle by radain \n";
      
        cin>>The_first_angle;
        

        if (The_first_side_of_the_triangle<=0 or The_second_side_of_the_triangle<=0 or The_first_angle<=0){cout<<"\nThat is not traingle. Ensure from the your inputs"; exit(0);}

   
   
        //y==pow(The_first_side_of_the_triangle,2)+pow(The_second_side_of_the_triangle,2)-2*The_first_side_of_the_triangle*The_second_side_of_the_triangle*cos(The_first_angle)

   double y=pow(The_first_side_of_the_triangle,2)+pow(The_second_side_of_the_triangle,2)-2*The_first_side_of_the_triangle*The_second_side_of_the_triangle*cos(The_first_angle);



   if (y<0){cout<<"\nThat is not traingle. Ensure from the your inputs"; exit(0);}

   //x== The_third_side_of_the_triangle 

   double x=sqrt(y);

    cout<<"The third side of the triangle="<<x;



    if (x==0){cout<<"\nThat is not traingle. Ensure from the your inputs"; exit(0);}

    if (The_first_side_of_the_triangle>0 && The_second_side_of_the_triangle>0 && x>0)
    {
        if(The_first_side_of_the_triangle==The_second_side_of_the_triangle==x){cout<<"Equilateral triangle"; exit(0);}
        
        if(The_first_side_of_the_triangle==The_second_side_of_the_triangle){cout<<"isosceles triangle"; exit(0);}
        
        if(The_second_side_of_the_triangle==x){cout<<"isosceles triangle"; exit(0);}
        
        if(x==The_first_side_of_the_triangle){cout<<"isosceles triangle"; exit(0);}
        
        if( pow(The_first_side_of_the_triangle,2)==pow(The_second_side_of_the_triangle,2)+pow(x,2) or pow(The_second_side_of_the_triangle,2)==pow(The_first_side_of_the_triangle,2)+pow(x,2) or pow(x,2)==pow(The_first_side_of_the_triangle,2)+pow(The_second_side_of_the_triangle,2)){cout<<"Traingle is right Triangle "; exit(0);}
        
        if (The_first_side_of_the_triangle > The_second_side_of_the_triangle+x){if (pow(The_first_side_of_the_triangle,2)<pow(The_second_side_of_the_triangle,2)+pow(x,2)){cout<<"Triangle with different sides "; exit(0);}}
    
        if (The_second_side_of_the_triangle > The_first_side_of_the_triangle+x){if (pow(The_second_side_of_the_triangle,2)<pow(The_first_side_of_the_triangle,2)+pow(x,2)){cout<<"Triangle with different sides "; exit(0);}}
    
        if (x > The_second_side_of_the_triangle+The_first_side_of_the_triangle){if (pow(x,2)<pow(The_second_side_of_the_triangle,2)+pow(The_first_side_of_the_triangle,2)){cout<<"Triangle with different sides "; exit(0);}}
    }}

   
    if(THE_CASES_INPUT ==4){
        
        cout<<"\nEnter the value of the first side of the triangle\n";
        
        cin>>The_first_side_of_the_triangle;
        
        cout<<"\nEnter the value of the second side of the triangle\n";
        
        cin>>The_second_side_of_the_triangle;
        
        cout<<"\nEnter the value of the angle between the first and second sides of the triangle by radain \n";
        
        cin>>The_first_angle;
        

        
        if (The_first_side_of_the_triangle<=0 or The_second_side_of_the_triangle<=0 or The_first_angle<=0){cout<<"\nThat is not traingle. Ensure from the your inputs"; exit(0);}
    
    
    
        //G==pow(The_first_side_of_the_triangle,2)-pow(The_second_side_of_the_triangle,2)-2*The_first_side_of_the_triangle*G*cos(The_first_angle)
   
        double G=pow(The_first_side_of_the_triangle,2)-pow(The_second_side_of_the_triangle,2)-2*The_first_side_of_the_triangle*G*cos(The_first_angle);
   
    if (G<0){cout<<"\nThat is not traingle. Ensure from the your inputs"; exit(0);}
   
    //E== The_third_side_of_the_triangle
   
    double E=sqrt(G);
   
    cout<<"The third side of the triangle="<<E;
   


    if (E==0){cout<<"\nThat is not traingle. Ensure from the your inputs"; exit(0);}
   
    if (The_first_side_of_the_triangle>0 && The_second_side_of_the_triangle>0 && E>0)
    {
        if(The_first_side_of_the_triangle==The_second_side_of_the_triangle==E){cout<<"Equilateral triangle"; exit(0);}
        
        if(The_first_side_of_the_triangle==The_second_side_of_the_triangle){cout<<"isosceles triangle"; exit(0);}
        
        if(The_second_side_of_the_triangle==E){cout<<"isosceles triangle"; exit(0);}
        
        if(E==The_first_side_of_the_triangle){cout<<"isosceles triangle"; exit(0);}
        
        if( pow(The_first_side_of_the_triangle,2)==pow(The_second_side_of_the_triangle,2)+pow(E,2) or pow(The_second_side_of_the_triangle,2)==pow(The_first_side_of_the_triangle,2)+pow(E,2) or pow(E,2)==pow(The_first_side_of_the_triangle,2)+pow(The_second_side_of_the_triangle,2)){cout<<"Traingle is right Triangle "; exit(0);}
        
        if (The_first_side_of_the_triangle > The_second_side_of_the_triangle+E){if (pow(The_first_side_of_the_triangle,2)<pow(The_second_side_of_the_triangle,2)+pow(E,2)){cout<<"Triangle with different sides "; exit(0);}}
    
        if (The_second_side_of_the_triangle > The_first_side_of_the_triangle+E){if (pow(The_second_side_of_the_triangle,2)<pow(The_first_side_of_the_triangle,2)+pow(E,2)){cout<<"Triangle with different sides "; exit(0);}}
    
        if (E > The_second_side_of_the_triangle+The_first_side_of_the_triangle){if (pow(E,2)<pow(The_second_side_of_the_triangle,2)+pow(The_first_side_of_the_triangle,2)){cout<<"Triangle with different sides "; exit(0);}}
    }}
}       


int main()
{
    cout<<"\n*****************This program is to determine the type of traingle*****************";
    
    cout<<"\n*****************                                                 **********=======";
    
    THE_CASES_input();
    
    PROSSESSING_THE_CASES_INPUT();
    
    cout<<"\n the input is not enough to determine the type of the triangle";
    
    return 0;
}