#include <iostream>
using namespace std;

int factorialFind(int x){
	if (x == 1){
		return 1;
	}else{
		return x * factorialFind(x - 1);
	}

}
int main(int argc, char const *argv[])
 {
 	cout << factorialFind(10) << endl;
 	return 0;
 }