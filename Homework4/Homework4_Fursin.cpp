/*
Maksym Fursin
June 17, 2026
Homework 4 : Arrays 
*/
#include <random>
#include <iostream>
using namespace std;

void winningDigits(int arr[]){
 int lenght = 5;
 for(int i = 0; i < lenght; i++) {arr[i] = 1 + rand() % 19;}
}

void userTicket(int arr[]){
    int test;
    int lenght = 5;
    int i = 0;

    while(i < lenght){
    cout<<"Eneter your ticket's "<<i + 1<<" number (1 - 19) : ";
    cin>>test;
    if(test >= 1 && test <= 19){arr[i] = test; i++;}
    else{cout<<"Error. Invalid number entered Try again \t";}
    }
}

void checkRepeat(int win[], int user[]){
    for(int i = 0; i < 5; i++){
        for(int j = i + 1; j < 5; j++){
            //checking generated digits, and replacing them if duplicate found
            while(win[i] == win[j]){win[j] = 1 + rand() % 19;}

            //checking generated user input for duplicates
            while(user[i] == user[j]){
                cout<<"Number "<<j + 1<<" is a duplicate. Enter another number : ";
                cin>>user[j];

                while(user[j] < 1 || user[j] > 19){
                    cout<<"Invalid number. Enter again: ";
                    cin>>user[j];
                }
            }
        }
    }
}
int checkWinner(int win[], int user[]){
    int match = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++)
            if(win[i] == user[j]) match++;
    }

    return match;
}

void printResult(int win[], int user[], int match){
    cout<<"Winning digits = ";

    for(int i = 0; i < 5; i++) {cout<<win[i]<<" ";}
    cout<<endl;

    cout<<"User ticket = ";
    for(int i = 0; i < 5; i++) {cout<<user[i]<<" ";}
    cout<<endl;

    cout<<"Match numbers = "<<match<<endl;
}


int main(){

    srand(time(0));

    int winning[5];
    int ticket[5];

    winningDigits(winning);

    userTicket(ticket);

    checkRepeat(winning, ticket);

    int match = checkWinner(winning, ticket);

    printResult(winning, ticket, match);

    return 0;
}