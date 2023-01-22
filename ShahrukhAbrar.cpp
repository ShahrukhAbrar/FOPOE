/*•	Read values of two complex variable values from the file named “InputFile” (Download from LMS). The file contains unsorted complex numbers in the following format
•	1+0.6j,  2+6j here variable A is 1+0.6j, with 1 as real 0.6 as imaginary  and B is   2+6j having 2 as real and 6 as imaginary. 
•	You have to perform six operations on the numbers read from the file. Arithmetic operation, conjugate and multiplicative inverse. 
*/

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <complex>

using namespace std;
using std::complex;

void readData();
void add(complex<double> a, complex<double> b);
void subtract(complex<double> a, complex<double> b);
void multiply(complex<double> a, complex<double> b);
void divide(complex<double> a, complex<double> b);
void conjugate(complex<double> a);
void multiplicativeInverse(complex<double> a);





vector<complex<string>> values;
vector <complex<double>> complexNumbers;
int main()
{
   

    readData();

    for(int i=0; i<complexNumbers.size(); i++)
    {
        add(complexNumbers[i], complexNumbers[i+1]);
    }
    
    return 0;
}


void readData()
{
    ifstream file("input.txt");
    if(file.is_open())
    {
        string line;
        while(getline(file, line))
        {
            //vector to store the values
            
            //split the line into values
            stringstream ss(line);
            string value;
            while(getline(ss, value, ','))
            {   

                double real,imag;
                sscanf(value.c_str(),"%lf+%lfj",&real,&imag);
                complexNumbers.push_back(std::complex<double>(real,imag));
            }
            
        }
        file.close();
    }
    else
    {
        cout << "File not found" << endl;
    }
}

void writeData()
{
    //Pain for Tomorrow Shahrukh, I sleep now
}

void sorting()
{
    //Half Asleep
}

void add(complex<double> a, complex<double> b)
{
    complex<double> c = a + b;
    cout << "Addition of "<<a<<"and "<<b <<" : " << c << endl;
}

void subtract(complex<double> a, complex<double> b)
{
    complex<double> c = a - b;
    cout << "Subtraction of "<<a<<"and "<<b <<" : " << c << endl;
}

void multiply(complex<double> a, complex<double> b)
{
    complex<double> c = a * b;
    cout << "Multiplication of "<<a<<"and "<<b <<" : " << c << endl;
}

void divide(complex<double> a, complex<double> b)
{
    complex<double> c = a / b;
    cout << "Division of "<<a<<"and "<<b <<" : " << c << endl;
}

void conjugate(complex<double> a)
{
    complex<double> c = conj(a);
    cout << "Conjugate of "<<a<<" : " << c << endl;
}

void multiplicativeInverse(complex<double> a)
{
    complex<double> c = 1/a;
    cout << "Multiplicative Inverse of "<<a<<" : " << c << endl;
}





