#include <iostream>
#include "dothi.h"
#include "list.h"
#include "node.h"
using namespace std;

int main(){
	DoThi dt("dothi.txt");
	cout<<dt.GetBac(1)<<endl;
	int soDinh = dt.GetSoDinh();
	for(int i =1; i< soDinh; i++){
		cout<<"dinh thu "<<i<<": "<< dt.GetBac(i)<<endl;
	}
	
	cout<<dt.KeVoiDinh(1)<<endl;
	//cout<<dt.DFS(2)<<endl;
	return 0;
}
