#include <iostream>
#include <windows.h>
using namespace std;

void autoTyping(string str)
{
    for (char c : str)
    {
        cout << c;
        Sleep(100);
    }
}

int main()
{
    // Enable emoji support in console
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    string she, Takshay;

    she = "She: Hey Takshay... Can I say something in my language?\n";
    autoTyping(she);

    Takshay = "Takshay: Haha sure, go ahead 😅\n";
    autoTyping(Takshay);

    she = "She: string myHeart = \"null\";\n";
    autoTyping(she);

    she = "She: string you = \"Takshay\";\n";
    autoTyping(she);

    she = "She: if(you == \"Takshay\") {\n";
    autoTyping(she);

    she = "        myHeart = \"100% yours\";\n";
    autoTyping(she);

    she = "    }\n";
    autoTyping(she);

    Takshay = "Takshay: Did you just assign me your heart!? 😳\n";
    autoTyping(Takshay);

    she = "She: Yep 💖 You're the pointer to my happiness.\n";
    autoTyping(she);

    she = "She: I love you more than recursion loves its base case 🥹\n";
    autoTyping(she);

    she = "She: You're the if condition that always returns true.\n";
    autoTyping(she);

    she = "She: And the only one who can handle my exceptions 💕\n";
    autoTyping(she);

    Takshay = "Takshay: You're gonna overload my heart with emotions 😭\n";
    autoTyping(Takshay);

    she = "She: Too late...\n";
    autoTyping(she);

    she = "She: myHeart = \"Forever yours, Takshay\" 💞💘\n";
    autoTyping(she);

    return 0;
}