#include <iostream>
#include <cmath>
using namespace std;

struct pswd
{
    long password;
    
    long int check_lengh_int;
   // long double check_lengh_double;// bool correct=true;// bool uncorrect=false;
};

int ReadPassword()
{
    pswd Read;
    int T=3;
    do
    {
        if(T<3){cout<<"\nPlease enter a positive namber.\nYou have ["<<T<<"] tries";}
    cout<<"\nEnter your password: ";
     cin>>Read.password;
     T--;

    }
     while(Read.password<0 &&T>0);

     if(Read.password<0){cout<<"\nyour sorry, But you enter a nigative numbers or [0] 3 times.\n";return false;}
    return Read.password;
}
int Ckeck_Password_Lengh()
{
    pswd save;
    int tries=3;
    do
    {
  
    
    if( tries<=2){cout<<"\nPasword must be four numbers.\nyou have ["<<tries<<"] tries.";}
    tries--;
    save.password=ReadPassword();

    if(save.password==0)
{
     return false;
}

    save.check_lengh_int=log10(save.password)+1;

  
    
    }
    while (save.check_lengh_int!=4 && tries>0 );

   if(save.check_lengh_int!=4)
{
  cout<<"\nsorry,But your password must be 4 numbers.\n";  return false;
}
    return  save.password;
}
bool check_Password()
{

  pswd test;
  test.password = Ckeck_Password_Lengh();
  
  if (test.password==false)
{
return false;
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
cout<<"\nwrong password.\n";return false;
}
return false;
}

int main()
{
   for(int i=0; i<3;i++)
   {
    cout<<"\n**************************___________________________________________________*********************************";
   }
   for(int i=0;i<3;i++)
   {
    cout<<"\n**************************                                                   *********************************";
     if(i==1){cout<<"\n****************                     ATM                           *********************************";}
   }
   for(int i=0; i<3;i++)
   {
    cout<<"\n**************************___________________________________________________*********************************";
   }
   if( check_Password())
   {

    cout<<"\nwelcome to your a ccuant,";
    cout<<"\nyou have a 1000,000$\n .";
   }
   else
   {
    cout<<"\nsorry,you are blocked";
    cout<<"\nplease call the bank";
   }
} 
