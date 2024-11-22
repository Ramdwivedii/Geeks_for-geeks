// #include<iostream>
// using namespace std;

// void swap(int &first)
// {
// 	first ++;
	
// }

// int main()
// {
// 	int a = 2;
// 	swap(a);
// 	cout << a ;
// 	return 0;
// }



#include <iostream>
using namespace std;

// function that takes a const reference to an integer as input
void increment( int x) {
  x++; // error: x is a const reference and cannot be modified
}

int main() {
  int a = 3;
  increment(a);
  cout<<a;
  return 0;
}