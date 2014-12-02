
#ifndef _kmeans_head_h
#define _kmeans_head_h

#include"../global.h"

using namespace std;

class kmeans_clusters{
public:
	kmeans_clusters();
	kmeans_clusters(const mat& in_data);
	~kmeans_clusters();
	void input_data(const mat& in_data);
	void train(const int c_num);
	void display();

private:
	mat raw_data;//ԭʼ����
	mat centroid;//����
	vec label;//�������
	int cluster_num;//�����
	int samp_num;//������
	int dim_num;//����ά��
	double get_variance();//�õ�����
	void get_cluster_class();//�õ������ǩ
	void get_centroid();//�õ�����
};


inline double variance(const vec& vec1, const vec& vec2);

#endif








