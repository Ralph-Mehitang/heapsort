//Ralph Mehitang
//Joseph Anderson
//Cosc-320
//lab3

#include <iostream>
#include <stdio.h>
#include <math.h> 
#include <chrono>
#include "heapsort.h"
using namespace std;

//swap function
void heapsort::swap(int &a, int &b){
	int tmp=a;
	a=b;
	b =tmp;
}
//print function
void heapsort:: printarr(int arr[],int n){
int count=1; // tree print
for (int i = 0; i <n; i++)
{
	//treeprint
if (i==count){
cout<<endl;
count*=2;}
	cout<<arr[i]<<" ";
}
}
void heapsort::maxheapify(int arr[],int n, int i){
int largenode=i; // sets largenode as root node
int l=2*i+1; //sets left node
int r=2*i+2; //sets right node
//if left child is greater than root
if(l<n && arr[l]>arr[largenode]){
	largenode=l;
}
//if right child is greater than the root
if (r<n && arr[r]>arr[largenode])
{
	largenode=r;
}
//swap and continue heapifying if largenode is not the root
if (largenode != i)
{
	swap(arr[i],arr[largenode]);
	//recursively heapify the affected subtree.
	maxheapify(arr,n,largenode);
}


}
//build maxheap
void heapsort::buildmaxheap(int arr[],int n){

	for (int i = (n / 2)-1; i >= 0; i--)
    maxheapify(arr,n,i);

}
//heapsort
void heapsort::hsort(int arr[], int n){
buildmaxheap(arr,n); // call buildmaxheap
//heapsort algorithm
for (int k = n-1; k >=0;k--)
{	
swap(arr[0],arr[k]);
//heapify root element to get highest element
maxheapify(arr,k,0);

}

}


