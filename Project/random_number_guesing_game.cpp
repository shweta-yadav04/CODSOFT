#include<iostream>
#include<ctime>
#include<cstdlib>
 
using namespace std;

int main()
{
    cout<<"   "<<"Welcome to Number Guessing Game !! "<<"    "<<endl;

    cout<<"RULES :-"<<endl<<"1. YOU WILL GET THE CHANCE ACCORDING TO THE DIFFICULTY LEVEL YOU CHOOSE"<<endl;

    cout<<endl<<endl;

    cout<<"2.YOU HAVE TO  GUESS THE NUMBER BETWEEN 1 AND 100 "<<endl<<endl<<endl;

    cout<<"1 - DIFFICULT LEVEL"<<endl<<"2 - MEDIUM LEVEL"<<endl<<"3 - EASY LEVEL"<<endl<<"4 - EXIT THE GAME"<<endl<<endl;




    //taking input from user for the difficulty 
    int level;
    cout<<"Enter the level you want to choose bbetween 1 to 4 :";
    cin>>level;



// now we will generate random number each time the game stARts
        
        srand(time(0));
        int randomNum = (rand() % (100-1))+1;
        int guessNum;




if(level==1) 
{
    cout<<"YOU CHOOSED EASY LEVEL! ,"<<"YOU WILL GET 5 CHANCES!";
   int chancesLeft = 7;

   for(int i=1;i<=5;i++)
   {
    cout<<"    ENTER THE NUMBER:     ";
    cin>>guessNum;
     
     //condition checking
     if(guessNum==randomNum)
     {
        cout<<"hurray!! YOU GUESSES IT RIGHT !"<<endl;
        break;
     }
     else if(guessNum<randomNum)
     {
        cout<<"IT'S HIGH NUMBER i.e. it's greater than random number.."<<endl;
     }
     else {
        cout<<"IT'S LOW NUMBER i.e. it's less than random number.."<<endl;
     }
     chancesLeft--;
     cout<<"Chances lest are :"<<chancesLeft<<endl;
     if(chancesLeft==0)
     {
        cout<<"Better Luck Next Time and Try again"<<endl;
     }
   }
}

//for medium level

else if(level==2) 
{
    cout<<"YOU CHOOSED MEDIUM LEVEL! ,"<<"YOU WILL GET 3 CHANCES!";
   int chancesLeft = 3;


   for(int i=1;i<=3;i++)
   {
    cout<<"    ENTER THE NUMBER:     ";
    cin>>guessNum;
     
     //condition checking
     if(guessNum==randomNum)
     {
        cout<<"hurray!! YOU GUESSES IT RIGHT !"<<endl;
        break;
     }
     else if(guessNum>randomNum)
     {
        cout<<"IT'S HIGH NUMBER i.e. it's greater than random number.."<<endl;
     }
     else {
        cout<<"IT'S LOW NUMBER i.e. it's less than random number.."<<endl;
     }
     chancesLeft--;
     cout<<"Chances lest are :"<<chancesLeft<<endl;
     if(chancesLeft==0)
     {
        cout<<"Better Luck Next Time and Try again"<<endl;
     }
   }
}



else if(level==3) 
{
    cout<<"YOU CHOOSED DIFFICULT LEVEL! ,"<<"YOU WILL GET 2 CHANCES!"<<endl;
   int chancesLeft = 2;


   for(int i=1;i<=2;i++)
   {
    cout<<"    ENTER THE NUMBER:     ";
    cin>>guessNum;
     


     //condition checking
     if(guessNum==randomNum)
     {
        cout<<"hurray!! YOU GUESSES IT RIGHT !"<<endl;
        break;
     }
     else if(guessNum>randomNum)
     {
        cout<<"IT'S HIGH NUMBER i.e. it's greater than random number.."<<endl;
     }
     else {
        cout<<"IT'S LOW NUMBER i.e. it's less than random number.."<<endl;
     }
     chancesLeft--;
     cout<<"Chances lest are :"<<chancesLeft<<endl;
     if(chancesLeft==0)
     {
        cout<<"Better Luck Next Time and Try again"<<endl;
     }
   }
}


else if(level==4)
{
    cout<<"YOU DID NOT CHOOSE ANY LEVEL "<<endl;
}

}