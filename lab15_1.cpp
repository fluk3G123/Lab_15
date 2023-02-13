#include <iostream>
#include <algorithm>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
    for (int position = 1 ; position < N ; position++)
	{
		cout << "Pass " << position << ":";
		int F = position-1;
		T box = d[position];
		while (d[F] < box && F >= 0)
		{
			d[F+1] = d[F];
			F--;
		}
		d[F+1] = box;
		for(int j=0;j < N;j++){  
			cout << d[j] ; 
			if(j!=N-1) cout << " "; 
		}
		cout << endl;
	}
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
