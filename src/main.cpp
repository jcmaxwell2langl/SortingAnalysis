/*
 * main.cpp
 *
 *  Created on: Jul 19, 2018
 *      Author: louise0
 */
#include <fstream>
#include <iostream>
#include <string>
#include <stdio.h>
#include "insertion.h"
#include <ctime>
#include <chrono>
using namespace std;
using namespace std::chrono;

void runTime(int *arr,int size){
	duration<double> time_span;
//change algorithm
	high_resolution_clock::time_point t1 = high_resolution_clock::now();
	insertionSort(arr, size);
	high_resolution_clock::time_point t2 = high_resolution_clock::now();

	time_span = duration_cast<duration<double> > (t2 - t1);

	printArray(arr,size);
	std::cout << "It took me " << time_span.count() << " seconds.";
		std::cout << std::endl;
}
int main(){
	ifstream file;
	//change path
	string a="/Users/louise0/Documents/College/Junior Summer/DataStructure/workspace/Project2/SortingAnalysis/src/ascending/50000.txt";
	string r="/Users/louise0/Documents/College/Junior Summer/DataStructure/workspace/Project2/SortingAnalysis/src/version 1/50000.txt";
	string d="/Users/louise0/Documents/College/Junior Summer/DataStructure/workspace/Project2/SortingAnalysis/src/descending/50000d.txt";

	//change size and path
	int size = 50000;
	//file.open(a);
	file.open(d);
	//file.open(d);


	int *arr= new int[size];
	string str;
	for (int i =0; file>>str; i++){
		arr[i]= stoi(str);
	}
	file.close();
	runTime(arr, size);
	delete []arr;
	arr=0;
	return 0;
}





