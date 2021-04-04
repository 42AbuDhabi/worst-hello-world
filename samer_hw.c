/****************************************************************************
This outputs 'Hello World'
@author Samer Saber
****************************************************************************/
#include <stdio.h>

#define OP_ASSGN   0x1

#define ASSGN(Dest, Address)       (OP_ASSGN  << 9) | (Address << 3)  | Dest

#define L0   0x0
#define L1   0x1
#define L2   0x2
#define L3   0x3
#define L4   0x4
#define L5   0x5
#define L6   0x6
#define L7   0x7

unsigned char L[12];

unsigned short IM[12] =
{
    ASSGN(L0,2),
    ASSGN(L1,5),
    ASSGN(L2,6),
    ASSGN(L3,6),
    ASSGN(L4,7),
    ASSGN(L5,1),
    ASSGN(L6,3),
    ASSGN(L7,7),
};


unsigned short DM[9] =
{
    10,
    32,
    72,
    87,
    100,
    101,
    108,
    111,
    114
};

unsigned short opCount  = 0;

unsigned short run = 1;

unsigned short InstructionDecodeUnit(unsigned short uInstr, unsigned short *uDest, unsigned short *uReg1, unsigned short *uReg2);

void assgn(unsigned short uReg, unsigned short uAddress);
void stop(void);

void incrOpCount(void);

int main()
{
    unsigned short uReg1  = 0, uReg2  = 0, uDest = 0, uOpCode = 0;

    while(run)
    {
        uOpCode = InstructionDecodeUnit(IM[opCount], &uDest, &uReg1, &uReg2);

        switch ( uOpCode)
        {
            case OP_ASSGN:
                assgn(uReg1, uDest);
                break;

            default:
                stop();
                break;
        }

        printf("%c", L[opCount]);
        incrOpCount();
    }

    printf("rld\n");

    return (0);
}

unsigned short InstructionDecodeUnit(unsigned short uInstruction, unsigned short *uDest, unsigned short *uReg1, unsigned short *uReg2)
{
    unsigned short uOpCode = (uInstruction >> 9) & 0x7F;

    *uDest = (uInstruction & 0x7);
    *uReg1 = (uInstruction >> 3) & 0x7;
    *uReg2 = 1;

    return(uOpCode);

}


void incrOpCount()
{
   opCount = opCount + 1;
}

void assgn(unsigned short uAddress, unsigned short uReg)
{
    L[uReg] = DM[uAddress];
}

void stop()
{
    run = 0;
}