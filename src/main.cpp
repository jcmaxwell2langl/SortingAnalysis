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
int main(){
	ifstream file;
	file.open("/Project2/SortingAnalysis/src/ascending/5000.txt");
	int *arr= new int [5000];
	string str;
	for (int i =0; file>>str; i++){

		arr[i]= stoi(str, nullptr, 10);
	}

	file.close();
	high_resolution_clock::time_point t1 = high_resolution_clock::now();
	insertionSort(arr, 5000);
	high_resolution_clock::time_point t2 = high_resolution_clock::now();
	duration<double> time_span = duration_cast<duration<double> > (t2 - t1);
	std::cout << "It took me " << time_span.count() << " seconds.";
	std::cout << std::endl;
	//printArray(arr, 5000);
	return 0;

}


