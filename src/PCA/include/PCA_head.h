//PCA�㷨ͷ�ļ�
#ifndef _PCA_head_H_  
#define _PCA_head_H_

#include<iostream>
#include<vector>
#include<math.h>
#include<iomanip>

//#include"PCA_head.h"

using namespace std;


class PCA_model{
	public:
		vector<vector<double>> eigenvector;//������������
		vector<double> eigenvalue;//����ֵ

		PCA_model();
		PCA_model(vector<vector<double>> data,int anum,int afea);
		~PCA_model();
		void print();
		int pca_solve_eig();

	private:
		int num;//������
		int fea;//����ά��
		vector<vector<double>> cov;//Э�������
		vector<double> mean;//ƽ��ֵ		
};


//Լ���Գƾ���Ϊ���ԽǶԳƾ���
//����Householder�任��n��ʵ�Գƾ���Լ��Ϊ�Գ����ԽǾ���
//a-����Ϊn*n�����飬���n��ʵ�Գƾ���
//n-����Ľ���
//q-����Ϊn*n�����飬����ʱ���Householder�任����
//b-����Ϊn�����飬����ʱ������Խ�������Խ���Ԫ��
//c-����Ϊn�����飬����ʱǰn-1��Ԫ�ش�ŴζԽ���Ԫ��
//void eastrq(double a[],int n,double q[],double b[],double c[]);

//��ʵ�Գ����ԽǶԳƾ����ȫ������ֵ����������
//���ñ���QR��������ʵ�Գ����ԽǾ���ȫ������ֵ����������
//n-����Ľ���
//b-����Ϊn�����飬����ʱ������Խ�������Խ���Ԫ��
//c-����Ϊn�����飬����ʱǰn-1��Ԫ�ش�ŴζԽ���Ԫ��
//q-����Ϊn*n�����飬����ŵ�λ�����򷵻�ʵ�Գ����ԽǾ��������������
//  �����Householder�任�����򷵻�ʵ�Գƾ���A������������
//a-����Ϊn*n�����飬���n��ʵ�Գƾ���
//int ebstq(int n,double b[],double c[],double q[],double eps,int l);

//Լ��ʵ����Ϊ���겮��(Hessen berg)����
//���ó������Ʊ任��n��ʵ����Լ��Ϊ��H����
//a-����Ϊn*n�����飬���n��ʵ����,����ʱ�����H����
//n-����Ľ���
//void echbg(double a[],int n);

//void echbg(mat a,int n);

//����겮��(Hessen berg)�����ȫ������ֵ
//����ֵС��0��ʾ��������jt����δ�ﵽ����Ҫ��
//����ֵ����0��ʾ��������
//���ô�ԭ��λ�Ƶ�˫�ز�QR��������H�����ȫ������ֵ
//a-����Ϊn*n�����飬�����H����
//n-����Ľ���
//u-����Ϊn�����飬����n������ֵ
//v-����Ϊn*n�����飬����n������ֵ����������
//eps-���ƾ���Ҫ��
//jt-���ͱ�������������������
//int edqr(double a[],int n,double u[],double v[],double eps,int jt);


//��ʵ�Գƾ��������ֵ�������������Ÿ�ȷ�
//�����Ÿ��(Jacobi)������ʵ�Գƾ����ȫ������ֵ����������
//����ֵС��0��ʾ��������jt����δ�ﵽ����Ҫ��
//����ֵ����0��ʾ��������
//a-����Ϊn*n�����飬���ʵ�Գƾ��󣬷���ʱ�Խ��ߴ��n������ֵ
//n-����Ľ���
//v-����Ϊn*n�����飬������������(���д洢)
//eps-���ƾ���Ҫ��
//jt-���ͱ�������������������
int eejcb(double a[],int n,double v[],double eps,int jt);



#endif