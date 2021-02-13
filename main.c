#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int det(int A[100][100], int t);
int det(int A[100][100], int t)
    {
        int Minor[100][100];
        int i,j,k,c1,c2;
        int determinant;
        int c[100];
        int O=1;

        if(t == 2)
        {
            determinant = 0;
            determinant = A[0][0]*A[1][1]-A[0][1]*A[1][0];
            return determinant;
        }
        else
        {
            for(i = 0 ; i < t ; i++)
            {
                c1 = 0, c2 = 0;
                for(j = 0 ; j < t ; j++)
                {
                    for(k = 0 ; k < t ; k++)
                    {
                        if(j != 0 && k != i)
                        {
                            Minor[c1][c2] = A[j][k];
                            c2++;
                            if(c2>t-2)
                            {
                                c1++;
                                c2=0;
                            }
                        }
                    }
                }
                determinant = determinant + O*(A[0][i]*det(Minor,t-1));
                O=-1*O;
            }
        }
    return determinant;
}
void main()
{
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t  ");
    int i;
    for(i=0;i<25;i++)
    {
        printf("*");
    }
    printf("\n\n\t\t\t              *****   MATRIX  MATHEMATICS IN C LANGUAGE   *****\n");
    printf("\n\t\t\t\t\t\t  ");
    for(i=0;i<25;i++)
    {
        printf("*");
    }
    //Synopsis//
    printf("\n#Introduction and Examples\n");
    printf("\n#Matrix Addition and Subtraction\n");
    printf("\n#Matrix Multiplication and scalar multiplication\n");
    printf("\n#The Transpose of a Matrix\n");
    printf("\n#The Determinant of a Matrix\n");
    printf("\n#The Inverse of Matrix\n");
    printf("\n#Types of Square Matrix\n");
    printf("\n\n\n\n\n");
    printf("\n\n\n\n\t\t\t\tMATRIX MATHEMATICS IN C PROGRAMMING\n\n");
    printf("    INTRODUCTION: \n");
    printf("\n");
    printf("A matrix is a rectangular array of numbers or function.\nThe numbers inside the matrix are called the elements or entries.\n");
    printf("It is a systematic arrangement of the element and may represent vector or scalar quantity.\n");
    printf("Matrix is donated by capital letters and the element are enclosed in [] square brackets or () parenthesis.\n");
    printf("We can add, subtract, and multiply matrices together, under certain conditions.\n");
    printf("\n");
    printf("\nPRESS THE FOLLOWING FOR MATRIX OPERATIONS: \n");
    printf("\n\t1. ADDITION\n");
    printf("\n\t2. SUBTRACTION\n");
    printf("\n\t3. SCALAR MULTIPLICATION\n");
    printf("\n\t4. MATRIX MULTIPLICATION\n");
    printf("\n\t5. TRANSPOSING\n");
    printf("\n\t6. DETERMINANT OF A MATRIX\n");
    printf("\n\t7. TYPES OF SQUARE MATRIX\n");
    int ch;
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: printf("\n\n\t\tMATRIX ADDITION IN C LANGUAGE\n");
                printf("ADDITION: Addition between two matrices is feasible if and only if they have the same order or the dimensions,that is they must have the same number of rows and columns.\n");
                printf("\n");
                int m, n, c, d, mat1[10][10], mat2[10][10], sum[10][10];
                printf("Enter the number of rows and columns of matrix\n");
                scanf("%d%d", &m, &n);
                printf("Enter the elements of first matrix\n");
                for (c = 0; c < m; c++)
                {
                    for (d = 0; d < n; d++)
                    {
                        scanf("%d", &mat1[c][d]);
                    }
                }
                printf("Enter the elements of second matrix\n");
                for (c = 0; c < m; c++)
                {
                    for (d = 0 ; d < n; d++)
                    {
                        scanf("%d", &mat2[c][d]);
                    }
                }
                printf("\n\n\n\n");
                printf("Sum of entered matrices:-\n");
                for (c = 0; c < m; c++)
                {
                    for (d = 0 ; d < n; d++)
                    {
                        sum[c][d] = mat1[c][d] + mat2[c][d];
                        printf("%d\t", sum[c][d]);
                    }
                printf("\n");
                }
                break;
        case 2: printf("\n\n\t\tMATRIX SUBTRACTION IN C\n");
                printf("SUBTRACTION: Subtraction between two matrices is possible if they have the same order or the dimensions.\nSo, they must have the same number of rows and columns in order to subtract two or more matrices.\n");
                printf("\n");
                int x, y, p, q, m1[10][10], m2[10][10], difference[10][10];
                printf("Enter the number of rows and columns of matrix\n");
                scanf("%d%d", &x, &y);
                printf("Enter the elements of first matrix\n");
                for (p = 0; p < x; p++)
                {
                    for (q = 0 ; q < y; q++)
                    {
                        scanf("%d", &m1[p][q]);
                    }
                }
                printf("Enter the elements of second matrix\n");
                for (p = 0; p< x; p++)
                {
                    for (q = 0; q < y; q++)
                    {
                        scanf("%d", &m2[p][q]);
                    }
                }
                printf("\n\n\n\n");
                printf("Difference of entered matrices:-\n");
                for (p = 0; p < x; p++)
                {
                    for (q = 0; q < y; q++)
                    {
                        difference[p][q] = m1[p][q] - m2[p][q];
                        printf("%d\t",difference[p][q]);
                    }
                    printf("\n");
                }
                break;
        case 3: printf("\n\n\t\tSCALAR MATRIX MULTIPLICATION IN C\n");
                printf("A matrix is said to be as ordered rectangular array of number.\nThe operation on matrices that is the multiplication of a matrix generally falls into two categories:SCALAR-MATRIX and MATRIX-MATRIX.\n");
                printf("SCALAR MULTIPLICATION: In the matrix, a real number is called a scalar in which a single number is being multiplied by all the elements present in the matrix.\n");
                printf("\n");
                int i, j, rows, columns, Multiplication[10][10], Number;
                printf("Enter Number of rows and columns\n");
                scanf("%d %d", &i, &j);
                printf("Enter the Matrix Elements\n");
                for(rows = 0; rows < i; rows++)
                {
                    for(columns = 0; columns < j; columns++)
                    {
                        scanf("%d", &Multiplication[rows][columns]);
                    }
                }
                printf("Enter the Multiplication Value  :  ");
                scanf("%d", &Number);
                for(rows = 0; rows < i; rows++)
                {
                    for(columns = 0; columns < j; columns++)
                    {
                        Multiplication[rows][columns] = Number * Multiplication[rows][columns];
                    }
                }
                printf("\n\n\n\n");
                printf("The Result of a Scalar Matrix Multiplication is : \n");
                for(rows = 0; rows < i; rows++)
                {
                    for(columns = 0; columns < j; columns++)
                    {
                        printf("%d \t ", Multiplication[rows][columns]);
                    }
                    printf("\n");
                }
                break;
        case 4: printf("\n\n\t\tMATRIX MULTIPLICATION IN C\n");
                printf("MATRIX MULTIPLICATION: Multiplication of the matrix with another entire matrix.\n");
                printf("\n");
                int M, N, p1, q1, c1, d1, k1, sum1 = 0;
                int first[10][10], second[10][10], multiply[10][10];
                printf("Enter number of rows and columns of first matrix\n");
                scanf("%d%d", &M, &N);
                printf("Enter elements of first matrix\n");
                for (c1 = 0; c1 < M; c1++)
                {
                    for (d1 = 0; d1 < N; d1++)
                    {
                        scanf("%d", &first[c1][d1]);
                    }
                }
                printf("Enter number of rows and columns of second matrix\n");
                scanf("%d%d", &p1, &q1);
                if (N != p1)
                {
                    printf("The matrices can't be multiplied with each other.\n");
                }
                else
                {
                    printf("Enter elements of second matrix\n");
                for (c1 = 0; c1 < p1; c1++)
                {
                        for (d1 = 0; d1 < q1; d1++)
                        {
                            scanf("%d", &second[c1][d1]);
                        }
                }
                for (c1 = 0; c1 < M; c1++)
                {
                    for (d1 = 0; d1 < q1; d1++)
                    {
                        for (k1 = 0; k1 < p1; k1++)
                        {
                            sum1 = sum1 + first[c1][k1]*second[k1][d1];
                        }
                        multiply[c1][d1] = sum1;
                        sum1 = 0;
                    }
                }
                printf("\n\n\n\n");
                printf("Product of the matrices:\n");
                for (c1 = 0; c1 < M; c1++)
                {
                    for (d1 = 0; d1 < q1; d1++)
                    {
                        printf("%d\t", multiply[c1][d1]);
                    }
                printf("\n");
                }
                }
                break;
        case 5: printf("\n\n\t\tTRANSPOSING A MATRIX IN C\n");
                printf("TRANSPOSING: The matrix obtained from a given matrix A by interchanging its rows and columns is called Transpose of matrix A.\nTranspose of A is denoted by A’ or  A^{T}.\nIf A is of order m*n, then A’ is of the order n*m.\nClearly, the transpose of the transpose of A is the matrix A itself.\n");
                printf("\n");
                int M2, N2, C1, D1, matrix[10][10], transpose[10][10];
                printf("Enter the number of rows and columns of matrix\n");
                scanf("%d%d", &M2, &N2);
                printf("Enter elements of the matrix\n");
                for (C1 = 0; C1 < M2; C1++)
                {
                    for(D1 = 0; D1 < N2; D1++)
                    {
                        scanf("%d", &matrix[C1][D1]);
                    }
                }
                for (C1 = 0; C1 < M2; C1++)
                {
                    for(D1 = 0 ; D1 < N2 ; D1++)
                    {
                        transpose[D1][C1] = matrix[C1][D1];
                    }
                }
                printf("\n\n\n\n");
                printf("Transpose of the matrix:\n");
                for (C1 = 0; C1 < N2; C1++)
                {
                    for (D1 = 0; D1 < M2; D1++)
                    {
                        printf("%d\t", transpose[C1][D1]);
                    }
                    printf("\n");
                }
                break;
        case 6: printf("\n\n\t\tDETERMINANT OF A MATRIX IN C");
                printf("DETERMINANT OF A MATRIX: In linear algebra, the determinant is a scalar value that can be computed from the elements of a square matrix and encodes certain properties of the linear transformation described by the matrix.\nThe determinant of a matrix A is denoted det(A), det A, or |A|.\nGeometrically, it can be viewed as the volume scaling factor of the linear transformation described by the matrix.\n");
                printf("\n");
                int A[100][100];
                int g,h,k,t,res;
                printf("Enter the order of the matrix: \n");
                scanf("%d",&t);
                printf("\nEnter the elements of the matrix one by one: \n");
                for(g = 0 ; g < t ; g++)
                {
                for(h = 0 ; h < t ; h++)
                {
                    scanf("%d",&A[g][h]);
                }
                }
                for(g = 0 ; g < t ; g++)
                {
                for(h = 0 ; h < t ; h++)
                {
                    printf("%5d",A[g][h]);
                }
                printf("\n");
                }
                printf("\n\n\n\n");
                res = det(A,t);
                printf("%d",res);
                int det(int A[100][100], int t)
                {
                int Minor[100][100];
                int i,j,k,c1,c2;
                int determinant;
                int c[100];
                int O=1;

                if(t == 2)
                {
                determinant = 0;
                determinant = A[0][0]*A[1][1]-A[0][1]*A[1][0];
                return determinant;
                }
                else
                {
                for(i = 0 ; i < t ; i++)
                {
                c1 = 0, c2 = 0;
                for(j = 0 ; j < t ; j++)
                {
                    for(k = 0 ; k < t ; k++)
                    {
                        if(j != 0 && k != i)
                        {
                            Minor[c1][c2] = A[j][k];
                            c2++;
                            if(c2>t-2)
                            {
                                c1++;
                                c2=0;
                            }
                        }
                    }
                }
                determinant = determinant + O*(A[0][i]*det(Minor,t-1));
                O=-1*O;
                }
                }
                return determinant;
                }
                break;

        case 7: printf("\n\n\t\tTYPES OF SQUARE MATRICES IN C");
                printf("TYPES OF SQUARE MATRIX:\n1.Row Matrix:\nA matrix is said to be a row matrix if it has only one row.\n");
                printf("2.Column Matrix:\nA matrix is said to be a column matrix if it has only one column.\n");
                printf("3.Rectangular Matrix:\nA matrix is said to be rectangular if the number of rows is not equal to the number of columns.\n");
                printf("4.Square Matrix:\nA matrix is said to be square if the number of rows is equal to the number of columns.\n");
                printf("5.Diagonal Matrix:\nA square matrix is said to be diagonal if at least one element of principal diagonal is non-zero and all the other elements are zero.\n");
                printf("6.Scalar Matrix:\nA diagonal matrix is said to be scalar if all of its diagonal elements are the same.\n");
                printf("7.Identity or Unit Matrix:\nA diagonal matrix is said to be identity if all of its diagonal elements are equal to one, denoted by I.\n");
                printf("8.Triangular Matrix:\nA square matrix is said to be triangular if all of its elements above the principal diagonal are zero (lower triangular matrix) or all of its elements below the principal diagonal are zero (upper triangular matrix).\n");
                printf("9.Null or Zero Matrix:\nA matrix is said to be a null or zero matrix if all of its elements are equal to zero.It is denoted by O.\n");
                printf("\n\n\n\n\n\n\n\n");
                /* C Program to check if a given matrix is an identity matrix */
                int a[10][10];
                int v = 0, w = 0, row = 0, col = 0;
                printf("Checking for identity matrix");
                printf("\n\n\n\n\n\n");
                printf ("Enter the order of the matrix (m x n):\n");
                printf ("where m = number of rows; and\n");
                printf ("      n = number of columns\n");
                scanf ("%d %d", &row, &col);
                int flag = 0;
                printf ("Enter the elements of the matrix\n");
                for (v = 0; v< row; v++)
                    for (w = 0; w< col; w++)
                        scanf ("%d", &a[v][w]);
                for (v= 0; v < row; v++)
                {
                    for (w = 0; w< col; w++)
                    {
                        if (v==w && a[v][w] != 1)
                        {
                            flag = -1;
                            break;
                        }
                        else if (v != w && a[v][w] != 0)
                        {
                            flag = -1;
                            break;
                        }
                    }
                }
                if (flag == 0)
                {
                    printf ("It is a IDENTITY MATRIX\n");
                }
                else
                {
                    printf ("It is NOT an identity matrix\n");
                }
                break;

    }
}









