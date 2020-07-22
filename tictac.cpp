#include <iostream>
#include <stdlib.h>
using namespace std;
const int M=3, N=3;
void disp_matrix(char array[M][N]);
int main()
{
	
	char tictac[3][3],num,decision;
        int pos, i,j;
	cout << "Do you want to play('Y' or 'N')? " <<endl;
	cin >> decision;
	while(decision =='Y')
	{
		int t = 0;
		system("clear");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			tictac[i][j]='_';
		}
	}
	disp_matrix(tictac);
	while(t<9)
	{
		if(t%2==0)
		{
			cout << "Player 1 turn" <<endl;
		}
		else
		{
			cout << "Player 2 turn" <<endl;
		}
		cout << "Enter '0' or 'x' and the position 1-9: ";
		cin >> num >>pos;
		pos--;
		i = pos/3;
		j = pos%3;
		if(tictac[i][j]!='_')
		{
			cout << "This cell is already used, Select other cell" <<endl;
			cout <<"Enter new position 1-9: ";
			cin >> pos;
			pos--;
			i = pos/3;
			j=pos%3;
		}


		tictac[i][j]=num;
		t++;
		system("clear");
		disp_matrix(tictac);
		cout << flush;
		
		if(tictac[0][0]=='0' && tictac[0][1]=='0' &&tictac[0][2]=='0')
		{
			cout <<"Player 1 Wins!!" <<endl;
			break;
		}
		else if(tictac[1][0]=='0' && tictac[1][1]=='0' && tictac[1][2]=='0')
		{
			cout <<"Player 1 Wins!!" <<endl;
			break;
		}
		else if(tictac[2][0]=='0' && tictac[2][1]=='0' && tictac[2][2]=='0')
		{
			cout <<"Player 1 Wins!!" <<endl;
			break;
		}
		else if(tictac[0][0]=='0' && tictac[1][0]=='0' && tictac[2][0]=='0')
		{
			cout <<"Player 1 Wins!!" <<endl;

			break;
		}
		else if(tictac[0][1]=='0' && tictac[1][1]=='0' && tictac[2][1]=='0')
		{
			cout <<"Player 1 Wins!!" <<endl;

			break;
		}
		else if(tictac[0][2]=='0' && tictac[1][2]=='0' && tictac[2][2]=='0')
		{
			cout <<"Player 1 Wins!!" <<endl;

			break;
		}
		else if(tictac[0][0]=='0' && tictac[1][1]=='0' && tictac[2][2]=='0')
		{
			cout <<"Player 1 Wins!!" <<endl;

			break;
		}
		else if(tictac[0][2]=='0' && tictac[1][1]=='0' && tictac[2][0]=='0')
		{
			cout <<"Player 1 Wins!!" <<endl;

			break;
		}
		



		else if(tictac[0][0]=='x' && tictac[0][1]=='x' &&tictac[0][2]=='x')
		{
			cout <<"Player 2 Wins!!" <<endl;
			break;
		}
		else if(tictac[1][0]=='x' && tictac[1][1]=='x' && tictac[1][2]=='x')
		{
			cout <<"Player 2 Wins!!" <<endl;
			break;
		}
		else if(tictac[2][0]=='x' && tictac[2][1]=='x' && tictac[2][2]=='x')
		{
			cout <<"Player 2 Wins!!" <<endl;
			break;
		}
		else if(tictac[0][0]=='x' && tictac[1][0]=='x' && tictac[2][0]=='x')
		{
			cout <<"Player 2 Wins!!" <<endl;

			break;
		}
		else if(tictac[0][1]=='x' && tictac[1][1]=='x' && tictac[2][1]=='x')
		{
			cout <<"Player 2 Wins!!" <<endl;

			break;
		}
		else if(tictac[0][2]=='x' && tictac[1][2]=='x' && tictac[2][2]=='x')
		{
			cout <<"Player 2 Wins!!" <<endl;

			break;
		}
		else if(tictac[0][0]=='x' && tictac[1][1]=='x' && tictac[2][2]=='x')
		{
			cout <<"Player 2 Wins!! "<<endl;

			break;
		}
		else if(tictac[0][2]=='x' && tictac[1][1]=='x' && tictac[2][0]=='x')
		{
			cout <<"Player 2 Wins!!" <<endl;

			break;
		}



	}
	if(t==9)
	{
		cout << "Game Tied, Try Again" <<endl;
	}
	cout << "Do you want to play again?('Y' or 'N'): ";
	cin >> decision;
	}
	return 0;
}
void disp_matrix(char array[M][N])
{
	int i,j;
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			cout << array[i][j];
		}
		cout << endl;
	}
}
