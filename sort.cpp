#include <iostream>
using namespace std;

void SelectionSort (int data[], int n){
    int tmp;
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

void display(int data[],int n){
    for( int i=0;i<n;i++)
    cout << data[i] << " ";
}

main(){
	int data [] = { 20, 8, 5, 10, 7};
	cout<<"Data : ";
	display(data,5);
	cout << endl;
	SelectionSort(data,5);
	cout<<"Selection Sort : ";
	display(data,5);
	cout << endl;
	
	int i;
	int j;
	int n;
	int data[100], simpan, k;
	cout<<"Masukan Banyak Data = ";
	cin>>n;
	for(i=1; i<=n; i++)
	
	{
		cout<<"Data "<<i<<" = ";
		cin>>data[i];
	}
	
	cout<<"Data Awal = ";
	for(i=1; i<=n; i++)
	cout<<data[i]<<" ";
	cout<<endl;
	for (i=1; i<n; i++)
	
	{
		for(j=1; j<n; j++)
		{
			if (data[j]>data[j+1])
			{
				simpan=data[j];
				data[j]=data[j+1];
				data[j+1]=simpan;
			}
		}
	}
	cout<<"Hasil Akhir = ";
	for (i=1; i<=n; i++)
	cout<<data[i]<<" ";
	

}
