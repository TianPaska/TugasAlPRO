/*  Program fungsi {Program Kumpulan fungsi dan prosedur untuk menentukan isEven, isOdd, isFactor, maxN, minN, maxArray, minArray, isFound, dan swapN}
    Nama     : Paternus Kristian Paska
    Nim      : A11.2022.14309
    Kelompok : A11.4207
*/
#include <iostream>

using namespace std;

// ESSENTIAL FUNCTION
bool isEven (int x);
bool isOdd (int x);
bool isFactor (int a, int b);
int maxN (int a, int b);
int minN (int a, int b);
int maxArray (int arr[], int len);
int minArray (int arr[], int len);
bool isFound (int x, int arr[], int len);
void swapN (int &a, int &b);

// NOT SO IMPORTANT
void title();
void inputOne(int &x);
void inputTwo(int &a, int &b);
void inputArr(int arr[], int &len);
void select(int choice, int x, int a, int b, int arr[], int len);
void space();
void clear();

int main()
{
    bool exec = true;
    char omt;
    int x, a, b, choice, len = 0;
    int arr[len];

    while (exec == true)
    {
        title();
        cout << "Your choice : ";
        cin >> choice;
        space();
        select(choice, x, a, b, arr, len);
        cout << "One more time ( y | n ) ? ";
        cin >> omt;

        switch (omt)
        {
            case 'y':
                exec = true;
                clear();
                break;

            case 'n':
                exec = false;
                break;
        }
    }

    return 0;
}

bool isEven (int x)
{
    bool result;

    if (x % 2 == 0)
    {
        result = true;
    }

    return result;
}

bool isOdd (int x)
{
    bool result;

    if (x % 2 != 0)
    {
        result = true;
    }

    return result;
}

bool isFactor (int a, int b)
{
    bool result;

    if (b % a == 0)
    {
        result = true;
    }

    return result;
}

int maxN (int a, int b)
{
    int result;

    if (a > b)
    {
        result = a;
    }
    else
    {
        result = b;
    }

    return result;
}

int minN (int a, int b)
{
    int result;

    if (a > b)
    {
        result = b;
    }
    else
    {
        result = a;
    }

    return result;
}

int maxArray (int arr[], int len)
{
    int temp = arr[0];

    for (int i = 0; i < len; i++)
    {
        temp = maxN (temp, arr[i]);
    }

    return temp;
}

int minArray (int arr[], int len)
{
    int temp = arr[0];

    for (int i = 0; i < len; i++)
    {
        temp = minN (temp, arr[i]);
    }

    return temp;
}

bool isFound (int x, int arr[], int len)
{
    bool result = false;

    for (int i = 0; i < len; i++)
    {
        if (x == arr[i])
        {
            result = true;
        }
    }

    return result;
}

void swapN (int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void title()
{
    cout << "#####################################" << endl;
    cout << "             Pertemuan 4             " << endl;
    cout << "#####################################" << endl;

    cout << "(1) Is <num> even ?" << endl;
    cout << "(2) Is <num> odd ?" << endl;
    cout << "(3) Is <num> a factor of <num> ?" << endl;
    cout << "(4) Is <num> greater than <num> ?" << endl;
    cout << "(5) Is <num less than <num> ?" << endl;
    cout << "(6) Largest in <array> ?" << endl;
    cout << "(7) Smallest in <array> ?" << endl;
    cout << "(8) Is there a <num> in <array> ?" << endl;
    cout << "(9) Swap <num> with <num> ?" << endl;
    cout << "#####################################" << endl;
}

void inputOne(int &x)
{
    cout << "Enter the number : ";
    cin >> x;
}

void inputTwo(int &a, int &b)
{
    cout << "Enter the first number : ";
    cin >> a;
    cout << "Enter the second number : ";
    cin >> b;
}

void inputArr(int arr[], int &len)
{
    cout << "Enter the number of element : \n> ";
    cin >> len;
    cout << "Enter the value separated by space :\n> ";
    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }
}

void select(int choice, int x, int a, int b, int arr[], int len)
{
    switch (choice)
    {
        case 1:
            inputOne(x);
            space();
            if (isEven(x) == true)
            {
                cout << "Yes, " << x << " is an even number";
            }
            else
            {
                cout << "No, " << x << " is not an even number";
            }
            cout << endl;
            space();
            break;

        case 2:
            inputOne(x);
            space();
            if (isOdd(x) == true)
            {
                cout << "Yes, " << x << " is an odd number";
            }
            else
            {
                cout << "No, " << x << " is not an odd number";
            }
            cout << endl;
            space();
            break;

        case 3:
            inputTwo(a, b);
            space();
            if (isFactor(a, b) == true)
            {
                cout << "Yes, " << a << " is a factor of " << b;
            }
            else
            {
                cout << "No, " << a << " is not a factor of " << b;
            }
            cout << endl;
            space();
            break;

        case 4:
            inputTwo(a, b);
            space();
            cout << maxN(a, b) << " is greater than " << minN(a, b) << endl;
            space();
            break;

        case 5:
            inputTwo(a, b);
            space();
            cout << minN(a, b) << " is less than " << maxN(a, b) << endl;
            space();
            break;

        case 6:
            inputArr(arr, len);
            space();
            cout << maxArray(arr, len) << " is the largest number in the array" << endl;
            space();
            break;

        case 7:
            inputArr(arr, len);
            space();
            cout << minArray(arr, len) << " is the smallest number in the array" << endl;
            space();
            break;

        case 8:
            cout << "Enter the number you are looking : ";
            cin >> x;
            inputArr(arr, len);
            space();
            if (isFound(x, arr, len) == true)
            {
                cout << x << " found in the array";
            }
            else
            {
                cout << x << " not found in the array";
            }
            cout << endl;
            space();
            break;

        case 9:
            inputTwo(a, b);
            space();

            cout << "Before : \tAfter :" << endl;
            cout << "A = " << a;
            swapN(a, b);
            cout << "\t\tA = " << a;
            swapN(a, b);
            cout << "\nB = " << b;
            swapN(a, b);
            cout << "\t\tB = " << b;
            cout << endl;

            space();
            break;

    }
}

void space()
{
    cout << "#####################################" << endl;
}

void clear()
{
    #if __linux__
        system("clear");

    #elif _WIN32
        system("cls");

    #endif
}
