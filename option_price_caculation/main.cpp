#include <iostream>
#include "normdist.h"
#include "bs_formula.h"
#include "iv_formula.h"

using namespace std;

int main()
{
    cout << "N(1): " <<N(1)<< endl;
    double S = 50;
    double X = 50;
    double r = 0.10;
    double sigma = 0.30;
    double time = 0.50;
    cout <<"ŷʽ������Ȩ�۸�: ";
    double c = option_price_bs(S,X,r,sigma,time,true);
    double p = option_price_bs(S,X,r,sigma,time,false);
    cout <<c<<endl;
    cout <<"ŷʽ������Ȩ�۸�: ";
    cout <<p<<endl;
    cout<<"���ַ���������������: ";
    cout<< iv_bisections(S,X,r,time,c)<<endl;
    cout<<"ţ�ٷ���������������: ";
    cout<<iv_newton(S,X,r,time,c)<<endl;
    return 0;
}
