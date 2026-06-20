/*
Maksym Fursin
June 17, 2026
lab 18: console failure and file test
*/

#include <iostream>
#include "lab18_functions_Fursin.cpp"
using namespace std;

int main(){
    cout<<"\n ------ example 1 : console failure test ------"<<endl;
    checknumber();

    cout<<"\n ------ example 2 : console failure test ------"<<endl;
    float n = validatenumber();
    cout<<n<<endl;

    cout<<"\n ------ example 3 : read file ------"<<endl;
    iofiles();

    cout<<"\n ------ example 4 : create file ------"<<endl;
    writefile();

    cout<<"\n ------ example 5 : append data into a file ------"<<endl;
    string filename = "samplefile.txt";
    appendfile(filename);

    cout<<"\n ------ EXERCISE 1 ------"<<endl;
    int a = 15;
    int b = 4;
    cout<<"Result = "<<calculate(a, b)<<endl;

    cout<<"\n ------ EXERCISE 2 ------"<<endl;

    createFile();

    appendFile2("This is the appended line");

    writeFile("newFile.txt", "Hello World!");
    
    return 0;
}