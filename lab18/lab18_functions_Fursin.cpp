/*
Maksym Fursin
June 17, 2026
lab 18: 
*/
#include <fstream>
#include <iostream>
using namespace std;

void checknumber(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    if(cin.fail()){cout<<"Eror ! Dismatched data type !"<<endl;}
    else{cout<<"Enetered number = "<<num<<endl;}

    cin.clear();
    cin.ignore(10000,'\n');

    cout<<"--- END OF A FUNCTION ---"<<endl;
}

//ex 2
float validatenumber(){
    float n;
    
    do{
        cout<<"Enter a number :";
        if(!(cin>>n)){
            cout<<"Invalid data type!"<<endl;
            cin.clear();
            cin.ignore(10000,'\n');
        }
        else {return n;}
    }while(true);
}

//ex 3 
void iofiles(){
    ifstream fin;
    ofstream fout;

    //read file
    fin.open("samplefile.txt");

    string line;
    int lineCounter = 1;

    while(getline(fin, line)){
        cout<<"Line "<<lineCounter<<" = "<<line<<endl;
        lineCounter++;
    }
    fin.close();
}

void writefile(){
    ofstream fout;
    fout.open("outputfile.txt");

    fout<<"Good Morning!"<<endl;
    for(int n = 3; n>0; n--){
        fout<<n<<endl;
    }
    fout<<"End of file"<<endl;

    fout.close();
}

//ex 5
void appendfile(string filenmae){
    ofstream fout;
    fout.open(filenmae, ios::app);
    fout<<"Maksym Fursin"<<endl;
    fout.close();
}

//exercise 1

double calculate(int num1, int num2){
    char op;
    cout<<"Enter an operation (+, -, *, /, %): ";
    cin>>op;

    while(cin.fail() || (op!='+' && op!='-' && op!='*' && op!='/' && op!='%'))
    {
        cin.clear();
        cin.ignore(10000, '\n');

        cout<<"Invalid operation. Enter again: ";
        cin>>op;
    }

    if(op == '+')
    {return num1 + num2;}
    else if(op == '-')
    {return num1 - num2;}
    else if(op == '*')
    {return num1 * num2;}
    else if(op == '/')
    {return (double)num1 / num2;}
    else
    {return num1 % num2;}
}

//exercise 2
void createFile(){

    ofstream fout;
    fout.open("data_user.txt");

    fout<<"This is my output file - Maksym Fursin"<<endl;

    fout.close();
}

void appendFile2(string message){ // i added 2 at the end because we allready created simular function in class

    ofstream fout;
    fout.open("data_user.txt", ios::app);

    fout<<message<<endl;

    fout.close();
}

void writeFile(string fileName, string text)
{
    ofstream fout;
    fout.open(fileName);

    fout<<text<<endl;

    fout.close();
}