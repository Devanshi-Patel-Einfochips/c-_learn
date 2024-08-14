#include<string>
#include<iostream>
#include<fstream>
// #include<ofstream>
// #include <ifstream>
#include<experimental/filesystem>
using namespace std;
 

 int main(){
using namespace std:: experimental:: filesystem;
    path source(current_path());
    source /= "binCpyUtil.cpp";

    path dest(current_path());
    dest /= "binCpyUtildest.cpp";


    ifstream input{source};
    input.read((char*)&)
    ofstream output{dest};
 }