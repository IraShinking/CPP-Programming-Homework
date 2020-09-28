#include<iostream>
using namespace std;
class Matrix
{
    friend ostream &operator<<(ostream &out, Matrix &mtx);
    public:
    Matrix(int r=0,int c=0):row(r),col(c){}
    void setMatrix();
    void operator+(const Matrix &m2);
    
    
    private:
    int row;
    int col;
    double matrixN[100][100];
    

};

void Matrix::setMatrix()
{
    cout<<"Set the "<<row<<"x"<<col<<" matrix:";
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cin>>matrixN[i][j];
        }
    }
    cout<<"Finish."<<endl;
}

void Matrix::operator+(const Matrix &m2)
{
    if(m2.row!=row||m2.col!=col)
    {
        cout<<"Not in the same type!"<<endl;

    }
    else 
    {
        int i,j;
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                matrixN[i][j]+=m2.matrixN[i][j];
            }
        }
    }
}

ostream & operator<<(ostream &out, Matrix &mtx)
{
    int i;
    int j;
    for(i=0;i<mtx.row;i++)
    {
        for(j=0;j<mtx.col;j++)
        {
            out<<mtx.matrixN[i][j]<<" ";
        }
        out<<endl;
    }
    return out;
}

int main(void)
{
    double mtx1[3][3]={1.0,1.0,1.0,2.0,2.0,2.0,3.0,3.0,3.0};
    int i,j;
    /*Matrix Mtx1(3,3);
    Mtx1.setMatrix();*/
    Matrix Mtx2(2,2);
    Mtx2.setMatrix();
    Matrix Mtx3(2,2);
    Mtx3.setMatrix();
    Mtx2+Mtx3;
    cout<<"Print matrix 2:"<<endl;
    cout<<Mtx2;
    cout<<"Print matrix 3:"<<endl;
    cout<<Mtx3;
    return 0;

}