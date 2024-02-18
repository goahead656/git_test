#include <iostream>
#include <cmath>

using namespace std;
const double eps=1e-9;


int main()
{
    double test=0;
    double t=18;
    double t_1=5;
    double s_2=600;
    double s_1=0;

    for(int i=1;i<10000;i++){
        s_1=i;
        if(abs((s_1/t_1)-((s_1+s_2+s_1-200)/t))<=eps){
            printf("%.2f\n",s_1);
            break;
        }
    }
    int a=5/2;
    printf("%d\n",a);
    printf("%.2f",s_1+s_2+s_1-200);
    return 0;
}