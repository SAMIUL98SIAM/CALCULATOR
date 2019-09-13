#include <iostream>
#include<windows.h>
#include<conio.h>


using namespace std;



void ADDD()
{
    system("cls");
    system("color 07");
    cout << "HOW MUCH YOU TAKE ELEMENTS FOR ADDITION:" << endl;
    int e ;
    cin >> e;
    int setarry [100] ;
    cout << "ENTER THE CUURRENT ELEMENTS:" << endl;
    for(int i=0 ; i<100 ; i++)
    {
        setarry [i] =0;
    }
    for (int i=1 ; i<=e ; i++)
    {
        setarry [i]=i;
        cout << setarry [i] << endl;
    }
    for(int i=1 ; i<=e ; i++)
    {
        setarry [i] = setarry [i] + setarry [i-1] ;

    }
    cout << "ADDITION:" << setarry [i] << endl;


}

void SUB()
{
    system("cls");
    system("color 0D");
    cout << "WELCOME TO SUBTRACTION" << endl;
    cout << "ENTER TWO NUMBERS:" << endl;
    double a,b;
    cin >> a >> b ;
    cout << "SUBTRACTION:" << a-b << endl;

}

void MUL()
{
    system("cls");
    system("color 08");
    cout << "WELCOME TO MULTIPLICATION" << endl;
    cout << "ENTER TWO NUMBERS:" << endl;
    double a,b;
    cin >> a >> b ;
    cout << "MULTIPLICATION:" << a*b << endl;

}

void DIV()
{
    system("cls");
    system("color 09");
    cout << "WELCOME TO DIVISION" << endl;
    cout << "ENTER TWO NUMBERS:" << endl;
    double a,b;
    cin >> a >> b ;
    cout << "DIVISION:" << a/b << endl;

}

void SQR()
{
    system("cls");
    system("color 0C");
    cout << "WELCOME TO SQUARE" << endl;
    cout << "ENTER NUMBER:" << endl;
    double a ;
    cin >> a ;
    cout << "SQUARE:" << a * a << endl;

}
void QUB()
{
    system("cls");
    system("color 0E");
    cout << "WELCOME TO QUBE" << endl;
    cout << "ENTER NUMBER:" << endl;
    double a;
    cin >> a ;
    cout << "QUBE:" << a*a*a << endl;

}

void PER()
{
    system("cls");
    system("color 07");
    cout << "WELCOME TO PERCENTAGE" << endl;
    cout << "ENTER NUMBER:" << endl;
    double a , b;
    cin >> a ;
    cout << "ENTER PERCENTAGE NUMBER:" << endl;
    cin >> b ;
    cout << "PERCENTAGE:" << a*b/100 << "%" << endl;

}

void Show()
{
    cout << "----------------CASIO---------------" << endl;
    cout << "\n\n\n\n" << endl;
    cout << "---------------PRESS 1 FOR ADDITION--------------" << endl;
    cout << "---------------PRESS 2 FOR SUBTRACTION--------------" << endl;
    cout << "---------------PRESS 3 FOR MULTIPLICATION--------------" << endl;
    cout << "---------------PRESS 4 FOR DIVISION--------------" << endl;
    cout << "---------------PRESS 5 FOR SQAURE--------------" << endl;
    cout << "---------------PRESS 6 FOR QUBE--------------" << endl;
    cout << "---------------PRESS 7 FOR PERCENTAGE--------------" << endl;
    cout << "\n\n" << endl;
}

void swis()
{
    int x ;

    cout << "PLEASE TAKE THE KEY:" << endl;

    cin >> x ;

    switch (x)
        {
        case 1 :
            {
                ADDD();
                cout << "PLEASE ENTER THE NEXT STEP:" << endl;
                getch();
                system("cls");
                Show();
                swis();

                break ;
            }
        case 2 :
            {
                SUB();
                cout << "PLEASE ENTER THE NEXT STEP:" << endl;
                getch();
                system("cls");
                Show();
                swis();

                break ;
            }
        case 3 :
            {
                MUL();
                cout << "PLEASE ENTER THE NEXT STEP:" << endl;
                getch();
                system("cls");
                Show();
                swis();

                break ;
            }
        case 4 :
            {
                DIV();
                cout << "PLEASE ENTER THE NEXT STEP:" << endl;
                getch();
                system("cls");
                Show();
                swis();

                break ;
            }
        case 5 :
            {
                SQR();
                cout << "PLEASE ENTER THE NEXT STEP:" << endl;
                getch();
                system("cls");
                Show();
                swis();

                break ;
            }
        case 6 :
            {
                QUB();
                cout << "PLEASE ENTER THE NEXT STEP:" << endl;
                getch();
                system("cls");
                Show();
                swis();

                break ;
            }

        case 7 :
            {
                PER();
                cout << "PLEASE ENTER THE NEXT STEP:" << endl;
                getch();
                system("cls");
                Show();
                swis();

                break ;
            }
        default :
            {
                cout << "MATH ERROR\nPRESS RIGHT:" << endl;
                getch();
                system("cls");
                swis();

            }
        }

}
int main()
{
    system("color 0F");


    Show();


    swis();

    return 0 ;
}





