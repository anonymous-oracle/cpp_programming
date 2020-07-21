#include <iostream>
using namespace std;

char square[10] = { '_', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
int player, choice;


int checkWin();
void displayBoard();
void markBoard(char mark);

int main()
{
    int status;
    char mark;
    player = 1;

    do
    {
        displayBoard();
        player = (player % 2) ? 1 : 2;

        cout << "player " << player <<", enter a number:  ";
        cin >> choice;

        mark = (player == 1) ? 'X' : 'O';
        markBoard(mark);
        
        status = checkWin();

        player++;
    }while (status ==  -1);
    
    displayBoard();
    
    if (status == 1)
        cout << "==>Player " << --player << " Wins<==" << endl;
        // printf("==>\aPlayer %d wins\n", --player);
    else
        cout << "==>Game Draw<==" << endl;
        // printf("==>\aGame draw\n");


    return 0;
}


// 1 FOR GAME IS OVER WITH RESULT
// -1 FOR GAME IS IN PROGRESS
// 0 GAME IS OVER AND NO RESULT

int checkWin()
{
    if (square[1] == square[2] && square[2] == square[3])
        return 1;
        
    else if (square[4] == square[5] && square[5] == square[6])
        return 1;
        
    else if (square[7] == square[8] && square[8] == square[9])
        return 1;
        
    else if (square[1] == square[4] && square[4] == square[7])
        return 1;
        
    else if (square[2] == square[5] && square[5] == square[8])
        return 1;
        
    else if (square[3] == square[6] && square[6] == square[9])
        return 1;
        
    else if (square[1] == square[5] && square[5] == square[9])
        return 1;
        
    else if (square[3] == square[5] && square[5] == square[7])
        return 1;
        
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
        square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] 
        != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return  -1;

}

void markBoard(char mark)
{

        if (choice == 1 && square[1] == '1')
            square[1] = mark;
            
        else if (choice == 2 && square[2] == '2'){
            square[2] = mark;
        }
            
        else if (choice == 3 && square[3] == '3'){
            square[3] = mark;
        }
            
        else if (choice == 4 && square[4] == '4'){
            square[4] = mark;
        }
            
        else if (choice == 5 && square[5] == '5'){
            square[5] = mark;
        }
            
        else if (choice == 6 && square[6] == '6'){
            square[6] = mark;
        }
            
        else if (choice == 7 && square[7] == '7'){
            square[7] = mark;
        }
            
        else if (choice == 8 && square[8] == '8'){
            square[8] = mark;
        }
            
        else if (choice == 9 && square[9] == '9'){
            square[9] = mark;
        }
            
        else
        {
            cout << "Invalid move" << endl;
            // printf("Invalid move ");

            player--;
            getchar();
        }
    }


void displayBoard()
{
    system("clear"); // clears the screen

    cout << "\n\n\tTic Tac Toe\n" << endl;
    // printf("\n\n\tTic Tac Toe\n\n");

    cout << "Player 1 (X) - Player 2 (O)\n\n" << endl;
    // printf("Player 1 (X)  -  Player 2 (O)\n\n\n");

    cout << "     |     |     " << endl;
    // printf("     |     |     \n");
    cout << "  " << square[7] <<"  |  " << square[8]<< "  |  "<<square[9] << endl;
    // printf("  %c  |  %c  |  %c \n", square[7], square[8], square[9]);

    cout << "_____|_____|_____" << endl;
    // printf("_____|_____|_____\n");

    cout << "     |     |     " << endl;
    // printf("     |     |     \n");

    cout << "  " << square[4] <<"  |  " << square[5]<< "  |  "<<square[6] << endl;
    // printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);

    cout << "_____|_____|_____" << endl;
    // printf("_____|_____|_____\n");

    cout << "     |     |     " << endl;
    // printf("     |     |     \n");

    cout << "  " << square[1] << "  |  " << square[2]<< "  |  "<< square[3] << endl;
    // printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);

    cout << "     |     |     \n" << endl;
}
