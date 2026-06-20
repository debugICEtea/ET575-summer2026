/*
Maksym Fursin
June 17, 2026
lab 17: 2D array
*/

#include <iostream>
#include "lab17_functions_Fursin.cpp"
using namespace std;

int main(){
     cout<<"\n ------ example 1 : array ------"<<endl;

      const int size = 10;
      int a[size] = {0};
      int listsize;

      filluparray(a,listsize,size);
      printelements(a,listsize);

      cout<<"\n ------ example 2 : searching in 2d array ------"<<endl;

     int targetnumber = 10;
     int foundindex = search(a,listsize, targetnumber);
     cout<<"Index of found number : "<<foundindex<<endl;

     cout<<"\n ------ example 3 : print 2d array element ------"<<endl;

     intro2darray(); 
     
     const int rowsize = 2;
     int n[rowsize][3] = {{1,2,3},{4,5,6}};

     printarray(n,rowsize);

     cout<<"\n ------ example 4 : 2d array  ------"<<endl;
     const int students = 3;
     const int subjects = 4;
     int grades[students][subjects]{
        {85,90,78,92},
        {70,88,84,76},
        {95,91,89,93}
     };

     int studentavg[students];
     studentaverage(grades,students,subjects,studentavg);
     printavg(studentavg, students);

     cout<<"\n ------ EXERCISE A  ------"<<endl;

     int array[5] = {70,88,84,76,50};
     int minNumber = findMin(array);
     cout << "The minimum number is " << minNumber << endl;


     cout<<"\n ------ EXERCISE B  ------"<<endl;
     const int ARRAY_SIZE = 5;

     int arrayNumber2D[ARRAY_SIZE][ARRAY_SIZE] = {0};
     int max = 200;
     int min = 150;

     populateArray2D(arrayNumber2D);

     int totalNumber = range2D(arrayNumber2D, min, max);

     cout<<"\nArray has "<<totalNumber<<" number(s) between "<<min<<" and "<<max<<endl;

    return 0; 
}