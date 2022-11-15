

#include <cstdlib>
#include <string>
#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;
/*
 * 
 */
int main() {
    double sideA;
 double sideB;
 double sideC;
double radius;
string fName;
string lName;
int age;
double presentBalance;
double rate;
char ascii;
ifstream inFile;
ofstream outFile;
inFile.open("inData.txt");
outFile.open("outData.txt");
inFile >> sideA >> sideB >> sideC;
cout << sideA << " " << sideB << " " << sideC << endl;
inFile >> radius;
cout<<"Circle: " << radius << endl;
inFile >> fName >> lName >> age;
cout<<"First Name "<<fName<<endl;
cout<<"last Name "<<lName<<endl;
cout<<"Age :" <<age <<endl;
inFile >> presentBalance >> rate;
cout << "Balance and rate " << presentBalance << rate << endl;
inFile >> ascii;
cout << "The character: " <<ascii << endl;

outFile << "Triangle:" <<endl;
outFile << "Side A=" << sideA << ", Side B=" << sideB <<", SideC=" <<sideC;
outFile << ", Area" << sideA*sideB/2 << ",preimeter=" << sideA+sideB+sideC <<endl;
outFile << endl;
outFile << "Circle:" <<endl;
outFile << "Radius=" << radius << "area =" << pi*radius*radius <<", circumference =" << radius*2*pi<<endl;
outFile << endl;
outFile << "Name" << fName <<" "<< lName <<"Age:" << age <<endl;
outFile << endl;
outFile << "Beginning Balance = " << presentBalance <<", interet rate =" << rate <<endl;
outFile << "Balance at end of month=" << presentBalance*(1+rate/1200)<<endl;
outFile << endl;
outFile << "the character that comes before" << ascii << "in the AsCii set is" << char(acii-1)<<endl;

inFile.close();
outFile.close();


    return 0;
}
