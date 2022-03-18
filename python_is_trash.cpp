#include <iostream>
using namespace std;
int l, b;
char c;
int count = 1;
void ractangle(void)
{
    cout << "you selest ractrangle \n";
    cout << "how much length u want for rectrangle \n";
    cin >> l;
    cout << "how much breath u want for rectrangle \n";
    cin >> b;
    cout << "which element u want \n";
    cin >> c;
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < b; j++)
        {
            /* code */
            cout << c << " ";
        }
        cout << endl;
    }
}

void holo_ractrangle(void)
{
    cout << "you selest holo  ractrangle \n";
    cout << "how much length u want for holo rectrangle \n";
    cin >> l;
    cout << "how much breath u want for holo rectrangle \n";
    cin >> b;
    cout << "which element u want \n";
    cin >> c;

    for (int i = 0; i < l; i++)
    {
        /* code */
        for (int j = 0; j < b; j++)
        {
            /* code */
            if (i == 0 || i == l - 1 || j == 0 || j == b - 1)
            {

                cout << c;
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
}

void square()
{

    cout << "you selest square \n";
    cout << "how much size u want for square \n";
    cin >> l;

    cout << "which element u want \n";
    cin >> c;
    for (int i = 0; i < l; i++)
    {
        /* code */
        for (int j = 0; j < l; j++)
        {
            /* code */
            cout << c << " ";
        }
    }
}

void holo_square()
{

    cout << "you selest holo square \n";
    cout << "how much size u want for holo square \n";
    cin >> l;

    cout << "which element u want \n";
    cin >> c;
    for (int i = 0; i < l; i++)
    {
        /* code */
        for (int j = 0; j < l; j++)
        {
            /* code */
            cout << c << " ";
        }
    }
}

void trangle_1()
{

    cout << "you selest trangle 1 \n";
    cout << "how much size u want for trangle 1 \n";
    cin >> l;

    cout << "which element u want \n";
    cin >> c;
    for (int i = 0; i <= l; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            /* code */
            cout << c << "";
        }
        cout << "\n";
    }
}

void trangle_2()
{

    cout << "you selest trangle 2 \n";
    cout << "how much size u want for trangle 2 \n";
    cin >> l;

    cout << "which element u want \n";
    cin >> c;
    for (int i = l; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            /* code */
            cout << c << "";
        }
        cout << "\n";
    }
}

void trangle_3()
{
    cout << "you selest trangle 3 \n";
    cout << "how much size u want for trangle 3 \n";
    cin >> l;

    cout << "which element u want \n";
    cin >> c;
    for (int i = 1; i <= l; i++)
    {
        for (int k = l - i; k > 0; k--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            /* code */
            cout << c;
        }
        cout << endl;
    }
}

void trangle_4()
{

    cout << "you selest trangle 4 \n";
    cout << "how much size u want for trangle 4 \n";
    cin >> l;

    cout << "which element u want \n";
    cin >> c;
    for (int i = l; i >= 0; i--)
    {
        for (int k = l - i; k > 0; k--)
        {
            cout << " ";
        }
        for (int j = i; j >= 0; j--)
        {
            /* code */
            cout << c;
        }
        cout << endl;
    }
}

void number_trangle_1()
{

    cout << "you selest number trangle 1 \n";
    cout << "how much size u want for number  trangle 1 \n";
    cin >> l;

    for (int i = 0; i <= l; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            /* code */
            cout << count << "";
            count++;
        }
        cout << "\n";
    }
}

void number_trangle_2()
{

    cout << "you selest number trangle 2 \n";
    cout << "how much size u want for number trangle 2 \n";
    cin >> l;

    for (int i = 0; i <= l; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            /* code */
            cout << i << "";
        }
        cout << "\n";
    }
}

void number_trangle_3()
{

    cout << "you selest number trangle 3 \n";
    cout << "how much size u want for number trangle 3 \n";
    cin >> l;

    for (int i = 0; i <= l; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            /* code */
            cout << j << "";
        }
        cout << "\n";
    }
}

void number_trangle_4()
{

    cout << "you selest number trangle 4 \n";
    cout << "how much size u want for number trangle 4 \n";
    cin >> l;

    int count = l;
    for (int i = l; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            /* code */
            cout << j << " ";
            // count--;
        }
        cout << "\n";
    }
}

void number_trangle_5()
{
    cout << "you selest number trangle 4 \n";
    cout << "how much size u want for number trangle 4 \n";
    cin >> l;

    for (int i = l; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            /* code */
            cout << i << " ";
            // count--;
        }
        cout << "\n";
    }
}

