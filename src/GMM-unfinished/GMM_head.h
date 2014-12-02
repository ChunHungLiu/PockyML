#ifndef _GMM_HEAD_H_
#define _GMM_HEAD_H_


#include"global.h"

using namespace std;

typedef struct node{
	mat sigam;
	vec miu;
	double pi;
}gmm_node;


class GMM_model{
public:
	GMM_model();
	GMM_model(const mat& in_data);
	~GMM_model();
	void input_data(const mat& in_data);
	void train(const int g_num);
	double probability(const vec& sample);
	void display();

private:
	vector<gmm_node> para;//��˹ģ�Ͳ���
	mat raw_data;//ԭʼ����
	int gauss_num;//��˹��
	int samp_num;//������
	int dim_num;//����ά��
	mat gama;//���ʾ���ÿ�����Ӧÿ����˹�ֲ��ĸ���
	double get_prob(const int i, const int k);//��ȡ���������ʣ�E����
	void adjust_para();//����������M����
	
};




inline double gaussian(const vec& mu, const mat& sigma);

#endif // !










