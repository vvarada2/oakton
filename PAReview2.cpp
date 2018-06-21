/*
#include <iostream>ReviewdDynamicArraysAndFunctionStub.cpp
 *
 *  Created on: Jan 14, 2018
 *      Author: Vishnu Varada
 program sample output to console:
enter input and output fileNames: in.txt out.txt
8 2 5 4 5 6 7 8
average of numbers in file in.txt = 5.625
 */

#include <iostream>
#include <fstream>
using namespace std;
void readData  (istream& is, int* &a, int size);
void printData (ostream& os, int *a, int size, string& name, double ave);
double findAverage(int *a, int size);
int main()
{
	ifstream fin;
	ofstream fout;
	string fileNameI,fileNameO;
	cout<<"enter input and output fileNames: ";
	cin>>fileNameI>>fileNameO;
	fin.open(fileNameI.c_str());
	fout.open(fileNameO.c_str());
	int size;

	fin >> size;
	int *a= new int[size];
	readData(fin,a,size);
    double ave = findAverage(a,size);
	printData(cout, a, size, fileNameI, ave);
	printData(fout, a, size, fileNameI, ave);

	fin.close();
	fout.close();
}
void readData  (istream& is, int* &a, int size)
{
	int i;

	for(i=0;i<size;i++) {
		is >> a[i];
	}

}
double findAverage(int *a, int size)
{
	int i;
	double total;
	for(i=0;i<size;i++){
		total= total + a[i];
	}
	double ave= total/size;
	return ave;

}
void printData (ostream& os, int *a, int size, string& name, double ave)
{
	for(int i=0;i<size;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<"average of numbers in file in.txt = "<<ave << "\n";

}
