#include <iostream>
#include <math.h>
//1674652263 calculated in this program
//46785696846401151 cool
//51173735510107 cool
//898696369947 cool

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	long long lon;
	long long x = 1;
	long long y = 1;
	long long prew = -1;
	for(long long j=1;j>-10;j++){
	y+=1;
	x=y;
	for(long long i=1;i>-10;i++ ){
		if(x%2==0){
			x=x/2;
		}else{
			x=3*x+1;
		}
		if(x==4){
			lon=i;
			i-=10000000000000;
			
		}
	}
	if(lon>prew){
	std::cout << "\n";
	std::cout << y;
	std::cout << "\n";
	std::cout << lon;
	std::cout << "\n";
	std::cout << lon*100000/y;
	std::cout << "\n\n\n";
	prew = lon;
    }else{
    
	}

}
	
	
	
	
	
	
	
}
