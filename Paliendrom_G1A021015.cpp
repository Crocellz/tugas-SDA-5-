#include <iostream>
using namespace std;
//Muhamad Nurikbal
//G1A021015
int main()
{
     int n, num, digit, rev = 0;

     cout << "Masukan Bilangan: ";
     cin >> num;

     n = num;

     do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);

     cout << " Kebalikan dari bilangan tersebut adalah: " << rev << endl;

     if (n == rev)
         cout << " Angka tersebut adalah palindrom.";
     else
         cout << " Angka tersebut bukan palindrom.";

    return 0;
}