#include <iostream>
#include <fstream>
using namespace std;

void input(int soDinh, int m[10][10]){
	for( int i = 0; i < soDinh; i++){
		for(int j = 0; j < soDinh;j++ ){
			cout<<"dinh " <<i+1<<" - "<<j+1<<" khong? (1/0)";
			cin>>m[i][j];
		}
	}
}

void output(int soDinh, int m[10][10]){
	for( int i = 0; i < soDinh; i++){
		for(int j = 0; j < soDinh;j++ ){
			cout<<" "<<m[i][j];
		}
		cout<<"\n";
	}
}

int timBac(int size, int m[10][10]){
	int bac = 0;
	for(int i = 0; i < size; i++){
		for(int j = 0; j < size; j++){
			if(m[i][j]==1){
				bac+=1;
			}
		}
	}
	return bac;
}

//void outputFromFile()
//void findMax()

void timBacCaoNhat(int size, int a[10][10]){
	int dinh=0, max =0, count=0;
	for(int i =0; i<size;i++){
			count = 0;
			for(int j=0;j<size;j++){
				if(a[i][j] ==1){
				count+=1;
			}
			cout<<count;
		}
		cout<<"dinh "<<i<<" ->"<<count<<endl;
		if(max<count){
			max=count;
			dinh = i;
		}
	}
	cout<<"dinh co bac cao nhat la dinh "<<dinh<<"\n co bac :"<< max<<endl;
}

bool timLienThong(int size, int a[10][10]){
	bool laLienThong = true;
	for(int i =0; i<size;i++){	
		for(int j=i+1;j<size;j++){
			if(a[i][j]==1){
				laLienThong = true;
				break;
			}
			laLienThong = false;
		}
		if(!laLienThong){
			return laLienThong;
		}
	}
	return laLienThong;
}

void timDuongDiBatKy(int d1, int d2){
	for(int i =0; i<n;i++){
		for(int j=0;j<n;j++){
		
		}
			
	}
}
int main(){
	cout<<"hello world\n";
	int a[10][10];
	int n;
	//cout<<"Nhap vao so dinh";
	//cin>>n;
	//input(n,a);
	//=============file out to file==========
	/*ofstream file("data.txt");
	file<<n<<endl;
	for(int i =0; i<n;i++){
			for(int j=0;j<n;j++){
				file<<a[i][j]<<" ";
			}
			file << endl;
	}
	file.close();*/
	
	//============file in================
	
	ifstream infile;
	infile.open("data.txt");
	infile>>n;
	for(int i =0; i<n;i++){
			for(int j=0;j<n;j++){
				infile>>a[i][j];
			}
			
	}
	
	
	int bac = timBac(n,a);
	output(n,a);
	cout<<"=>Tong bac: "<<bac<<endl;
	timBacCaoNhat(n,a);
	bool lienThong = timLienThong(n,a);
	if(lienThong==1){
	cout<<"\n=>Co lien thong"<<endl;
	}else if(lienThong==0){
		cout<<"\n=>Khong lien thong\n";
	}
	
	return 0;
}
