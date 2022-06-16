//#include <string>
#include <iostream>
#include <fstream>
#include "DeepCopyName.h"
using namespace std;
using namespace sdds_name;

int main() {
   
        char data[100+1];
        ofstream outfile;  // creating object of ofstream
        outfile.open("afile.dat");//connecting ofstream to file
        // ofstream outfile("afile.dat"); // create and connect to file

        if (!outfile.is_open()) {
            cerr << "File cannot be opened" << endl;
        }
        else {
            cout << "Writing to the file" << endl;
            cout << "Enter your name: ";
            cin.getline(data, 100);

            // output data to file
            outfile << data << endl;

            cout << "Enter your age: ";
            cin >> data;
            cin.ignore();

            outfile << data << endl;

            outfile << "end" << endl;

            }
        outfile.close();// close the file

        ifstream infile;  // create ifstream object to read data
        infile.open("afile1.dat"); // connet it to file

        if (!infile.is_open()) {
            cerr << "File couldn't open for read" << endl;
        }
        else {
            while (infile) {
                infile >> data;
                cout << data << endl;
            }
        }
        infile.close();

        char fn[]{ "Moona" };
        DeepCopyName name(fn, 5);
        name.display();
        
        outfile.open("nameFiles.txt");
        outfile << name << endl;

        outfile.close();

        
        return 0;
}