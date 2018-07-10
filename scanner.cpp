// Tyler Bowers
// test scanner for C++ 
// start date of development: 7/10/2018

// #include <scantools.cpp>
#include <iostream>
#include <fstream>

using namespace std;
//class to handle max hosts and max checks
class finder{
    private:
        short int max_running; //total number of processes running
    public:
        void counthosts(); //function counts active processes
        int find_max_processes(); //defines each process and runtime marks as known or unknown
        void log_active(std::ofstream& outfile); //logs avtivity and processes description are stored
        finder (); //initializes variables in private
};

int main(int argc, char *argv[])
{
    //loop stores names into array from stream
     for(int i = 0; i<argc; ++i)
    {
        cout << i << '\t' << argv[i] << endl;
    }
}