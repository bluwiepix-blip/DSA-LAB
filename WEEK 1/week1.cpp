//#include<iostream>                  //EXAMPLE 1.1
//using namespace std;
//int max1(int X, int Y) {
//	return (X > Y) ? X : Y;
//}
//void max2(int X, int Y, int& Larger) {
//	Larger = (X > Y) ? X : Y;
//}
//void max3(int X, int Y, int* Larger) {
//	*Larger = (X > Y) ? X : Y;
//}
//int main() {
//	int a = 10, b = 15;
//	int result1, result2, result3;
//	result1 = max(a, b);
//	cout << "Max using call by value" << result1<< endl;
//	max2(a, b, result2);
//	cout << "Max using call by reference" << result2<< endl;
//	max3(a, b, &result3);
//	cout << "Max using call by pointer" << result3;
//	return 0;
//}

//#include<iostream>                //EXAMPLE 1.2
//using namespace std;
//class Complex {
//private:
//	float re;
//	float im;
//public:
//	Complex(float r, float i) {
//		re = r;
//		im = i;
//	}
//	Complex(float r) {
//		re = r;
//		im = 0.0;
//	}
//	~Complex() {};
//	double Magnitude() {
//		return sqrt(re * re + Imag() * Imag());
//	}
//	float Real() {
//		return re;
//	}
//	float Imag() {
//		return im;
//	}
//	Complex operator + (Complex b) {
//		return Complex(re + b.re, im + b.im);
//	}
//	Complex operator= (Complex b) {
//		re = b.re;
//		im = b.im;
//		return *this;
//	}
//};
//int main() {
//	Complex a(1.0, 1.0);
//	Complex* b = new Complex(5.0);
//	Complex c(0, 0);
//	cout << "a real=" << a.Real() << "a imaginary=" << a.Imag() << endl;
//	cout << "b real=" << b->Real() << "b imaginary=" << b->Imag() << endl;
//	c = a + (*b);
//	cout << "c real=" << c.Real() << "c imaginary=" << c.Imag() << endl;
//	delete b;
//	return 0;
//}

//#include <iostream>                      //EXERCISE 1.1
//using namespace std;
//
//class Complex {
//private:
//    float re;
//    float im;
//
//public:
//    Complex(float r = 0, float i = 0) : re(r), im(i) {}
//    void display() const {
//        cout << re;
//        if (im >= 0)
//            cout << " + " << im << "i";
//        else
//            cout << " - " << -im << "i";
//    }
//
//    Complex operator*(Complex b) {
//        float r = re * b.re - im * b.im; 
//        float i = re * b.re + im * b.im;
//        return Complex(r, i);
//    }
//};
//
//int main() {
//    Complex c1(3, 2), c2(1, 7);
//    Complex result = c1 * c2;
//    cout << "The product of the complex numbers is: ";
//    result.display();
//    return 0;
//}

//#include<iostream>                           //EXAMPLE 1.3
//using namespace std;
//
//template <class T>
//T GetMax(T a, T b) {
//	T result;
//	result = (a > b) ? a : b;
//	return (result);
//}
//int main() {
//	int i = 5, j = 6, k;
//	long l = 10, m = 5, n;
//	k = GetMax<int>(i, j);
//	n = GetMax<long>(l, m);
//	cout << k << endl;
//	cout << n << endl; 
//	return 0;
//}

//#include<iostream>                        //EXAMPLE 1.4
//using namespace std; 
//
//template <class T>
//class mypair {
//	T a, b;
//public:
//	mypair(T first, T second) {
//		a = first; b = second;
//	}
//	T getmax();
//};
//template <class T> 
//T mypair<T>::getmax() {
//	T retval;
//	retval = a > b ? a : b;
//	return retval;
//}
//int main() {
//	mypair<int> myobject(100, 75);
//	cout << myobject.getmax();
//	return 0;
//}

//#include<iostream>                       //EXERCISE 1.2
//using namespace std;
//
//template <class T>
//class mypair {
//	T a, b;
//public:
//	mypair(T first, T second) {
//		a = first; b = second;
//	}
//	T getmin();
//};
//template <class T>
//T mypair<T>::getmin() {
//	T retval;
//	retval = a < b ? a : b;
//	return retval;
//}
//int main() {
//	mypair<int> myobject(100, 75);
//	cout << myobject.getmin();
//	return 0;
//}

//#include<iostream>                      //EXAMPLE 1.5
//using namespace std;
//
//template<class T, int N>
//class mysequence {
//	T memblock[N];
//	public:
//		void setmember(int x, T value);
//		T getmember(int x);
//};
//
//template<class T, int N>
//void mysequence <T, N>::setmember(int x, T value) {
//	memblock[x] = value;
//}
//
//template<class T, int N>
//T mysequence <T, N>::getmember(int x) {
//	return memblock[x];
//}
//int main() {
//	mysequence <int, 5> myints;
//	mysequence <double, 5> myfloats;
//	myints.setmember(0, 100);
//	myfloats.setmember(3, 3.1416);
//	cout << myints.getmember(0) << endl;
//	cout << myfloats.getmember(3) << endl;
//	return 0;
//}

