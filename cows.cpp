#include<iostream>
#include<fstream>
#include<iomanip>
#include<cstdlib>
#include<vector>
using namespace std;

int main()
{	
	int insert,move;
	long int total=0;
	int weight,n;
    ifstream inFile("file.in",ios::in);
    if(!inFile){
           cerr<<"Failed opening"<<endl;
           exit(1);
    }
	inFile>>n;
	vector<int>w(n);
	int arr[n];
	for(int i=0;i<n;++i)
		inFile>>arr[i];	
	cout<<"Unsorted Array:\n";
	for(int i=0;i<n;++i)
	{
		w.at(i)=arr[i];
		cout<<setw(4)<<w.at(i);
	}
	cout<<endl;
	for(int i=1; i<n;++i){
		insert=w.at(i);
		move=i;
		while((move>0) && (w.at(move-1)>insert)){
			w.at(move)=w.at(move-1);
			--move;
		}
		w.at(move)=insert;
		for(int i=0;i<n;++i)
			cout<<setw(4)<<w.at(i);
		cout<<endl;
	}
	for (int i=n-1;i>=(n-5);--i){
		total=total+w.at(i);
	}
	cout<<total<<endl;	
	return 0;		
}
