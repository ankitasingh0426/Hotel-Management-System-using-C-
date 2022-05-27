#include <iostream>
using namespace std;
int main(){
   int quant;
   int choice;
   // quantity
   int Qrooms=0; 
   int Qpasta=0;
   int Qnoodles=0;
   int Qburger= 0;
   int Qshake=0;
   int Qchicken=0;
   // food items sold
   int Srooms=0, Spasta=0, Sburger=0,Snoodles=0, Sshake=0 , Schicken=0;
   // total price of items
   int Total_rooms=0 , Total_pasta=0 , Total_burger=0, Total_noodles=0, Total_shake=0, Total_chicken=0;

   cout<<"\n\t Quantity of items we have in our hotel ";
   cout<<"\n Rooms availible : ";
   cin>>Qrooms;
   cout<<"\n Quantity of pasta :";
   cin>> Qpasta;
   cout<<"\n Quantity of noodles:";
   cin>> Qnoodles;
   cout<<"\n Quantity of burger :";
   cin>>Qburger;
   cout<<"\n Quantity of shake :";
   cin>>Qshake;
   cout<<"\n Quantity of chicken-roll :";
   cin>>Qchicken;
   m:
   cout<<"\n\t\t\t Please select from the menu options ";
   cout<<"\n\n1) Rooms";
   cout<<"\n\n2) Pasta";
   cout<<"\n\n3) Noodles";
   cout<<"\n\n4) Burger";
   cout<<"\n\n5) Shake";
   cout<<"\n\n6) Chicken-roll";
   cout<<"\n\n7) Information regarding sales and collection";
   cout<<"\n\n8) Exit";

   cout<<"\n\n Please enter your choice !";
   cin>>choice;

   switch(choice){
       case 1:
       cout<<"\n\n Enter the number of rooms you want : ";
       cin>>quant;
       if(Qrooms-Srooms >= quant){
           Srooms=Srooms+quant;
           Total_rooms=Total_rooms+quant*1200;
           cout<<"\n\n\t\t"<<quant<<" Rooms have been alloted to you ";
       }
       else{
           cout<<"\n\t Only"<< Qrooms-Srooms<<"Rooms remaining in hotel ";

       }
       break;
       case 2:
       cout<<"\n\n Enter Pasta quantity : ";
       cin>>quant;
       if(Qpasta-Spasta >= quant){
           Spasta=Spasta+quant;
           Total_pasta=Total_pasta+quant*250;
           cout<<"\n\n\t\t"<<quant<<" pasta is the order ";
       }
       else{
           cout<<"\n\t Only"<< Qpasta-Spasta<<"Pasta remaining in hotel ";

       }
       break;
       case 3:
       cout<<"\n\n Enter Noodles quantity : ";
       cin>>quant;
       if(Qnoodles-Snoodles >= quant){
           Snoodles=Snoodles+quant;
           Total_noodles=Total_noodles+quant*200;
           cout<<"\n\n\t\t"<<quant<<" noodles is the order";
       }
       else{
           cout<<"\n\t Only"<< Qnoodles-Snoodles<<"Noodles remaining in hotel ";

       }
       break;
       case 4:
       cout<<"\n\n Enter Burger quantity : ";
       cin>>quant;
       if( Qburger- Sburger>=quant){
           Sburger=Sburger+quant;
           Total_burger=Total_burger+quant*80;
           cout<<"\n\n\t\t"<<quant<<" Burger is the order ";
       }
       else{
           cout<<"\n\t Only"<< Qburger-Sburger<<"Burger remaining in hotel ";

       }
       break;
       case 5:
       cout<<"\n\n Enter Shake quantity : ";
       cin>>quant;
       if(Qshake-Sshake >= quant){
           Sshake=Sshake+quant;
           Total_shake=Total_shake+quant*150;
           cout<<"\n\n\t\t"<<quant<<" Shake is the order ";
       }
       else{
           cout<<"\n\t Only"<< Qshake-Sshake<<"Shake remaining in hotel ";

       }
       break;
       case 6:
       cout<<"\n\n Enter Chicken-roll quantity : ";
       cin>>quant;
       if(Qchicken-Schicken >= quant){
           Schicken=Schicken+quant;
           Total_chicken=Total_chicken+quant*300;
           cout<<"\n\n\t\t"<<quant<<" Chicken-roll is the order ";
       }
       else{
           cout<<"\n\t Only"<< Qchicken-Schicken<<"Chicken-roll remaining in hotel ";

       }
       break;
     case 7:
     cout<<"Details of sales and collection \n\t\t" ;
     cout<<"\n\n Number of rooms we had :"<< Qrooms;
     cout<<"\n\n Number of rooms we gave for rent :"<<Srooms;
     cout<<"\n\n REMAINING ROOMS :"<<Qrooms-Srooms;
     cout<<"\n\n Total rooms collection for the day :"<<Total_rooms;

     cout<<"\n\n Number of pastas we had :"<< Qpasta;
     cout<<"\n\n Number of pastas we sold :"<<Spasta;
     cout<<"\n\n REMAINING PASTAS :"<<Qpasta-Spasta;
     cout<<"\n\n Total pastas collection for the day :"<<Total_pasta;

     cout<<"\n\n Number of noodles we had :"<< Qnoodles;
     cout<<"\n\n Number of noodles we sold :"<<Snoodles;
     cout<<"\n\n REMAINING NOODLES :"<<Qnoodles-Snoodles;
     cout<<"\n\n Total noodles collection for the day :"<<Total_noodles;

     cout<<"\n\n Number of burger we had :"<< Qburger;
     cout<<"\n\n Number of burger we sold :"<<Sburger;
     cout<<"\n\n REMAINING BURGER :"<<Qburger-Sburger;
     cout<<"\n\n Total burger collection for the day :"<<Total_burger;

     cout<<"\n\n Number of shake we had :"<< Qshake;
     cout<<"\n\n Number of shakes we sold :"<<Sshake;
     cout<<"\n\n REMAINING SHAKES :"<<Qshake-Sshake;
     cout<<"\n\n Total shakes collection for the day :"<<Total_shake;

     cout<<"\n\n Number of chicken-rolls we had :"<< Qchicken;
     cout<<"\n\n Number of chicken-rolls we sold :"<<Schicken;
     cout<<"\n\n REMAINING CHICKEN-ROLLS :"<<Qchicken-Schicken;
     cout<<"\n\n Total chicken-rolls collection for the day :"<<Total_chicken;


     case 8:
     exit(0);
     default:
     cout<< " \n Please select the numbers mentioned above";
   }
     goto m;
   
}