//#include <iostream>                   //Exercise 1.3
//using namespace std;
//
//template <class T, int N>
//class mysequence {
//    T memblock[N];
//public:
//    void setmember(int x, T value);
//    T getmember(int x);
//    T getmax();
//    T getmin();
//};
//
//template <class T, int N>
//void mysequence<T, N>::setmember(int x, T value) {
//    memblock[x] = value;
//}
//
//template <class T, int N>
//T mysequence<T, N>::getmember(int x) {
//    return memblock[x];
//}
//
//template <class T, int N>
//T mysequence<T, N>::getmax() {
//    T maxNo = memblock[0];
//    for (int i = 1; i < N; i++) {
//        if (memblock[i] > maxVal)
//            maxNo = memblock[i];
//    }
//    return maxNo;
//}
//
//template <class T, int N>
//T mysequence<T, N>::getmin() {
//    T minNo = memblock[0];
//    for (int i = 1; i < N; i++) {
//        if (memblock[i] < minVal)
//            minNo = memblock[i];
//    }
//    return minNo;
//}
//
//int main() {
//    mysequence<int, 5> myints;
//    myints.setmember(0, 100);
//    myints.setmember(1, 50);
//    myints.setmember(2, 75);
//    myints.setmember(3, 30);
//    myints.setmember(4, 90);
//
//    cout << "Maximum: " << myints.getmax() << endl;
//    cout << "Minimum: " << myints.getmin() << endl;
//    return 0;
//}

//#include<iostream>                           //Example 1.6
//#include<fstream>
//
//using namespace std;
//int main(void) {
//	ofstream outFile;
//	outFile.open("fout.txt");
//	ifstream inFile("fin.txt");
//
//	char ch;
//	int count = 0;
//	while (inFile.get(ch)) {
//		outFile << ch;
//		count++;
//	}
//	outFile << "Character count=" << count << endl;
//	inFile.close();
//	outFile.close();
//	return 0;
//}

//#include <iostream>                               //EXERCISE 1.4
//#include <fstream>
//#include <cctype>
//using namespace std;
//
//int main() {
//    ifstream inFile("fin.txt");
//    ofstream outFile("fout.txt");
//
//    if (!inFile) {
//        cerr << "Error opening input file!" << endl;
//        return 1;
//    }
//
//    char ch;
//    int chCount = 0, wordCount = 0, sentenceCount = 0;
//    bool inWord = false;
//
//    while (inFile.get(ch)) {
//        outFile << ch;
//        chCount++;
//
//        if (isspace(ch) || ch == ' ') {
//            if (inWord) {
//                wordCount++;
//                inWord = false;
//            }
//        }
//        else if (isalnum(ch)) {
//            inWord = true;
//        }
//
//        if (ch == '.' || ch == '!' || ch == '?') {
//            sentenceCount++;
//        }
//    }
//
//    if (inWord) {
//        wordCount++;
//    }
//
//    outFile << "Character count = " << chCount << endl;
//    outFile << "Word count = " << wordCount << endl;
//    outFile << "Sentence count = " << sentenceCount << endl;
//
//    cout << "Character count = " << chCount << endl;
//    cout << "Word count = " << wordCount << endl;
//    cout << "Sentence count = " << sentenceCount << endl;
//
//    inFile.close();
//    outFile.close();
//
//    return 0;
//}

//#include<iostream>                        //EXAMPLE 1.7
//#include<fstream>
//using namespace std;
//int main() {
//	char name[10];
//	float mt1, mt2, final, avg;
//	ifstream fin;
//	ofstream fout;
//	fin.open("input.dat");
//	fout.open("output.dat");
//	while (!fin.eof()) {
//		fin >> name >> mt1 >> mt2 >> final;
//		avg = 0.25 * mt1 + 0.25 * mt2 + 0.5 * final;
//		fout << name << endl << avg << endl;
//	}
//	fin.close();
//	fout.close();
//}

//#include <iostream>                 //EXERCISE 1.5
//#include <iomanip>
//#include <string>
//
//using namespace std;
//
//class House {
//public:
//    string owner;
//    string address;
//    int bedrooms;
//    float price;
//};
//
//int main() {
//    House available[100];
//    int count = 0;
//    char choice;
//
//    do {
//        cout << "Enter Owner: ";
//        getline(cin, available[count].owner);
//        cout << "Enter Address: ";
//        getline(cin, available[count].address);
//        cout << "Number of Bedrooms? ";
//        cin >> available[count].bedrooms;
//        cout << "Price: ";
//        cin >> available[count].price;
//        cin.ignore(); 
//
//        count++;
//
//        cout << "Enter another house? (Y/N):"<<endl;
//        cin >> choice;
//        cin.ignore(); 
//    } 
//    while (toupper(choice) == 'Y' && count < 100);
//
//   
//    cout << "Owner" << "Address"<< "Bedrooms" <<"Price"<<endl;
//    for (int i = 0; i < count; i++) {
//        cout << available[i].owner 
//            << available[i].address
//            << available[i].bedrooms
//            << available[i].price << endl;
//    }
//
//    return 0;
//}
