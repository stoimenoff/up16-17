#include <iostream>

using namespace std;

bool canPaint(char **arr, int row, int col, int x, int y)
{
	return (x>=0 && x < row) && (y >= 0 && y < col) && (arr[x][y] == ' ');
}

void paint(char **arr, int row, int col, int x, int y)
{
	if(!canPaint(arr, row, col, x, y))
	{
		return;
	}
	arr[x][y] = 'r';
	if(canPaint(arr, row, col, x + 1, y))
	{
		paint(arr, row, col, x + 1, y);
	}
	if(canPaint(arr, row, col, x - 1, y))
	{
		paint(arr, row, col, x - 1, y);
	}
	if(canPaint(arr, row, col, x, y - 1))
	{
		paint(arr, row, col, x, y - 1);
	}
	if(canPaint(arr, row, col, x, y + 1))
	{
		paint(arr, row, col, x, y + 1);
	}
}

void print(char **arr, int row, int col)
{
	for (int i = 0; i <= row + 1; ++i)
	{
		cout<<"* ";
	}
	cout<<endl;
	for (int i = 0; i < row; ++i)
	{
		cout<<"* ";
		for (int j = 0; j < col; ++j)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<"* "<<endl;
	}

	for (int i = 0; i <= row + 1; ++i)
	{
		cout<<"* ";
	}
}

int main(){
	const int ROW = 8;
	const int COL = 8;
	char **arr = new char*[ROW];
	for (int i = 0; i < ROW; ++i)
	{
		arr[i] = new char[COL];
	}

	for (int i = 0; i < ROW; ++i)
	{
		for (int j = 0; j < COL; ++j)
		{
			arr[i][j] = ' ';
		}
	}

	cout<< "Number of b\'s: ";
	int numberB;
	cin>>numberB;
	int x,y;
	for (int i = 0; i < numberB; ++i)
	{
		do
		{
			cin>>x>>y;
			arr[x][y] = 'b';
		}
		while(x < 0 || x >= ROW || y < 0 || y >= COL );
	}

	int pointX, pointY;
	cin>>pointX, pointY;

  	print(arr, ROW, COL);
  	paint(arr, ROW, COL, pointX,pointY);

	cout<<endl;
	cout<<endl;
	
  	print(arr, ROW, COL);
	return 0;
}