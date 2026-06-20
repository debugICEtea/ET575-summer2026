/*
Maksym Fursin
June 17, 2026
lab 17: 
*/
#include <iostream>
#include <random>
using namespace std;

//example 1
void filluparray(int *arr, int &numbersure, int sizearray){
    int number, index=0;
    do{
        cout<<"Enter a positive number: ";
        cin>>number;
        if(number > 0){
            arr[index] = number;
            index++;
        }
    } while(number > 0 && index < sizearray);
    numbersure = index;
}


void printelements(int *arr, int numberuserindex){
    for(int i = 0; i<numberuserindex; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

int search(int *arr,int &numberuserindex, int targetnumber){
    int index = 0;
    bool found = false;
    while (!found && (index < numberuserindex))
    {
        if(targetnumber == arr[index]) found = true;
        else{index++;}
    }

    if(found){return index;}
    else{return -1;}   
}

//example 2
void intro2darray(){
    int graylevel[255][10];

    int temperature[2][5] = {
        {78, 56, 60 },
        {100, 89, 92, 90, 82 }
    };
    cout<<"The temperature in 1st row, 2nd column "<<temperature[0][1]<<endl;
}

void printarray(int arr[][3],int rows){
    for(int r = 0; r<rows; r++){
        for(int c = 0; c<3; c++){
            cout<<arr[r][c]<<"\t";
        }
        cout<<endl;
    }
}

//example 4
void studentaverage(int (*arr)[4], int sizestudents, int sizesubjects, int *avg){
    int index = 0;
    for(int r = 0; r<sizestudents; r++){
        int sum = 0;
        for(int c = 0; c<sizesubjects; c++){
            sum += arr[r][c];
        }
        //cout<<"Student "<<i+1<<" average grade = "<<(sum/sizesubjects)<<endl;
        avg[index] = sum/sizesubjects;
        index++;
    }
}

void printavg(int *avg, int sizestudents){
    for(int i=0; i<sizestudents; i++){
        cout<<"Student "<<i+1<<" average grade = "<<(avg[i])<<endl;
    }
}

//------ EXERCISE A  ------
int findMin(int *arr){

    int min = arr[0];

    for(int i = 0; i < 5; i++){ // because of an example code i assume that the lenght of the array is static
        if(arr[i] < min){min = arr[i];}
    }

    return min;
}

//------ EXERCISE B  ------

const int ARRAY_SIZE = 5;

void populateArray2D(int arr[][ARRAY_SIZE]){

    for(int i = 0; i < ARRAY_SIZE; i++){
        for(int j = 0; j < ARRAY_SIZE; j++){

            arr[i][j] = 1 + rand() % 255;
        }
    }
}

int range2D(int arr[][ARRAY_SIZE], int min, int max){
    
    int count = 0;

    for(int i = 0; i < ARRAY_SIZE; i++){
        for(int j = 0; j < ARRAY_SIZE; j++){
            if(arr[i][j] >= min && arr[i][j] <= max) {count++;}
        }
    }
    return count;
}