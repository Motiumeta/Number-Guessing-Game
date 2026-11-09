#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int s = rand() % 100 + 1;
    int g, c;
    c = 0;

    cout << "--------- Number Guessing Game (1-100) ---------" << endl;
    cout << "Enter Number between 1-100 \n";
    while(true){
        cout << "Guess: ";
        cin >> g;
        c++;
        if(g != s){
            if(g > s){
                cout << "Too High." << endl;
                cout << "--------------" << endl;
            }
            else{
                cout << "Too low." << endl;
                cout << "--------------" << endl;
            }
        }
        else{
            cout << "------------------" << endl;
            cout << "You get it." << endl;
            cout << "------------------" << endl;
            cout << "Number of Tries: " << c << endl;
            break;
        }
    }
    return 0;
}
