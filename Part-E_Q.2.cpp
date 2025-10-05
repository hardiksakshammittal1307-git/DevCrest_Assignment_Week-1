#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    srand((time(0)));
    int secretnumber = rand()%100+1;
    int guess;
    int attempts=0;

    cout<<"===================================="<<endl;
    cout<<"  Welcome To Number Guessing Game!  "<<endl;
    cout<<"===================================="<<endl;
    cout<<"I Have Chosen a Number Between 1 To 100 "<<endl;
    cout<<"Can You Guess It?"<<endl<<endl;

    do{
        cout<<"Enter Your Guess: "<<endl;
        cin>>guess;
        attempts++;

        if(guess > secretnumber){
            cout<<"Too High! Try Again."<<endl;
        }
        else if (guess < secretnumber){
            cout<<"Too Low! Try Again."<<endl;
        }
        else {
            cout<<"Bingo! Your Guess is Correct."<<endl;
            cout<<"You Guessed The Number in "<<attempts<<" Attempts. "<<endl;
        }
    }while(guess!=secretnumber);
    
    cout<<"Thanks For Playing!"<<endl;

return 0;
}