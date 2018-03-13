#ifndef IV_FORMULA_H_INCLUDED
#define IV_FORMULA_H_INCLUDED
//���������ʣ����ַ���
double iv_bisections(const double &S,
                     const double &X,
                     const double &r,
                     const double &time,
                     const double &option_price);

//���������ʣ�ţ�ٷ�)
double iv_newton(const double &S,
                 const double &X,
                 const double &r,
                 const double &time,
                 const double &option_price);
#endif // IV_FORMULA_H_INCLUDED
