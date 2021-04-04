#include <stdio.h>
#define a "H"
#define aa "HHHHHHHHH"
#define b "E"
#define bb "EEEEEEEEE"
#define c "L"
#define cc "LLLLLLLLL"
#define d "O"
#define dd " OOOOOOO "
#define e "W"
#define f "R"
#define ff "RRRRRRR"
#define g "D"
#define gg "DDDDDD"
#define h "!!"

int main()
{
    printf(a "       " a "       " bb "       " c "               " c "               " dd "\n");
    printf(a "       " a "       " b "               " c "               " c "               " d "       " d "\n");
    printf(aa "       " bb "       " c "               " c "               " d "       " d "\n");
    printf(a "       " a "       " b "               " c "               " c "               " d "       " d "\n");
    printf(a "       " a "       " bb "       " cc "       " cc "       " dd "\n\n\n");

    printf(e "       " e "       " e "       " dd "       " f ff "        " c "               " g gg "         " h "\n");
    printf(" " e "     " e " " e "     " e "        " d "       " d "       " f "       " f "       " c "               " g "      " g "        " h "\n");
    printf("  " e "   " e "   " e "   " e "         " d "       " d "       " f ff "        " c "               " g "       " g "       " h "\n");
    printf("   " e " " e "     " e " " e "          " d "       " d "       " f "     " f "         " c "               " g "      " g "\n");
    printf("    " e "       " e "           " dd "       " f "      " f "        " cc "       " g gg "         " h "\n\n");

    return 0;
}