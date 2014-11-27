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
    cout << "Do you wish to Input another name? (Y for yes, any other key for No) " << endl;
    cin >> repeat;
        if ((repeat == 'Y')||(repeat == 'y'))
        {
            Input();
        }
        else
        {
            main();
        }
}

void Display()
{
    char order;
    cout << "Insert Magic Here" << endl;
    cout << "Do you wish to order the list by name, gender , birthyear or deathyear? (N/G/B/D)" << endl;
    cin >> order;
        if ((order == 'N')||(order == 'n'))
        {
            Display();
        }
        else if ((order == 'G')||(order == 'g'))
        {
            Display();
        }
        else if ((order == 'B')||(order == 'b'))
        {
            Display();
        }
        else if ((order == 'D')||(order == 'd'))
        {
            Display();
        }
        else
        {
            main();
        }
}

void Search()
{
    char order;
    string terms;
    cout << "In which category do you wish to search? (N/G/B/D) " << endl;
    cin >> order;
    cout << "What are your search terms?" << endl;
    cin >> terms;

        if ((order == 'N')||(order == 'n'))
        {
            cout << "Insert Magic Here" << endl;
        }
        else if ((order == 'G')||(order == 'g'))
        {
            cout << "Insert Magic Here" << endl;
        }
        else if ((order == 'B')||(order == 'b'))
        {
            cout << "Insert Magic Here" << endl;
        }
        else if ((order == 'D')||(order == 'd'))
        {
            cout << "Insert Magic Here" << endl;
        }
        else
        {
            main();
        }
    Search();
}
