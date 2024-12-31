#include<bits/stdc++.h>
using namespace std;
int main(){

    int num;
    int guess;
    int tries;

    srand(time(0));
    num = rand() % 50 + 1;
        cout<<"**********NUMBER GUESS GAME***************************\n";

    do{
        cout<<"Enter a guess between 1 and 50: ";
        cin>>guess;
        tries++;

        if(guess > num){
            cout<<"Too high!"<<endl;
        }
        else if(guess < num){
            cout<<"Too low!"<<endl;
        }
        else{
            cout<<"Congratulations! You guessed the number in "<<tries<<" tries!"<<endl;
        }

    }while(guess != num);

   cout<<"******************************************************\n";
    return 0;
}