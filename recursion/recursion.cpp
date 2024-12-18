#include <iostream>
#include <math.h>
#include <ctime>

using namespace std;

int main() 
{
    int n;
    float s,x;
    s=0;//накопитель суммы
    cout<<"X = ";//нужно ввести х
    cin>>x;
    cout<<"N = ";//нужно ввести n
    cin>>n;
    
    for (int i=1;i<=n;i++){
        s=s+pow((-1),i)*cos(i*x)/pow(i,2);//вычисление слагоемого по общей формуле и складывание с предыдушими 
    }
    cout<<s<<endl;
    cout<<clock();//время выполнения в мс
    return 0;
}
