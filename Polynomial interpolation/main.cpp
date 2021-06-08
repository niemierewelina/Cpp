#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float x[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 
	11.0, 12.0, 13.0, 14.0, 15.0, 16.0, 17.0, 18.0, 19.0, 20.0,
	21.0, 22.0, 23.0};
	
float y[] = {0.10, 0.11, 0.9, 0.12, 0.42, 0.10, 1.02, 4.0, 5.27, 4.09,
	8.0, 8.0, 3.2, 8.0, 6.5, 1.2, 1.9, 0.9, 1.1, 0.25, 0.2, 0.19, 0.2};

float func(float xp, float x[], float y[]){
	float yp;
	for (int i = 0; i < 23; i++){
		float p = 1; 
		for (int j = 0; j < 23; j++){
			if (i != j){
				p = p * (xp - x[j])/(x[i] - x[j]); 
			}
		}
		yp = yp + p * y[i];
	}
	return yp;
}

double extrapolate(float xp, float x[], float y[]){
    float yp;
    yp = y[0] 
		+ (xp - x[0])
        / (x[1] - x[0])
        * (y[1] - y[0]);
  
    return yp;
}

int main(int argc, char** argv) {
	
	// godzina 14:45 przeksztalcona na ulamek to 14.75
	cout<<"Wynik dla godziny 14:45 jest rowny: "<<func(14.75,x,y)<<"Mb/s."<<endl; 
	
	// godzina 15:30 przeksztalcona na ulamek to 15.5
	cout<<"Wynik dla godziny 15:30 jest rowny: "<<func(15.5,x,y)<<"Mb/s."<<endl; 

	return 0;
}
