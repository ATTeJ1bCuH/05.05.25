#include <iostream>
#include <cmath>
using namespace std;
struct PERSON 
{
    int age;
    long ss;
    float weight;
    char name[25];
} family_member;

struct CELL 
{ 
    unsigned short character  : 8;
    unsigned short foreground : 3;
    unsigned short intensity  : 1;
    unsigned short background : 3;
    unsigned short blink      : 1;
} screen[25][80];

int main() {

    struct PERSON sister;
    PERSON brother;    
    sister.age = 13;
    brother.age = 7;
    cout << "sister.age = " << sister.age << '\n';
    cout << "brother.age = " << brother.age << '\n';
    CELL apelsin;
    apelsin.character = 'g';
    apelsin.intensity = 0;
    apelsin.blink = 1;
    apelsin.foreground = 3;
    CELL *papelsin(&apelsin);
    papelsin.intensity = 1;
    papelsin.blink=0;
    cout << "apelsin.character = " << apelsin.character << endl;
    cout << "apelsin.intensity = " << apelsin.intensity << endl;
    cout << "apelsin.blink = " << apelsin.blink << endl;
    cout << "apelsin.foreground = " << apelsin.foreground << endl;
}