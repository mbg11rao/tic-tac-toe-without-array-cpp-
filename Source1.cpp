#include <iostream>
using namespace std;
int main() {

    int randomNumber, randomtoss;
    string result = " ";
    randomtoss = randomNumber = rand() % 2;
    if (randomtoss == 1)
        result = " Head ";
    else
        result = " Tail ";
    char R1C1 = ' ', R1C2 = ' ', R1C3 = ' ', R2C1 = ' ', R2C2 = ' ', R2C3 = ' ', R3C1 = ' ', R3C2 = ' ', R3C3 = ' ';

    cout << "\t\tWelcome to Tic Tac Toe Game\t\t\n\n";
    cout << " \nit is time for toss please chosse head or tail\n ";

    cout << "\n" << result << " Will be the first player X " << "\n";

    cout << "\n\t\t**********PLAY**********\t\t\n" << "\n";
    int Count = 0, Selection = 0;

    while (Count < 9)
    {
        if (Count % 2 == 0)
        {
            cout << "Player X: \nEnter the number between 1-9 to play : ";
            cin >> Selection;

            switch (Selection)
            {
            case 1:
            {
                if (R1C1 != 'X' && R1C1 != 'O')
                {
                    R1C1 = 'X';
                }
                else
                {
                    Count--;
                }
                break;

            }
            case 2:
            {
                if (R1C2 != 'X' && R1C2 != 'O')
                {
                    R1C2 = 'X';
                }
                else
                {
                    Count--;
                }
                break;
            }
            case 3:
            {
                if (R1C3 != 'X' && R1C3 != 'O')
                {
                    R1C3 = 'X';
                }
                else
                {
                    Count--;
                }
                break;
            }
            case 4:
            {
                if (R2C1 != 'X' && R2C1 != 'O')
                {
                    R2C1 = 'X';
                }
                else
                {
                    Count--;
                }
                break;
            }
            case 5:
            {
                if (R2C2 != 'X' && R2C2 != 'O')
                {
                    R2C2 = 'X';
                }
                else
                {
                    Count--;
                }
                break;
            }
            case 6:
            {
                if (R2C3 != 'X' && R2C3 != 'O')
                {
                    R2C3 = 'X';
                }
                else
                {
                    Count--;
                }
                break;
            }
            case 7:
            {
                if (R3C1 != 'X' && R3C1 != 'O')
                {
                    R3C1 = 'X';
                }
                else
                {
                    Count--;
                }
                break;
            }
            case 8:
            {
                if (R3C2 != 'X' && R3C2 != 'O')
                {
                    R3C2 = 'X';
                }
                else
                {
                    Count--;
                }
                break;
            }
            case 9:
            {
                if (R3C3 != 'X' && R3C3 != 'O')
                {
                    R3C3 = 'X';
                }
                else
                {
                    Count--;
                }
                 break;
            }
            }
        }
         else
        {
            cout << "Player X: \nEnter the number between 1-9 to play : ";
            cin >> Selection;
            if (Selection == 1)
            {
                if (R1C1 != 'X' && R1C1 != 'O')
                {
                    R1C1 = 'O';
                }
                else
                {
                    Count--;
                }
            }


            if (Selection == 2)
            {
                if (R1C2 != 'X' && R1C2 != 'O')
                {
                    R1C2 = 'O';
                }
                else
                {
                    Count--;
                }
            }
            if (Selection == 3)
            {
                if (R1C3 != 'X' && R1C3 != 'O')
                {
                    R1C3 = 'O';
                }
                else
                {
                    Count--;
                }
            }
            if (Selection == 4)
            {
                if (R2C1 != 'X' && R2C1 != 'O')
                {
                    R2C1 = 'O';
                }
                else
                {
                    Count--;
                }
            }
            if (Selection == 5)
            {
                if (R2C2 != 'X' && R2C2 != 'O')
                {
                    R2C2 = 'O';
                }
                else
                {
                    Count--;
                }
            }
            if (Selection == 6)
            {
                if (R2C3 != 'X' && R2C3 != 'O')
                {
                    R2C3 = 'O';
                }
                else
                {
                    Count--;
                }
            }
            if (Selection == 7)
            {
                if (R3C1 != 'X' && R3C1 != 'O')
                {
                    R3C1 = 'O';
                }
                else
                {
                    Count--;
                }
            }
            if (Selection == 8)
            {
                if (R3C2 != 'X' && R3C2 != 'O')
                {
                    R3C2 = 'O';
                }
                else
                {
                    Count--;
                }
            }
            if (Selection == 9)
            {
                if (R3C3 != 'X' && R3C3 != 'O')
                {
                    R3C3 = 'O';
                }
                else
                {
                    Count--;
                }
            }


        }
        cout << "___________ __________ __________" << endl;
        cout << "          |          |          " << endl;
        cout << "     ";
        cout << R1C1;
        cout << "    |    ";
        cout << R1C2;
        cout << "     |    ";
        cout << R1C3;
        cout << "     " << endl;
        cout << "__________|__________|__________" << endl;
        cout << "          |          |          " << endl;
        cout << "     ";
        cout << R2C1;
        cout << "    |    ";
        cout << R2C2;
        cout << "     |    ";
        cout << R2C3;
        cout << "    " << endl;
        cout << "__________|__________|__________" << endl;
        cout << "          |          |          " << endl;
        cout << "     ";
        cout << R3C1;
        cout << "    |    ";
        cout << R3C2;
        cout << "     |    ";
        cout << R3C3;
        cout << "     " << endl;
        cout << "__________|__________|__________" << endl;
       


        Count++;


        if (R1C1 == R1C2 && R1C2 == R1C3 && R1C3 != ' ')
        {
            if (R1C1 == 'X')
            {
                cout << "\n\n ~Winner is X~ \n\n";
            }
            else if (R1C1 == 'O')
            {
                cout << "\n\n\t\t*** Winner is O ***\t\t \n\n";
            }
            break;
        }
        else if (R2C1 == R2C2 && R2C2 == R2C3 && R2C3 != ' ')
        {
            if (R2C1 == 'X')
            {
                cout << "\n\n ~Winner is X~ \n\n";
            }
            else if (R2C1 == 'O')
            {
                cout << "\n\n\t\t*** Winner is O ***\t\t \n\n";
            }
            break;
        }
        else if (R3C1 == R3C2 && R3C2 == R3C3 && R3C3 != ' ')
        {
            if (R3C1 == 'X')
            {
                cout << "\n\n\t\t*** Winner is X***\t\t \n\n";
            }
            else if (R3C1 == 'O')
            {
                cout << "\n\n\t\t*** Winner is O ***\t\t \n\n";
            }
            break;
        }
        else if (R1C1 == R2C1 && R2C1 == R3C1 && R3C1 != ' ')
        {
            if (R3C1 == 'X')
            {
                cout << "\n\n\t\t*** Winner is X***\t\t \n\n";
            }
            else if (R3C1 == 'O')
            {
                cout << "\n\n\t\t*** Winner is O ***\t\t \n\n";
            }
            break;
        }
        else if (R1C2 == R2C2 && R2C2 == R3C2 && R3C2 != ' ')
        {
            if (R1C2 == 'X')
            {
                cout << "\n\n\t\t*** Winner is X***\t\t \n\n";
            }
            else if (R1C2 == 'O')
            {
                cout << "\n\n\t\t*** Winner is O ***\t\t \n\n";
            }
            break;
        }
        else if (R1C3 == R2C3 && R2C3 == R3C3 && R3C3 != ' ')
        {
            if (R1C3 == 'X')
            {
                cout << "\n\n\t\t*** Winner is X***\t\t \n\n";
            }
            else if (R1C3 == 'O')
            {
                cout << "\n\n\t\t*** Winner is O ***\t\t \n\n";
            }
            break;
        }
        else if (R1C1 == R2C2 && R2C2 == R3C3 && R3C3 != ' ')
        {
            if (R1C1 == 'X')
            {
                cout << "\n\n\t\t*** Winner is X***\t\t \n\n";
            }
            else if (R1C1 == 'O')
            {
                cout << "\n\n\t\t*** Winner is O ***\t\t \n\n";
            }
            break;
        }
        else if (R1C3 == R2C2 && R2C2 == R3C1 && R3C1 != ' ')
        {
            if (R3C1 == 'X')
            {
                cout << "\n\n\t\t*** Winner is X***\t\t \n\n";
            }
            else if (R3C1 == 'O')
            {
                cout << "\n\n\t\t*** Winner is O ***\t\t \n\n";
            }
            break;
        }
        else
        {
            if (Count == 9)
            {
                cout << "\n\n\t\t*** :( MATCH DRAWN ***\t\t \n\n";
            }
        }

        }
    }
    