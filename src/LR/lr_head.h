#ifndef _LR_HEAD_H_
#define _LR_HEAD_H_

#include"../global.h"

using namespace std;

class lr_model{
	public:
		lr_model();
		lr_model(const mat& in_data, const vec& in_data_lab);
		~lr_model();
		void init();
		void input_data(const mat& in_data, const vec& in_data_lab);
		bool train();
		vec prediction(const mat& in_data);
		void display();

	private:
		int samp_num;
		int dim_num;
		mat raw_data;
		vec label;
		vec W;
		double b;
		int max_iter;
		double learn_rate;
		double max_loss;
};

inline double multiplication(const vec& vec1, const vec& vec2);













#endif//!



