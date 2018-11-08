#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int mx[100][100];
    int a;
            cout<<"masukkan panjang matriks     :";
            cin>>a;
    cout<<endl;
        for(int i=0;i<a;i++)
{
        for(int j=0;j<a;j++)
{
            cout<<"Masukkan ["<<i<<"]["<<j<<"]      :";
            cin>>mx[i][j];
            if (i+j==a-1)
{
                mx[i][j]=0;
                }
          }
    }
    cout<<endl;
        for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            cout<<setw(5)<<mtx[i][j];
        }
    cout<<endl;
              }
    return 0;
}
