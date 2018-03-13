#include "bs_formula.h"
#include "normdist.h"
#include <cmath>

double option_price_bs(const double &S, //��ļ۸�
                            const double &X, //ִ�м۸�
                            const double &r,//�޷�������
                            const double &sigma,//�г�������
                            const double &time,//�껯����ʱ��
                            bool call//TrueΪ����Call��FalseΪ����Put
                            )
{
    double time_sqrt = sqrt(time);
    double d1 = (log(S / X) + r * time)/(sigma * time_sqrt) + 0.5 * sigma * time_sqrt;
    double d2 = d1 - (sigma*time_sqrt);
    double price = S * N(d1) - X*exp(-r*time) * N(d2);
    if(!call)
        price = price + X * exp(-r*time) - S; //������Ȩƽ�۹�ʽ���� C + X *e^(-rT) = P + S
//    if(call)
//        price = S * N(d1) - X*exp(-r*time) * N(d2);
//    else
//        price =  X*exp(-r*time)*(1-N(d2)) - S * (1 - N(d1));
    return price;
}
