#include <iostream>
#include <Windows.h>
#include <stdio.h>



const int ScreenWidth = 80;
const int ScreenHeight = 30;
int ScreenArrayIndex = 0;
wchar_t* screen = new wchar_t[ScreenHeight * ScreenWidth];


//They say C++ is an improved version of C - with classes, inheritance, and whatnot....so lets make use of
//atleast some of those features :)

struct Letter {

    char letter;
    Letter* next;
};

class Alphabets {

    Letter FirstLetter;
public:
    Alphabets()
    {
        FirstLetter.letter = 'a';
    }
    char ReturnAnyLetter(int letterPosInAlphabets) {
        return letterPosInAlphabets + FirstLetter.letter;
    }

    char ReturnUpperCase(char ch) {
        return ch - 32;
    }
};

//Heres an idea..lets have a linked list for a word...cuz why not!

class WordLinkedList {

    Letter* first, * last;
public:
    WordLinkedList() {
        first = NULL;
        last = NULL;
    }
    void AddLetter(char c) {

        Letter* tmp = new Letter;
        tmp->letter = c;
        tmp->next = NULL;

        if (first == NULL)
        {
            first = tmp;
            last = tmp;
        }
        else
        {
            last->next = tmp;
            last = last->next;
        }
    }
    void WriteToScreenArray() {
        Letter* tmp = new Letter;
        tmp = first;
        while (tmp!=last)
        {
            screen[ScreenArrayIndex++] = tmp->letter;
            tmp = tmp->next;
        }
    }
};

void ProgramTerminationMessage() {
    ScreenArrayIndex = 160;
    char message[] = "Press the Enter key to exit";
    for (int i = 0; i < message[i] != '\0'; i++)
        screen[ScreenArrayIndex++] = message[i];
}


int main() {
    WordLinkedList ourAmazingWords;
    Alphabets temp;

   //Setting the screen array to have initially all blank spaces :)
    for (int i = 0; i < ScreenHeight * ScreenWidth; i++)
        screen[i] = L' ';
    //Lets explicitly do this as well..just in case:
    screen[ScreenHeight * ScreenWidth - 1] = '\0';


    //Hello:
    ourAmazingWords.AddLetter(temp.ReturnUpperCase(temp.ReturnAnyLetter(7)));
    ourAmazingWords.AddLetter(temp.ReturnAnyLetter(4));
    ourAmazingWords.AddLetter(temp.ReturnAnyLetter(11));
    ourAmazingWords.AddLetter(temp.ReturnAnyLetter(11));
    ourAmazingWords.AddLetter(temp.ReturnAnyLetter(14));
    //Space:
    ourAmazingWords.AddLetter(' ');
    //World;
    ourAmazingWords.AddLetter(temp.ReturnUpperCase(temp.ReturnAnyLetter(22)));
    ourAmazingWords.AddLetter(temp.ReturnAnyLetter(14));
    ourAmazingWords.AddLetter(temp.ReturnAnyLetter(17));
    ourAmazingWords.AddLetter(temp.ReturnAnyLetter(11));
    ourAmazingWords.AddLetter(temp.ReturnAnyLetter(3));
    ourAmazingWords.AddLetter('!');

    //Here we create our incredibly useless screen buffer cuz why not ^-^
    HANDLE hConsole = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
    SetConsoleActiveScreenBuffer(hConsole);
    DWORD BytesWritten = 0;

    //Now we print our amazing phrase along with a program termination messsage to our iconic screen buffer.
    ourAmazingWords.WriteToScreenArray();
    ProgramTerminationMessage();
    WriteConsoleOutputCharacter(hConsole, screen, ScreenHeight * ScreenWidth, { 0,0 }, &BytesWritten);


    while (1<2)    {
        if ((GetAsyncKeyState(VK_RETURN) & 0x0D))
            exit(0);
    }

    return 0;
}
