#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <fstream>
#include <complex>
#include <bits/stdc++.h>

using namespace std;

void readData();
void writeData();
string addComplex(complex <double> a, complex<double> b);
string subtractComplex(complex <double> a, complex<double> b);
string multiplyComplex(complex <double> a, complex<double> b);
string divideComplex(complex <double> a, complex<double> b);
string conjugateComplex(complex <double> a);
string multiplicativeInverse(complex <double> a);


string complexValue(complex<double> a);

vector <complex<double>> complexNumbers;


int main()
{
    readData();

    
    writeData();
    
   
    //code here
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
                size_t pos = value.find("+");       //what is size_t? 
                double real = stod(value.substr(0, pos));
                double imag = stod(value.substr(pos+1, value.length()-1));
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
    ofstream file("output.txt");
    if(file.is_open())
    {
        
        file << " Z1                        Z2                 z1+z2                    :z1-z2                      Z1Z2                        Z1/Z2                       Z1^-1                       Z2^-1                       Z1`                     Z2` ";
        for(int i=0; i<complexNumbers.size(); i=i+2)
    {
        
        file << endl;
        file << complexValue(complexNumbers[i])<<"\t";
        file << complexValue(complexNumbers[i+1])<<"\t";
        file << addComplex(complexNumbers[i], complexNumbers[i+1])<<"\t\t";
        file << subtractComplex(complexNumbers[i], complexNumbers[i+1])<<"\t\t\t";
        file << multiplyComplex(complexNumbers[i], complexNumbers[i+1])<<"\t\t";
        file << divideComplex(complexNumbers[i], complexNumbers[i+1])<<"\t\t\t";
        file << multiplicativeInverse(complexNumbers[i])<<"\t\t\t";
        file << multiplicativeInverse(complexNumbers[i+1])<<"\t\t\t";
        file << conjugateComplex(complexNumbers[i])<<"\t\t\t";
        file << conjugateComplex(complexNumbers[i+1])<<"\t";
        file << endl;
       
    }
        file.close();
    }
    else
    {
        cout << "File not found" << endl;
    }

}

string complexValue(complex<double> a)
{
    if (a.imag() < 0)
    {
        string result = to_string(a.real()) + to_string(a.imag()) + "i";
        return result;
    }
    else
    {
        string result = to_string(a.real()) + "+" + to_string(a.imag()) + "i";
        return result;
    }
}

string addComplex(complex <double> a, complex<double> b)
{
        complex<double> result = a + b;
        if(result.imag() < 0)
        {
            string resultString = to_string(result.real()) + to_string(result.imag()) + "i";
            return resultString;
        }
        else
        {
            string resultString = to_string(result.real()) + "+" + to_string(result.imag()) + "i";
            return resultString;
        }
 

}

string subtractComplex(complex <double> a, complex<double> b)
{
    complex<double> result = a - b;
    if(result.imag() < 0)
        {
            string resultString = to_string(result.real()) + to_string(result.imag()) + "i";
            return resultString;
        }
        else
        {
            string resultString = to_string(result.real()) + "+" + to_string(result.imag()) + "i";
            return resultString;
        }
}

string multiplyComplex(complex<double> a, complex<double> b)
{
    complex<double> result = a * b;
    if(result.imag() < 0)
        {
            string resultString = to_string(result.real()) + to_string(result.imag()) + "i";
            return resultString;
        }
        else
        {
            string resultString = to_string(result.real()) + "+" + to_string(result.imag()) + "i";
            return resultString;
        }

}

string divideComplex(complex<double> a, complex<double> b)
{
    complex<double> result = a / b;
     if(result.imag() < 0)
        {
            string resultString = to_string(result.real()) + to_string(result.imag()) + "i";
            return resultString;
        }
        else
        {
            string resultString = to_string(result.real()) + "+" + to_string(result.imag()) + "i";
            return resultString;
        }

}

string conjugateComplex(complex<double> a)
{
    complex<double> result = a;
    if(result.imag() < 0)
    {
        string resultString = to_string(result.real()) + to_string(result.imag()) + "i";
        return resultString;
    }
    else
    {
        string resultString = to_string(result.real()) + "+" + to_string(result.imag()) + "i";
        return resultString;
    }
}

string multiplicativeInverse(complex<double> a)
{
    complex<double> result = 1.0/a;
    if(result.imag() < 0)
    {
        string resultString = to_string(result.real()) + to_string(result.imag()) + "i";
        return resultString;
    }
    else
    {
        string resultString = to_string(result.real()) + "+" + to_string(result.imag()) + "i";
        return resultString;
    }
}

void sortData()
{
    //load the values from output file into a vector and sort them
    ifstream file("output.txt");
    if(file.is_open())
    {
        //vector to store the values
        vector<string> values;
        string line;
        while(getline(file, line))
        {
            //split the line into values
            stringstream ss(line);
            string value;
            while(getline(ss, value, ','))
            {
                values.push_back(value);
            }
        }
    }
   
}