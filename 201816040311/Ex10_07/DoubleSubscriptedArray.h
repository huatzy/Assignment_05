#ifndef DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#define DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#include <vector>
#include <iostream>
using namespace std;

class DoubleSubscriptedArray
{
    //����cin,cout,��Ϊ��Ԫ������ʵ�ְ�Ҫ���������
    friend std::ostream &operator<<( std::ostream &,const DoubleSubscriptedArray &);
    friend std::istream &operator>>( std::istream &,DoubleSubscriptedArray &);
public:
    //Ĭ�Ϲ��캯��
    DoubleSubscriptedArray(int,int);
    int &operator()(int,int);//���أ����������ʵ����ֵ����
    int &operator()(const int ,const int) const;//���أ����������ʵ����ֵ����
    bool operator==(DoubleSubscriptedArray &);//����==�����
    bool operator!=(DoubleSubscriptedArray &);//���أ�=�����������==�����
    DoubleSubscriptedArray &operator=(DoubleSubscriptedArray &);//����=�����
private:
    int rows=1;//����
    int columns=1;//����
    vector<int>darray;//����ά�������vector����
};

#endif // DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
