#include<iostream>
#include<fstream>
#include<time.h>
using namespace std;
int main() 
{
    int a[100][100]; 
    int n; 
	int max=0;
	int c;
	/*int x;
	ofstream file("data.txt");
	cin>>n;	
    file<<n<<endl;;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
		{
			cin>>x;
            file<< x<<"";  
		}
		file<<endl;
    }    
    file.close();   */
	ifstream file;
	file.open("data.txt");
	file>>n;
	for(int i =0;i<n;i++)
	{
		for(int j = 0; j<n;j++){
			file>>a[i][j];
		}
	}
	file.close();
	for(int i =0;i<n;i++)
	{
		for(int j = 0; j<n;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	for(int i =0;i<n;i++)
	{	int tong =0;
		for(int j = 0; j<n;j++)
				tong+=a[i][j];
		if(tong>max){
			max=tong;		
			c=i+1;}
	cout<<"dinh "<<i+1<<" co bac la: "<<tong<<endl;
	}		
	cout<<"bac cao nhat là: "<<max<<" tai "<<c<<endl;
	// in ra các cạnh noi 2 
	for(int i =0;i<n;i++)
	{
		for(int j = 0; j<n;j++)
			if(a[i][j]==1)
				cout<<i+1<<"-"<<j+1<<endl;
	}
// xet lien thong
	
	char*temp = new char[n];
	char b;
	int dem =0;
	for(int i = 0;i<n;i++) // cac dinh chua xet
		temp[i] = 0;
	temp[0]=1;// đỉnh băt đầu
	dem ++;
	do{
	char b =1;
	for(int i = 0;i<n;i++)
	if(temp[i]==1){
		for(int j = 0;j<n;j++)
		if(temp[j]==0 && a[i][j]>0){
			temp[j]=1;
			b = 0;
			dem++;
			if(dem == n)
				{cout<<"DO thi lien thong ^-^ "<<endl; }
			else 
				{cout<<"Do thi khong lien thong ^~^"<<endl;break;}
		}
	}
	}while(b==0);	
    return 0;
} 

