// Tyler Bowers
// test scanner for C++ 
// start date of development: 7/10/2018
//current sudo code

// #include <scantools.cpp>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//class to handle max processes and max checks
class finder{
    private:
        int amount_to_go;
        int timer;
    public:
        void counter(int ATG, string);
        finder (); //initializes variables in private
};

int main(int argc, char *argv[])
{
    finder call;

    ofstream outfile;
    outfile.open("default_out");
    //need array to store processes
    call.counter(0, name);

return EXIT_SUCCESS;
}
void finder::counter(int ATG, string)
{
    do
    {
        //need to store name of each proccess into out file 
    }while(ATG < amount_to_go);
}
finder::finder()
{
    amount_to_go = 0; //will state number of items to run. current garbage value 
    timer        = 0; //variable for timer. current garbage value
}