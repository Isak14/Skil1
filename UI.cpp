#include <iostream>

using namespace std;

void first();
void Input();
void Display();
void Search();

int main()
{

    cout << "Enter I for Input, D for Display, S for Search" << endl;
    first();


return 0;
}

void first()
{
    char c;
    cin >> c;

        if( ( c == 'I') || (c == 'i') )
        {
            Input();
        }

        else if( ( c == 'D') || (c == 'd') )
        {
            Display();
        }

        else if( ( c == 'S') || (c == 's') )
        {
            Search();
        }

        else
        {
            cout << "Invalid input try again" << endl;
            main();
        }
}

void Input()
{

    char repeat;

    cout << "Input name, gender, Year of Birth and Year of Death, in that order;" << endl;
    cout << "Insert Magic Here" << endl;
    cout << "Do you wish to Input another name? (Y/N) " << endl;
    cin >> repeat;
        if ((repeat == 'Y')||(repeat == 'y'))
        {
            Input();
        }
}

void Display()
{
    cout << "Display" << endl;
}

void Search()
{
    cout << "Search" << endl;
}
