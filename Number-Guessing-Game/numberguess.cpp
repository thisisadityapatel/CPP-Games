#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
   int choice;
   cout<<"\n NUMBER GUESSING GAME";
   cout<<"\n --------------------";
   cout<<"\n";
   cout<<"\n Enter the desired level : ";
   cout<<"\n 1.Simple";
   cout<<"\n 2.Crazy";
   cout<<"\n 3.Mahn!! I'm Out'a here...level.";
   cout<<"\n Enter the choice: ";
   cin>>choice;

	clrscr();

	if(choice==1)
	{
		cout<<"\n Simple Leve. ";
		cout<<"\n";
      randomize();
  		int tries=0,numguess,compgen,score=0;
  		compgen=random(50-1+1)+1;
  	do
  	{
  		cout<<"\n Enter the number guessed ";
  		cin>>numguess;

   	if(numguess>compgen)
   	{
   		cout<<"\n Too High!! ";
   		cout<<"\n TRY AGAIN";
   	}

     	if(numguess<compgen)
     	{
     		cout<<"\n Too Low!! ";
     		cout<<"\n TRY AGAIN ";
     	}

      if(numguess==compgen)
      {
        cout<<"\n U Guessed It...!! ";
        score+=10;
        cout<<"\n Score: "<<score;
      }

      tries++;

   }while(tries<=9);


   if(tries>9)
   {
   cout<<"\n  Out of Tries!! Next time Bud.... ";
   }

}

else if(choice==2)
{
	cout<<"\n Crazy Level ";
	cout<<"\n";
  	randomize();
  	int tries=0,numguess,compgen,score=0;
  	compgen=random(100-1+1)+1;
  	do
  	{
  		cout<<"\n Enter the number guessed ";
  		cin>>numguess;

   	if(numguess>compgen)
   	{
   		cout<<"\n Too High!! ";
   		cout<<"\n TRY AGAIN";
   	}

     	if(numguess<compgen)
     	{
     		cout<<"\n Too Low!! ";
     		cout<<"\n TRY AGAIN ";
     	}

      if(numguess==compgen)
      {
        cout<<"\n U Guessed It...!!";
        score+=10;
        cout<<"\n Score: "<<score;
      }

      tries++;

   }while(tries<=8);


   if(tries>8)
   {
   cout<<"\n Out of Tries!! Next time Bud....  ";

   }

}

if(choice==3)
{
 cout<<"\n All the best Daredevil!! ";
 cout<<"\n";


  randomize();
  int tries=0,numguess,compgen,score=0;
  compgen=random(150-1+1)+1;
  do
  {
  cout<<"\n Enter the number guessed ";
  cin>>numguess;

   if(numguess>compgen)
   {
   cout<<"\n Too High!! ";
   cout<<"\n TRY AGAIN";
   }

     if(numguess<compgen)
     {
     cout<<"\n Too Low!! ";
     cout<<"\n TRY AGAIN ";
     }

        if(numguess==compgen)
        {
        cout<<"\n U Guessed It...!! ";
        score+=10;
        cout<<"\n Score: "<<score;
        }

        tries++;

   }while(tries<=7);


   if(tries>7)
   {
   cout<<"\n Out of Tries!! Next time Bud....  ";
   }

}

getch();
}