void alphabetic_trangle()
{

    cout << "you selest alphabetic trangle 1 \n";
    cout << "how much size u want for alphabetic trangle 1 \n";
    cin >> l;
    char count = 'a';

    for (int i = 0; i <= l; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            /* code */
            cout << count << " ";
            count++;
        }
        cout << "\n";
    }
}

void alphabetic_trangle_2()
{

    cout << "you selest alphabetic trangle 2 \n";
    cout << "how much size u want for alphabetic trangle 2 \n";
    cin >> l;

    for (int i = 0; i <= l; i++)
    {
        char count = 'a';
        for (int j = 0; j <= i; j++)
        {
            /* code */
            cout << count << " ";
            count++;
        }
        cout << "\n";
    }
}

void alphabitic_trangke_3()
{
    cout << "you selest alphabetic trangle 3 \n";
    cout << "how much size u want for alphabetic trangle 3 \n";
    cin >> l;

    char count = 'a';
    for (int i = 0; i <= l; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            /* code */
            cout << count << " ";
        }
        count++;
        cout << "\n";
    }
}

void pyramid()
{
    cout << "you selest pyriamid \n";
    cout << "how much size u want for pyriamid \n";
    cin >> l;

    cout << "which element u want \n";
    cin >> c;
    for (int i = 1; i <= l; i++)
    {
        for (int k = l - i; k > 0; k--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            /* code */
            cout << c << " ";
        }
        cout << endl;
    }
}

void r_pyamid()
{
    cout << "you selest revers pyriamid \n";
    cout << "how much size u want for revers pyriamid \n";
    cin >> l;

    cout << "which element u want \n";
    cin >> c;
    for (int i = l; i >= 0; i--)
    {
        for (int k = l - i; k > 0; k--)
        {
            cout << " ";
        }
        for (int j = i; j >= 0; j--)
        {
            /* code */
            cout << c << " ";
        }
        cout << endl;
    }
}

void diamond()
{
    cout << "you selest diamond \n";
    cout << "how much size u want for diamond \n";
    cin >> l;

    cout << "which element u want \n";
    cin >> c;
    for (int i = 0; i <= l; i++)
    {
        for (int k = l - i; k > 0; k--)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            /* code */
            cout << c << " ";
        }
        cout << endl;
    }
    for (int i = l; i > 0; i--)
    {
        for (int k = l - i; k > 0; k--)
        {
            cout << " ";
        }
        for (int j = i; j > 0; j--)
        {
            /* code */
            cout << c << " ";
        }
        cout << endl;
    }
}

int main()
{
    cout << "\n \n \n welcome in pattern program"
         << "\n";
    cout << "selcet your pattern"
         << "\n"
         << "for ractrangle press 1\n"
         << "for holo ractrangle press 2"
         << "for square press 3 \n"
         << "for holo square \n";
    cout << "for trangle  1 press  5\n"
         << "for trangle 2 press 6\n"
         << "for trangle 3 press 7\n"
         << "for trangle 4 press 8\n"
         << "for number trangle 1 press 9\n";
    cout << "for number trangle 2 press 10\n"
         << "for number trangle 3 press 11\n"
         << "for number trangle 4 press 12\n"
         << "for number trangle 5 press 13\n";
    cout << "for alphabitic trangle 1 press 14\n"
         << "for alphabitic trangle 2 press 15\n"
         << "for alphabitic trangle 3 press 16\n"
         << "for pyramid press 17\n"
         << "for revers pyramid press 18\n"
         << "for diamond press 19\n \n \n ";
    int opr;
    cin >> opr;

    switch (opr)
    {

    case 1:
        ractangle();
        break;
    case 2:
        holo_ractrangle();
    case 3:
        square();
        break;
    case 4:
        holo_square();
        break;
    case 5:
        trangle_1();
        break;
    case 6:
        trangle_2();
        break;
    case 7:
        trangle_3();
        break;
    case 8:
        trangle_4();
        break;
    case 9:
        number_trangle_1();
        break;
    case 10:
        number_trangle_2();
        break;
    case 11:
        number_trangle_3();
        break;
    case 12:
        number_trangle_4();
        break;
    case 13:
        number_trangle_5();
        break;
    case 14:
        alphabetic_trangle();
        break;
    case 15:
        alphabetic_trangle_2();
        break;
    case 16:
        alphabitic_trangke_3();
        break;
    case 17:
        pyramid();
        break;
    case 18:
        r_pyamid();
        break;
    case 19:
        diamond();
        break;
    default:
        cout << "Error pattern not founded";
    }
}