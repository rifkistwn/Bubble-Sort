/*
M. Rifki Setiawan - 1717051004
M. Rama Wicaksono - 1717051062
Yosua Sandi S	  - 1717051064
Lofanny Wahyu D   - 1757051010
*/
#include <iostream>
using namespace std;

void SelectionSort (int data[], int n){
    int y;
    for (int i=0;i<n-1;i++){
	for (int j=i+1;j<n;j++){
		if (data[i] > data[j]){
			y = data[i];
			data[i] = data[j];
			data[j] = y;
		}
	}
    }
}

void BubbleSort (int data[], int n){
    int y;
    for (int i=0; i<n; i++){
	for(int j=0; j<n; j++){
		if (data[j]>data[j+1]){
			y=data[j];
			data[j]=data[j+1];
			data[j+1]=y;
		}
	}
    }
}

void display(int data[],int n){
    for( int i=0;i<n;i++)
    cout << data[i] << " ";
}

main(){
	//SelectionSort
	/*int data [] = { 20, 8, 5, 10, 7};
	cout<<"Data : ";
	display(data,5);
	cout << endl;
	SelectionSort(data,5);
	cout<<"Selection Sort : ";
	display(data,5);
	cout << endl;*/
	
	//BubbleSort
	/*int data[]={77, 42, 35, 12, 101, 5};
	cout<<"Data : ";
	display(data,6);
	cout<<endl;
	BubbleSort(data,6);
	cout<<"Bubble Sort : ";
	display(data,6);
	cout<<endl;*/

	return 0;
}
