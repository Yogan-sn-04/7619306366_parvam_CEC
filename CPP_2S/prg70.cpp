#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream Myfile("C:\\Users\\Admin\\Desktop\\cpgm gitbash\\7619306366_parvam_CEC\\CPP_2S\\NEW.txt");
    Myfile << "Hello, World!" << endl;
    Myfile.close();
    return 0;
}