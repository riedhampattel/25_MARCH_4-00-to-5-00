#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream MyFile("first.txt");
    MyFile<<"This is my first text file"<<endl;
    MyFile<<"This is my second text file"<<endl;
    MyFile<<"This is my third text file"<<endl;
    MyFile<<"This is my fourth text file";
    MyFile.close();
    return 0;
}