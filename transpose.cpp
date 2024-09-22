// program to find the transpose of the matrix 
#include<iostream>
using namespace std;

// user defined function to print 2 day array with correct format
void printArr (int arr[][3], int columns)
{
    for(int i = 0; i < 3; i++)  // outer loop 
    {
        for(int j = 0; j < columns; j++) // inner loop 
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()

{
    // declare matrix
	const int rows = 3;    // declare the row of matrix
	const int columns = 3;   // declare the coloums of matrix
	int arr[rows][columns] = {1, 2, 3,
                              4, 5, 6, 
                              7, 8, 9};
    // declare transpose matrix of same size                       
    int transpose[rows][columns];


	cout << "Original Matrix: " << endl;
	printArr(arr, columns);

    // outer for loop to traverse rows
	for(int i = 0; i < rows; i++)
    {
        // inner for loop to traverse column
        for(int j = 0; j < columns; j++)
        {
            // insert arr[row][col] to transpose[col][row]
            transpose[j][i] = arr[i][j];
        }

    }

	cout<< "Transpose Matrix: " << endl;
	printArr(transpose, columns);

return 0;
}