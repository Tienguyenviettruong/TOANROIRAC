#ifndef dothi_h
#define dothi_h
#include <fstream>
#include "list.h"
using namespace std;

class DoThi{
	private:
	int N;
	int  a[100][100];
	public:
	DoThi(){
		N = 0;
	};	
	DoThi(const char * fileName){
		ifstream fin(fileName);
		fin>>N;
		for(int i = 0; i< N; i++){
			for(int j = 0; j<N; j++){
				fin>>a[i][j];
			}
		}
		fin.close();
	};
	int GetBac(int v) const{
		int bac = 0;
		for(int i = 0; i<= N; i++){
			if(a[i-1][v-1] ==1){
				bac++;
			}
		}	
		return bac;
	};
	int GetSoDinh() const{
		return N;
	};
	List<int> KeVoiDinh(int v) {
		List<int> r;
		for(int i = 1; i<= N; i++){
			if(a[i-1][v-1]==1){
				r.add(i);
			} 
		}	
		return r;
	};
	
};
#endif
