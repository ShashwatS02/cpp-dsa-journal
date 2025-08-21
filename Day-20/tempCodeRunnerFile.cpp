#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // Opening the file
    ofstream fout;

    // If file is not found then it will create a new file with the same name and will open it after creating the file.
    fout.open("zoom.txt");

    // Writing into the file
    fout<<"Hello India"<<endl;

    fout.close();
  }