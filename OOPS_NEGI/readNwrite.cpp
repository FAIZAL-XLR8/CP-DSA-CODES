#include <iostream>
#include <fstream>
#include <strings.h>
using namespace std;
int main()
{
    // ofstream write;
    // write.open("zoom.txt");
    // write << "Hello Bhai";
    // write.close();

    // ifstream read;
    // read.open("zoom.txt");
    // char ch;
    // ch = read.get();
    // while (!read.eof()) // handles special char such as space
    // {
    //    cout << ch;
    //     ch = read.get();
    // }
    // read.close();

    // reading the file --> cin hota hai for reading therefre fin and writing hoga to fout
    //writitng ke liye fout ofstream
    // ofstream fout;
    // fout.open("zoom.txt");
    // fout << "\nhaa bhai bata";
    // fout.close();
    ifstream fin ;
    fin.open("zoom.txt");
    string output;
    
  while(getline(fin, output)){
    cout << output << endl;

    
  }
  fin.close();
}