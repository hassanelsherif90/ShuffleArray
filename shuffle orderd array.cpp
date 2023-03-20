#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int ReadPositiveNumber (string Message)
{
    int Number = 0;
    do {
        cout << Message << endl;
        cin >> Number ;
    } while (Number <= 0);
    return Number ;
}

int RandNumber(int From , int To)
{
    int RandNum = rand() % (To - From + 1) + From;
    return RandNum;
}

void FillArrayNumber (int Arr[100], int & ArrLength)
{
    int Counter = 1;
    for (int i = 0 ; i < ArrLength; i++)
    {
        Arr[i] = Counter;
        Counter ++;
    }
}

void PrintArray (int Arr[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
    {
        cout << Arr[i] << " ";
    }
}
void Swap (int & A, int& B)
{
    int Swap = A;
    A = B;
    B = Swap;

}
void ShuffleArray(int Arr[100], int ArrLength)
{
    for (int i =0 ; i < ArrLength; i++)
    {
        Swap(Arr[(RandNumber(1, ArrLength -1))], Arr [(RandNumber(1, ArrLength -1))]);
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int Arr[100], ArrLength;
    ArrLength = ReadPositiveNumber("Please enter Elments Number ");
    FillArrayNumber(Arr, ArrLength);
    cout << "\nArray Elements Before Shuffle \n\n";
    PrintArray(Arr, ArrLength);
    ShuffleArray (Arr, ArrLength);
    cout << "\n\n\nArray Elements After Shuffle \n\n";
    PrintArray(Arr, ArrLength);
    cout << "\n\n\n";
    return 0;
}