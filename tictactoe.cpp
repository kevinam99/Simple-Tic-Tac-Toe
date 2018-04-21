#include <iostream>
#include <conio.h>
using namespace std;

char square[10] = {'o','1','2','3','4','5','6','7','8','9'};
int whoWon();
void board();
void resetBoard();

int main()
{
	int player = 1,i,choice;
	char action, retry='y';
	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"                                            WELCOME TO TIC TAC TOE!                                              ";
	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"                                                   LOADING                                           "<<endl;
		for(int i=0;i<999;i++)
	{
		for(int j=0;j<9;j++)
		{
			cout<<"/";
			cout<<"\b";
			cout<<"\\";
			cout<<"\b";
		}
		 /*
		  *
		  *                 Delay effect  
		  *
		  *
		  */
		   
	}
	system("cls");
while(retry=='y)
      {
	do
	{
		board();
		player=(player%2)?1:2;
		cout << "                                             Player " << player << ", enter a number:  ";
		cin >> choice;
		action=(player == 1) ? 'X' : 'O';
		if (choice == 1 && square[1] == '1')
			square[1] = action;
		else if (choice == 2 && square[2] == '2')
			square[2] = action;
		else if (choice == 3 && square[3] == '3')
			square[3] = action;
		else if (choice == 4 && square[4] == '4')
			square[4] = action;
		else if (choice == 5 && square[5] == '5')
			square[5] = action;
		else if (choice == 6 && square[6] == '6')
			square[6] = action;
		else if (choice == 7 && square[7] == '7')
			square[7] = action;
		else if (choice == 8 && square[8] == '8')
			square[8] = action;
		else if (choice == 9 && square[9] == '9')
			square[9] = action;
		else
		{
			cout<<"Invalid move. Try again.";
			player--;
			getch();
		}
		i=whoWon();
		player++;
	}while(i==-1);
	board();
	if(i==1)
		cout<<"                                                    Player "<<--player<<" wins ";
	else
		cout<<"                                              Draw";
	cout<<endl<<"                                   Would you like to try again? Enter y or n: ";
	cin>>retry;
      }
	return 0;
}
/*********************************************
	FUNCTION TO RETURN GAME STATUS
	1 FOR GAME IS OVER WITH RESULT
	-1 FOR GAME IS IN PROGRESS
	O GAME IS OVER AND NO RESULT
**********************************************/

int whoWon()
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
	         square[4] != '4' && square[5] != '5' && square[6] != '6' &&
            square[7] != '7' && square[8] != '8' && square[9] != '9')
		return 0;
	else
		return -1;
}


/*******************************************************************
     FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS ACTION
********************************************************************/


void board()
{
	system("cls");
	cout << "\n\n                                                     Tic Tac Toe\n\n";
	cout << "                                             Player 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;
	cout << "                                                      |     |     " << endl;
	cout << "                                                   " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;
	cout << "                                                 _____|_____|_____" << endl;
	cout << "                                                      |     |     " << endl;
	cout << "                                                   " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;
	cout << "                                                 _____|_____|_____" << endl;
	cout << "                                                      |     |     " << endl;
	cout << "                                                   " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;
	cout << "                                                      |     |     " << endl << endl;
}
      
 void resetBoard()
{
	square[1]='1';
	square[2]='2';
	square[3]='3';
	square[4]='4';
	square[5]='5';
	square[6]='6';
	square[7]='7';
	square[8]='8';
	square[9]='9';
	
}

/*******************************************************************
				END OF PROJECT
********************************************************************/
