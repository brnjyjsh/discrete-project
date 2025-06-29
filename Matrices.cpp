#include<iostream>
#include<string>
using namespace std;

int main()
{
	int choice, i, j,first[6][6], second[6][6], sum[6][6], diff[6][6], prod[6][6];
	char cont;
	int row1 = 8;
	int row2 = 8;
	int column1 = 8;
	int column2 = 8;
	char confirm;
	while (cont!='n')
	{
		choices:
			
		cout << "-----Matrix-----" << endl;
		cout << "1. Sum of Matrices" << endl;
		cout << "2. Difference of Matrices" << endl;
		cout << "3. Product of Matrices" << endl;
		cout << "4. Exit" << endl;
		cout << "\n\nEnter your choice :"; 
		cin >> choice;
		
		if (choice==1)
		{		int row1 = 8;
	int row2 = 8;
	int column1 = 8;
	int column2 = 8;
			cout << "=====| SUM OF MATRICES |=====" << endl;
		
			while (row1 >=8 )
			{
			cout << "\n Enter number of rows: ";
			cin >> row1;
			if (row1 > 7)
			{ 
			cout << "\n Invalid Input, Please Try again." ;
			}
			
		}
	
			while (column1 >= 8)
			{
			cout << "\n Enter number of columns: ";
			cin >> column1;
			if (column1 >7)
			{cout << "\n Invalid Input, Please Try again.";
			}
			
		}
			cout << "\nEnter the element of first matrix:\n";
			
			for (i=0; i<row1; i++)
			{
				for (j=0; j<column1; j++)
				{
					cin >> first[i][j];
				}
			}
			cout << "\nEnter the element of second matrix:\n";
			
			for (i=0; i<row1; i++)
			{
				for (j=0; j<column1; j++)
				{
					cin >> second[i][j];
				}
			}
			
			for (i=0; i<row1; i++)
			{
				for(j=0; j<column1; j++)
				{
					sum[i][j] = first[i][j]+second[i][j];
			 	}
			}
			
			cout << "-----| Sum of Matrix |-----\n";
			for (i=0; i<row1; i++)
			{
				for(j=0; j<column1; j++)
				{
					cout << sum[i][j] << "\t";
			 	}
			 	cout << endl;
			}
		}
		if (choice==2)
		{		int row1 = 8;
	int row2 = 8;
	int column1 = 8;
	int column2 = 8;
			cout << "=====| DIFFERENCE OF MATRICES |=====" << endl;
				while (row1 >=8 )
			{
			cout << "\n Enter number of rows: ";
			cin >> row1;
			if (row1 > 7)
			{ 
			cout << "\n Invalid Input, Please Try again." ;
			}
			
		}
			while (column1 >= 8)
			{
			cout << "\n Enter number of columns: ";
			cin >> column1;
			if (column1 >7)
			{cout << "\n Invalid Input, Please Try again.";
			}
			
		}
			
			cout << "\nEnter the element of first matrix:\n";
			
			for (i=0; i<row1; i++)
			{
				for (j=0; j<column1; j++)
				{
					cin >> first[i][j];
				}
			}
			cout << "\nEnter the element of second matrix:\n";
			
			for (i=0; i<row1; i++)
			{
				for (j=0; j<column1; j++)
				{
					cin >> second[i][j];
				}
			}
			
			for (i=0; i<row1; i++)
			{
				for(j=0; j<column1; j++)
				{
					diff[i][j] = first[i][j]-second[i][j];
			 	}
			}
			
			cout << "-----| Difference of Matrix |-----\n";
			for (i=0; i<row1; i++)
			{
				for(j=0; j<column1; j++)
				{
					cout << diff[i][j] << "\t";
			 	}
			 	cout << endl;
			}
		}
		if (choice==3)
		{		int row1 = 8;
	int row2 = 8;
	int column1 = 8;
	int column2 = 8;
							while (row1 >=8 )
			{
			cout << "\n Enter the rows of the first matrix: ";
			cin >> row1;
			if (row1 > 7)
			{ 
			cout << "\n Invalid Input, Please Try again." ;
			}
			
		}
			
			while (column1 >= 8)
			{
			cout << "\n Enter the coluimns of the first matrix: ";
			cin >> column1;
			if (column1 >7)
			{cout << "\n Invalid Input, Please Try again.";
			}
			
		}
			
		while (row2 >=8 )
			{
			cout << "\n Enter the rows of the second matrix: ";
			cin >> row2;
			if (row2 > 7)
			{ 
			cout << "\n Invalid Input, Please Try again." ;
			}
			
		}
			
				while (column2 >= 8)
			{
			cout << "\n Enter the columns of the second matrix: ";
			cin >> column2;
			if (column2 >7)
			{cout << "\n Invalid Input, Please Try again.";
			}
			
		}
			
			while (column1!=row2)
			{
			cout << "============================================" << endl;
			cout << "Error! first column is not equal to 2nd row.\n";
			cout << "============================================" << endl;
			cout << "Enter the rows of first matrix:\n";
			cin >> row1;
			cout << "Enter the columns of first matrix:\n";
			cin >> column1;
			cout << "Enter the rows of second matrix:\n";
			cin >> row2;
			
			cout << "Enter the columns of second matrix:\n";
			cin >> column2;
			}
			
			cout << "Enter the elements of first matrix A";
			cout << "\n";
			for (i=0; i<row1; i++)
			{
				for (j=0; j<column1; j++)
				{
					cin >> first[i][j];
				}
			}	
			
			cout << "Enter the elements of second matrix B";
			cout << "\n";
			for (i=0; i<row2; i++)
			{
				for (j=0; j<column2; j++)
				{
					cin >> second[i][j];
				}
			}	
			
			for (i=0; i<row1; i++)
			{
				for ( j=0; j<column2; j++)
				{
					prod[i][j] = 0;
				}			
			}
			for ( i=0; i<row2; i++)
			{
					for (j=0; j<column1; j++)
					{
						for (int k=0; k<column2; k++)
						{
							prod[i][j] += first[i][k] * second[k][j];
						}
					}
			}
			cout << "=====| PRODUCT OF MATRICES |=====" << endl;
			for (i=0; i<row1; i++)
			{
				for (j=0; j<column2; j++)
				{
					cout << prod[i][j] << "\t";
				}
				cout<<endl;
			}
	}
		if (choice==4)
		{		int row1 = 8;
	int row2 = 8;
	int column1 = 8;
	int column2 = 8;
			system("pause");
			break;
		}
		if (choice > 4)
		{
			cout << "Invalid Number." << endl;
			goto choices;
		}
	
		cout << "Do you want to continue? [Y/N]" << endl;
		cin >> cont;
		cont = tolower(cont);
		
	}
}
