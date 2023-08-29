//product of two matrcies using opeartor overloading.
#include <iostream>
using namespace std;
class Matrix
{
    int A[3][3];
    public:
    void getdata()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<"Enter value for :"<<i<<j<<endl;
                cin>>A[i][j];
            }
        }
    }
    Matrix operator*(Matrix &m)
    {
        Matrix temp;

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                int sum =0;
                for(int k=0;k<3;k++)
                {
                    sum+=A[i][k] * m.A[k][j];
                }
                temp.A[i][j]=sum;
            }
        }
    return temp;
    }
    void showdata()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<A[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    Matrix a,b,c;
    a.getdata();
    b.getdata();
    c=a*b;
    cout << "Matrix A:" << endl;
    a.showdata();
    cout << "Matrix B:" << endl;
    b.showdata();
    cout << "Product of A and B:" << endl;
    c.showdata();
    return 0;
}
