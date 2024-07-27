#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
//NUMBER GUESSING GAME
int level(int n,char ch)
{
    while(1)
    {
        srand(time(0));
        int secretnumber=1+(rand()%100);
        int playerschoice;
        //EASY LEVEL:
        if(n==1 && ch=='#')
        {
            cout<<"Hey there! You have entered 1"<<endl;
            cout<<endl;
            cout<<"You have 10 choices for this level to find the secret number between 1 and 100"<<endl;
            cout<<endl;
            int choicesleft=10;
            for(int i=1;i<=10;i++)
            {
                cout<<"\nEnter the number: ";
                cin>>playerschoice;
                if(playerschoice==secretnumber)
                {
                    cout<<"Hey player,Well played!Your guess was a secret number!CONGRAGULATIONS!"<<endl;
                    cout<<endl;
                    cout<<"Thanks for Playing!!"<<endl;
                    cout<<endl;
                    cout<<"If you feel interesting play the game again with us!"<<endl;
                    cout<<endl;
                    break;
                }
                else{
                    cout<<"Sorry! Your guess was not a secret number"<<endl;
                    cout<<"No worries,Try again!";
                    cout<<endl;
                    if(playerschoice>secretnumber)
                    {
                        cout<<"HINT:The secret number is smaller than the number you have chosen!"<<endl;
                        cout<<"No worries,Try again!";
                        cout<<endl;
                    }
                    else{
                        cout<<"HINT:The secret number is greater than the number you have chosen!"<<endl;
                        cout<<"No worries,Try again!";
                        cout<<endl;
                    }
                    choicesleft--;
                    cout<<choicesleft<<"choicesleft"<<endl;
                    if(choicesleft==0)
                    {
                        cout<<"You couldn't find the secret number ,it was "<<secretnumber<<",Sorry!You lose!!\n\n";
                        cout<<"We wish you to play again to win the game!!";
                        cout<<endl;
                        cout<<endl;
                    }

                }
            }
        }
        //MEDIUM LEVEL
        else if(n==2 && ch=='&')
        {
            cout<<"Hey there! You have entered 2"<<endl;
            cout<<endl;
            cout<<"You have 7 choices for this level to find the secret number between 1 and 100"<<endl;
            cout<<endl;
            int choicesleft=7;
            for(int i=1;i<=7;i++)
            {
                cout<<"\nEnter the number: ";
                cin>>playerschoice;
                if(playerschoice==secretnumber)
                {
                    cout<<"Hey player,Well played!Your guess was a secret number!CONGRAGULATIONS!"<<endl;
                    cout<<endl;
                    cout<<"Thanks for Playing!!"<<endl;
                    cout<<endl;
                    cout<<"If you feel interesting play the game again with us!"<<endl;
                    cout<<endl;
                    break;
                }
                else{
                    cout<<"Sorry! Your guess was not a secret number"<<endl;
                    cout<<"No worries,Try again!";
                    cout<<endl;
                    if(playerschoice>secretnumber)
                    {
                        cout<<"HINT:The secret number is smaller than the number you have chosen!"<<endl;
                        cout<<"No worries,Try again!";
                        cout<<endl;
                    }
                    else{
                        cout<<"HINT:The secret number is greater than the number you have chosen!"<<endl;
                        cout<<"No worries,Try again!";
                        cout<<endl;
                    }
                    choicesleft--;
                    cout<<choicesleft<<"choicesleft"<<endl;
                    if(choicesleft==0)
                    {
                        cout<<"You couldn't find the secret number ,it was "<<secretnumber<<",Sorry!You lose!!\n\n";
                        cout<<"We wish you to play again to win the game!!";
                        cout<<endl;
                        cout<<endl;
                    }

                }
            }
        }
        //HARD LEVEL
        else if(n==3 && ch=='*'){
            cout<<"Hey there! You have entered 3"<<endl;
            cout<<endl;
            cout<<"You have 5 choices for this level to find the secret number between 1 and 100"<<endl;
            cout<<endl;
            int choicesleft=5;
            for(int i=1;i<=5;i++)
            {
                cout<<"\nEnter the number: ";
                cin>>playerschoice;
                if(playerschoice==secretnumber)
                {
                    cout<<"Hey player,Well played!Your guess was a secret number!CONGRAGULATIONS!"<<endl;
                    cout<<endl;
                    cout<<"Thanks for Playing!!"<<endl;
                    cout<<endl;
                    cout<<"If you feel interesting play the game again with us!"<<endl;
                    cout<<endl;
                    break;
                }
                else{
                    cout<<"Sorry! Your guess was not a secret number"<<endl;
                    cout<<"No worries,Try again!";
                    cout<<endl;
                    if(playerschoice>secretnumber)
                    {
                        cout<<"HINT:The secret number is smaller than the number you have chosen!"<<endl;
                        cout<<"No worries,Try again!";
                        cout<<endl;
                    }
                    else{
                        cout<<"HINT:The secret number is greater than the number you have chosen!"<<endl;
                        cout<<"No worries,Try again!";
                        cout<<endl;
                    }
                    choicesleft--;
                    cout<<endl;
                    cout<<choicesleft<<"choicesleft"<<endl;
                    if(choicesleft==0)
                    {
                        cout<<"You couldn't find the secret number ,it was "<<secretnumber<<",Sorry!You lose!!\n\n";
                        cout<<"We wish you to play again to win the game!!";
                        cout<<endl;
                        cout<<endl;
                    }

                }
            }
        }
        else if(n==0)
        {
            cout<<"The game is end!";
        }

    }
}
int main()
{
    cout<<"\t\t************************************************************************************************\t\t";
    cout<<"\n\t\t\tHEY THERE! A WARM WELCOME TO NUMBER GUESSING GAME!HOPE YOU WILL HAVE FUN!\t\t"<<endl;
    cout<<"\t\t************************************************************************************************\t\t";
    cout<<endl;
    cout<<"\n\t\t---The Game is very simple and Interesting!---\t\t";
    cout<<endl;
    cout<<"\n\t\t...It is all about guessing a random number!...\t\t"<<endl;
    cout<<endl;
    cout<<"\n\t\tYou have to guess a number between ('1 and 100')\t\t"<<endl;
    cout<<endl;
    cout<<"\n\t\t*You will have Three levels*"<<endl;
    cout<<endl;
    cout<<"\n\t\t(*(EASY)*, *(MEDIUM )*, *(HARD)*\t\t"<<endl;
    cout<<endl;
    cout<<"\n\t\t!.!.!You will have a limited number of choices based on the difficulty level you choose!.!.!\t\t"<<endl;
    cout<<endl;
    cout<<"\t 1 for EASY->#\t"<<endl;
    cout<<endl;
    cout<<"\t 2 for MEDIUM->&\t"<<endl;
    cout<<endl;
    cout<<"\t 3 for HARD->*\t"<<endl;
    cout<<endl;
    cout<<"\t 0 for ending the game\t"<<endl;
    cout<<endl;
    cout<<"\t\t***************************************\t\t";
    cout<<"ENTER THE DIFFICULTY LEVEL: ";
    cout<<"\t\t***************************************\t\t";
    cout<<endl;
    int difficultylevel;
    char k;
    cin>>difficultylevel;
    cout<<endl;
    cin>>k;
    level(difficultylevel,k);

}
