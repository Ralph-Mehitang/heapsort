#include "heapsort.h"
#include <iostream>
#include <chrono>
using namespace std;
void driverprog(){
	int input;
	heapsort vim= heapsort();
	//menu option
	while(input!=5){
	
	cout<<"------------------"<<endl;

	cout<<"Main Menu"<<endl;
	cout<<"press 1 to test randomly generated numbers: \n";
        cout<<"press 2 to test arrays that are already sorted: \n";
	cout<<"press 3 to test arrays that contain duplicate elements: \n"; 
	cout<<"press 4 to test arrays that are sorted backwards: \n";
	cout<<"press 5 to end the program: \n";
	cin>>input;
			
	switch(input){


	case 1: {

	int len;
		cout<<"How many numbers total do you want to be generated in array?"<<endl;
		cin>>len;

		//creates and fills array with random values up to size of len from user input
		int *arr= new int [len];
		for(int i=0; i < len; i++)
		{
			arr[i] = (rand()%100)+1;
		}
//takes in user input to create size of array and choose which sort implementation user wants to use.

		cout<<"Original Array "<<endl;
//		vim.printarr(arr,len);
		auto start = std::chrono::system_clock::now(); //time takes for sorting
		vim.hsort(arr,len); // calls heapsort	
	auto end = std::chrono::system_clock::now(); 
		cout<<endl;
			cout<<"Now this is the sorted array:"<<endl;
			vim.printarr(arr,len);

	std::chrono::duration<double> elapsed_seconds = end-start;
	std::time_t end_time = std::chrono::system_clock::to_time_t(end);
	std::cout << "finished at " << std::ctime(&end_time)
	<< "elapsed time: " << elapsed_seconds.count() << "s\n";
		

	
delete [] arr;
	break;
		}

//test for arrays that are already sorted	
	case 2: {	

	int len;
		cout<<"How many numbers total do you want to be generated in array?"<<endl;
		cin>>len;

		//creates and fills array with random values up to size of len from user input
		int *arr= new int [len];
		for(int i=0; i < len; i++)
		{
			arr[i] = (rand()%100)+1;
		}
		
		
		cout<<"Original Array "<<endl;
		vim.hsort(arr,len);	
//		vim.printarr(arr,len);
			auto start = std::chrono::system_clock::now();
	vim.hsort(arr,len); //time takes for sorting

	auto end = std::chrono::system_clock::now();
			cout<<endl;
			cout<<"Now this is the sorted array:"<<endl;
			vim.printarr(arr,len);
			
	std::chrono::duration<double> elapsed_seconds = end-start;
	std::time_t end_time = std::chrono::system_clock::to_time_t(end);
	std::cout << "finished at " << std::ctime(&end_time)
	<< "elapsed time: " << elapsed_seconds.count() << "s\n";
		
		

delete [] arr;
	
	break;
	}
	//test for duplicated arrays
	case 3: 	{
	
	int len;
		cout<<"How many numbers total do you want to be generated in array?"<<endl;
		cin>>len;

		//creates and fills array with random values up to size of len from user input
		int *arr= new int [len];
		for(int i=0; i < len; i++)
		{
			arr[i] = (rand()%20)+1;
		}	

		cout<<"Original Array "<<endl;
//		vim.printarr(arr,len);
			auto start = std::chrono::system_clock::now();
	vim.hsort(arr,len); //time takes for sorting

	auto end = std::chrono::system_clock::now();
			cout<<endl;
			cout<<"Now this is the sorted array:"<<endl;
			vim.printarr(arr,len);
			
	std::chrono::duration<double> elapsed_seconds = end-start;
	std::time_t end_time = std::chrono::system_clock::to_time_t(end);
	std::cout << "finished at " << std::ctime(&end_time)
	<< "elapsed time: " << elapsed_seconds.count() << "s\n";
			
delete [] arr;
break;
		}
//testing backward sorted arrays
	case 4: {
	
	int len;
		cout<<"How many numbers total do you want to be generated in array?"<<endl;
		cin>>len;

		//creates and fills array with random values up to size of len from user input
		int *arr= new int [len];
		for(int i=0; i < len; i++)
		{
			arr[i] = (len-(i+1));;
		}
		cout<<"Original Array "<<endl;
//		vim.printarr(arr,len);
			auto start = std::chrono::system_clock::now();
	vim.hsort(arr,len); //time takes for sorting
	auto end = std::chrono::system_clock::now();
			cout<<endl;
			cout<<"Now this is the sorted array:"<<endl;
			vim.printarr(arr,len);
			
	std::chrono::duration<double> elapsed_seconds = end-start;
	std::time_t end_time = std::chrono::system_clock::to_time_t(end);
	std::cout << "finished at " << std::ctime(&end_time)
	<< "elapsed time: " << elapsed_seconds.count() << "s\n";
		
	
delete [] arr;
	break;
	}
cout<<" "<<endl;
}
}
}
int main(){
	driverprog();
	return 0;
}
