#include <iostream>
#include <cmath>
using namespace std;

struct pswd
{
    long password;
    long int check_lengh_int;
    long double check_lengh_double;
    bool correct=true;
    bool uncorrect=false;
};
int ReadPassword()
{
    
    int T=3;
    pswd Read;
    do
  { 
   if(T>2)
{
cout<<"\nplease enter a possitive, You have a ["<<T<<"] tries.";
}
   
    cout<<"\nenter your password: ";
     cin>>Read.password;
     T--;
}
while(Read.password<0 && T>0);
if(Read.password<0){return 0;}
return Read.password;

}
int Ckeck_Password_Lengh()
{
    pswd save;
    int tries=3;
    do
 {
    if( tries<=2)
{
cout<<"\npasword must be four numbers\nyou have ["<<tries<<"] tries.";
}
    tries--;
    save.password=ReadPassword();
    if( save.password==0)
{
    return 0;
}
    save.check_lengh_int=log10(save.password)+1;
    
    }
    while (save.check_lengh_int!=4 && tries>0 );

   if(save.check_lengh_int!=4)
{
   cout<<"sorry, you enter the password wrong 3 times"; return 0;
}
    return  save.password;
}
bool check_Password()
{

  pswd test;
  test.password = Ckeck_Password_Lengh();
  
  if (test.password==0)
{
return 0;
}

    int tries2=3;
    while(test.password !=9978 && tries2>0)
    {
        
        cout<<"\nPassword is uncorrect,Please enter your password.";
        cout<<"\nYou have ["<<tries2<<"] trieas";

        test.password=Ckeck_Password_Lengh();
        tries2--;
        
    }

if (test.password==9978)
{
return true;
}
if (test.password !=9978)
{
    cout<<"sorry, you enter the password wrong 3 times"; return 0;
}
return 0;
}

int main()
{
    cout<<ReadPassword();
   /*if( check_Password())
   {

    cout<<"\nwelcome to your a ccuant,";
    cout<<"\nyou have a 1000,000$ .";
   }
   else
   {
    cout<<"\nsorry,you are blocked";
    cout<<"\nplease call the bank";
   }*/
}