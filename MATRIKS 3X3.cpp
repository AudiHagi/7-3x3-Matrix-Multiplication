#include <iostream>
using namespace std;

int main ()
{
	int a[3][3], b[3][3], c[3][3];
	int i,j,k;
	int jumlah =0;
	//INPUT MATRIX
	cout<<"Input Matrix A Ordo 3x3 \n";
	cout<<"========================"<<endl;
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
			cout<<"Input Value A["<<i<<"]["<<j<<"]=";cin>>a[i][j];
		}
	}cout<<endl;
	//SHOW THE MATRIX
	cout<<"========================"<<endl;
	cout<<"Matrix A Ordo 3x3 \n";
	cout<<"========================"<<endl;
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		cout<<a[i][j]<<"\t";
		cout<<endl;
	}cout<<endl;
	//INPUT MATRIX
	cout<<"========================"<<endl;
	cout<<"Input Matrix B Ordo 3X3 \n"; 
	cout<<"========================"<<endl;
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
			cout<<"Input Value B["<<i<<"]["<<j<<"]=";cin>>b[i][j];
		}
	}cout<<endl;
	//SHOW THE MATRIX
	cout<<"========================"<<endl;
	cout<<"Matrix B Ordo 3x3 \n";
	cout<<"========================"<<endl;
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		cout<<b[i][j]<<"\t";
		cout<<endl;
	}cout<<endl;
	//RESULT OF MATRIX MULTIPLICATION
	cout<<"========================"<<endl;
	cout<<"3x3 Matrix Multiplication \n";
	cout<<"========================"<<endl;
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
			for (int k=0;k<3;k++)
			{
				c[i][j]= jumlah + a[i][k] * b[k][j];
			}
		}
	}
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
			cout<<c[i][j]<<"\t";
		}
	cout<<endl;
	}
system ("pause");
}
