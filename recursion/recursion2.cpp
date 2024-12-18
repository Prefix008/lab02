#include <iostream>
#include <math.h>
#include <ctime>

using namespace std;
float r(float x,int n, float sum){//рекурсивная функция r
    if (n==0){//условие выхода из рекурсии
        return sum;
    }
    return r(x,n-1,sum+pow((-1),n)*cos(n*x)/pow(n,2));
}
int main() 
{

    int n;
    float s,x;
    s=0;//накопитель суммы
    cout<<"X = ";//нужно ввести х
    cin>>x;
    cout<<"N = ";//нужно ввести n
    cin>>n;
    
    
    cout<<(r(x,n,s))<<endl;
    cout<<clock();//время выполнения в мс
    return 0;
}
