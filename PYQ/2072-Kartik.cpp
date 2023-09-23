/* matrix multiplication overloading * */
#include <iostream>
using namespace std;

class matrix {
	int a[3][3];
public:
	matrix()
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				a[i][j]=0;
			}
		}
	}
	void getdata()
	{
		cout << "Enter the value for matrix: " << endl;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cin >> a[i][j];
			}
		}
	}
	void showdata()
	{
		cout << "Enter the value for matrix: " << endl;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << a[i][j];
			}
			cout << endl;
		}
	}
	matrix operator *(matrix n)
	{
		matrix temp;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				for(int k =0; k<3;k++)
				{ 
					temp.a[i][j] += a[i][k] * n.a[k][i];
				}
			}
			cout << endl;
		}
		return temp;
	}
};
int main()
{
	matrix a, b, c;
	a.getdata();
	b.getdata();
	c = a * b;
	c.showdata();
	return 0;
}