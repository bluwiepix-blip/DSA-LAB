//#include<iostream>        //3.2
//#include<conio.h>
//using namespace std;
//
//void rev() {
//	char ch;
//	cin.get(ch);
//	if (ch != 'n') {
//		rev();
//		cout.put(ch);
//	}
//}
//int main() {
//	rev();
//	getch();
//	return 0;
//}

//#include<iostream>                   //3.2
//using namespace std;
//int  Ackermann(int m, int  n) {
//	if (m == 0)
//		return n + 1;
//	else if (m > 0 && n == 0)
//		return Ackermann(m - 1, 1);
//	else if (m > 0 && n > 0)
//		return Ackermann(m - 1, Ackermann(m, n - 1));
//}
//int main() {
//	cout << "A(3,4)=" << Ackermann(3, 4) << endl;
//	return 0;
//}

//#include<iostream>                       //3.3 a
//using namespace std;
//void printNumbers(int n) {
//	if (n < 0)
//		return;
//	cout << n << " ";
//	printNumbers(n - 1);
//}
//int main() {
//	int n;
//	cout << "Enter a number:";
//	cin n;
//	printNumbers(n);
//	cout << endl;
//	return 0;
//}

//#include<iostream>                      //3.3 b
//using namespace std;
//int binomialCoeff(int n, int k) {
//	if (k == 0 || k == n)
//		return 1;
//	return binomialCoeff(n - 1, k - 1) + binomialCoeff(n - 1, k);
//}
//int main() {
//	int n, k;
//	cout << "Enter n and k:";
//	cin >> n >> k;
//	cout << "C(" << n << "," << k << ")=" << binomialCoeff(n, k) << endl;
//	return 0;
//}

//#include<iostream>                        //3.3 c
// 
//using namespace std;
//
//bool isPrime(int n, int i = 2) {
//	if (n <= 2)
//		return (n == 2);
//	if (n % i == 0)
//		return false;
//	if (i * i > n)
//		return false;
//	return isPrime(n, i + 1);
//}
//int main() {
//	int n;
//	cout << "Enter a number";
//	cin >> n;
//	if (isPrime(n))
//		cout << n << " is a prime number." << endl;
//	else
//		cout << n << "is not a prime number." << endl;
//	return 0;
//}