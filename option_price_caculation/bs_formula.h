#ifndef BS_FORMULA_H_INCLUDED
#define BS_FORMULA_H_INCLUDED
//ŷʽ��ȨBS��ʽ
double option_price_bs(const double &S, //��ļ۸�
                            const double &X, //ִ�м۸�
                            const double &r,//�޷�������
                            const double &sigma,//�г�������
                            const double &time,//�껯����ʱ��
                             bool call//TrueΪ����Call��FalseΪ����Put
                            );
#endif // BS_FORMULA_H_INCLUDED
