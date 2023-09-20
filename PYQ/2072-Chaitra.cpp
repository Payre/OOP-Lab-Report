/*WAP to find transpose of a matrix using OOP*/

#include <iostream>
class Matrix
{
	int M[3][3];
public:
	void getdata()
	{
		std::cout << "Enter the elements of the matrix (3,3)" << std::endl;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{std::cin >> M[i][j];}
			std::cout << std::endl;
		}
	}
	void showdata()
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{std::cout << M[i][j] << " ";}
			std::cout << std::endl;
		}
	}
	Matrix transpose(Matrix& a)
	{
		Matrix temp;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				temp.M[i][j] = a.M[j][i];
			}
		}
		return temp;
	}
};
int main()
{
	Matrix a, t;
	a.getdata();
	t = t.transpose(a);
	t.showdata();
	return 0;
}