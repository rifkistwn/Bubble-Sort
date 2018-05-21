#include <iostream>
#include <conio.h>
using namespace std;

main(){
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
