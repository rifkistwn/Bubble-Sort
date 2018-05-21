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
