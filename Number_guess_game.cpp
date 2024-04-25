#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    cout<<"\n\t\t\t********* Welcome to the Number Guessing Game *********"<<endl;
    cout<<"\n\t\t\t*****    You have to guess a number between 1 to 100  *****";
    cout<<"\n\t\t\t***************** Lets play *******************";
    cout<<"\n\t\t\t***************** Good Luck ********************"<<endl;

    srand(time(0));
    int randnumber= 1+(rand()%100);

    cout<<"\n ***  You will have total 5 chances to guess the correct number ***"<<endl;
    int chanceLeft=5;
    int Playerchoice;

    for(int i=1;i<=5;i++){
        cout<<"Enter your guess number: ";
        cin>>Playerchoice;

        if(Playerchoice==randnumber){
            cout<<"\n Well played! You Won. "<<Playerchoice<<" is the random number\n";
            cout<<"\t\t\t Thanks for playing...."<<endl;
            cout<<"play the game again with us !\n\n"<<endl;
            break;
        }
        else{
            cout<<"Nope, "<<Playerchoice<<" is not the right number\n";
            if(Playerchoice>randnumber){
                cout<<"The Number is smaller than the number you guess."<<endl;
            }
            else{
                cout<<"The Number is greater than the number you guess."<<endl;
            }

            chanceLeft--;
            cout<<chanceLeft<<" Chance Left."<<endl;
            if(chanceLeft==0){
                cout<<"You couldnot find the Number, it was "<<randnumber<<" ,You Lose !";
                cout<<"Play The Game Again To Win\n \n";
            }

        }
    }
    return 0;
}