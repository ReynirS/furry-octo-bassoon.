#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    ifstream fin;
    char input = 'e';
    string str;
    int check = 1;
    int test = 1;

    fin.open("A1.txt");
    if(fin.is_open())
    {
        while(check == 1)
        {
            for(int i = 0; i < 10; i++)
            {
                if(!fin.eof())
                {
                getline(fin, str);
                cout << str << endl;
                }
            }
            do
            {
                cout << "Do you wish to continue(y/n)?";
                cin >> input;
                if(input == 'y')
                {
                 check = 1;
                 test = 0;
                }
                if(input == 'n')
                {
                    check = 0;
                    test = 0;
                }
            }while(test == 1);
        }
    }

    fin.close();
    return 0;
}
