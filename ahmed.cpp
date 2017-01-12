#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	ofstream fout ;
	fout.open("xx.txt");
	int n, f=1;
	cout<<"enter the num=";
	cin>>n;
	do
	{
		f=f*n;
		n--;		
	}
	while(n>1);
	fout<<"fact is = "<<f;
	cout<<"fact="<<f;
	fout.close();
}
