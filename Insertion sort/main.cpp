#include <iostream>
#include <ctime>

using namespace std;

void insertion(int tab[], int n){
    int i, j, k;
    for (i=1; i<n; i++){
        k=tab[i];
        j=i-1;
        while (j>=0 && tab[j]>k){
            tab[j+1] = tab[j];
            j=j-1;
        }
        tab[j+1]=k;
		cout<<"\n";
		for(int i=0; i<n; ++i){
			cout<<tab[i]<<" ";
		}
    }
}

int main() {
	int x;
	cout<<"Podaj ilość losowanych liczb: \n";
	cin>>x;
	cout<<"\n";

	int tab[x];
	srand(time(NULL));
	for (int i=0; i<x; i++){
		tab[i]=rand() % 99 + 1;
	}

	cout<<"Input: ";
	for(int i=0; i<x; i++){
		cout<<tab[i]<<" ";
	}
	cout<<endl<<"-------------";

	insertion(tab, x);

	cout<<endl<<"-------------\nResult: ";
	for (int i=0; i<x; i++){
		cout<<tab[i]<<" ";
	}
}
