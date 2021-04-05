/*************************************************************************************
This program outputs 'Hello World\n'
@author Samer Saber
**************************************************************************************/
#include <stdio.h>

#define OP_LOAD		0x0
#define OP_ADD		0x1
#define OP_SUB		0x2
#define OP_AND		0x3
#define OP_OR		0x4
#define OP_SH_LEFT	0x5
#define OP_SH_RIGHT	0x6
#define OP_HALT		0x7

#define LOAD(Reg1, Reg2)		OP_LOAD << 12 | Reg1 << 8 | Reg2 << 4
#define ADD(Reg1, Reg2, Reg3)	OP_ADD  << 12 | Reg1 << 8 | Reg2 << 4 | Reg3
#define SUB(Reg1, Reg2, Reg3)	OP_SUB  << 12 | Reg1 << 8 | Reg2 << 4 | Reg3
#define AND(Reg1, Reg2, Reg3)	OP_AND  << 12 | Reg1 << 8 | Reg2 << 4 | Reg3
#define OR(Reg1, Reg2, Reg3)	OP_OR   << 12 | Reg1 << 8 | Reg2 << 4 | Reg3
#define SH_LEFT(Reg1, shifts)	OP_SH_LEFT << 12 | Reg1 << 8
#define SH_RIGHT(Reg1, shifts)	OP_SH_RIGHT << 12 | Reg1 << 8
#define HALT 					OP_HALT << 12

#define REG0		0x0
#define REG1		0x1
#define REG2 		0x2
#define REG3 		0x3
#define REG4 		0x4
#define REG5 		0x5
#define REG6 		0x6
#define REG7 		0x7
#define REG8 		0x8
#define REG9 		0x9
#define REG10 		0xA
#define REG11 		0xB
#define REG12 		0xC
#define REG13 		0xD

unsigned char registers[42];

unsigned short DM[42] =
{
	10,
	42,
	30,
	202,
	200,
	92,
	54,
	222,
	36,
	59,
	17,
	70,
	90,
	24,
	213,
	113
};

unsigned short IM[42] = 
{
	LOAD(REG12,1),
	LOAD(REG13,2),
	ADD(REG0,REG12,REG13),
	LOAD(REG1,3),
	SH_RIGHT(REG1,1),
	LOAD(REG12,4),
	LOAD(REG13,5),
	SUB(REG2,REG12,REG13),
	LOAD(REG3,6),
	SH_LEFT(REG3,2),
	LOAD(REG4,7),
	SH_RIGHT(REG4,1),
	LOAD(REG12,8),
	LOAD(REG13,9),
	AND(REG5,REG12,REG13),
	LOAD(REG12,10),
	LOAD(REG13,11),
	OR(REG6,REG12,REG13),
	LOAD(REG7,7),
	SH_RIGHT(REG7,5),
	LOAD(REG12,12),
	LOAD(REG13,13),
	ADD(REG8,REG12,REG13),
	LOAD(REG12,4),
	LOAD(REG13,5),
	SUB(REG9,REG12,REG13),
	LOAD(REG12,14),
	LOAD(REG13,15),
	SUB(REG10,REG12,REG13),
	LOAD(REG11,0),
	HALT
};


void load(unsigned short reg1, unsigned short reg2);
void add(unsigned short reg1, unsigned short reg2, unsigned short reg3);
void sub(unsigned short reg1, unsigned short reg2, unsigned short reg3);
void and(unsigned short reg1, unsigned short reg2, unsigned short reg3);
void or(unsigned short reg1, unsigned short reg2, unsigned short reg3);
void shiftLeft(unsigned short reg1, unsigned short reg2);
void shiftRight(unsigned short reg1, unsigned short reg2);
void halt();

void instructionDecodeUnit(unsigned short *opCode, unsigned short *reg1, unsigned short *reg2, unsigned short *reg3);

unsigned short IC = 0;

void incIC();

unsigned short run = 1;



int main()
{

	unsigned short opCode = 0, reg1 = 0, reg2 = 0, reg3 = 0;

	while(run)
	{
		instructionDecodeUnit(&opCode, &reg1, &reg2, &reg3);

		switch(opCode)
		{
			case OP_LOAD:
				load(reg1,reg2);
				incIC();
				break;

			case OP_ADD:
				add(reg1,reg2,reg3);
				incIC();
				break;

			case OP_SUB:
				sub(reg1,reg2,reg3);
				incIC();
				break;

			case OP_AND:
				and(reg1,reg2,reg3);
				incIC();
				break;

			case OP_OR:
				or(reg1,reg2,reg3);
				incIC();
				break;

			case OP_SH_LEFT:
				shiftLeft(reg1,reg2);
				incIC();
				break;

			case OP_SH_RIGHT:
				shiftRight(reg1,reg2);
				incIC();
				break;

			case OP_HALT:
				halt();
				break;

			default:
				printf("Error\n");
				halt();
		}
	}

	for (int i = 0; i < 12; i++)
		{
			printf("%c", registers[i]);
		}


	return 0;
}

void load(unsigned short reg1, unsigned short reg2)
{
	unsigned short temp = IC;

	registers[reg1] = DM[reg2];

	IC = temp;
}

void add(unsigned short reg1, unsigned short reg2, unsigned short reg3)
{
	registers[reg1] = registers[reg2] + registers[reg3];
}

void sub(unsigned short reg1, unsigned short reg2, unsigned short reg3)
{
	registers[reg1] = registers[reg2] - registers[reg3];
}

void and(unsigned short reg1, unsigned short reg2, unsigned short reg3)
{
	registers[reg1] = registers[reg2] & registers[reg3];
}

void or(unsigned short reg1, unsigned short reg2, unsigned short reg3)
{
	registers[reg1] = registers[reg2] | registers[reg3];
}

void shiftLeft(unsigned short reg1, unsigned short reg2)
{
	registers[reg1] = registers[reg1] << reg2;
}

void shiftRight(unsigned short reg1, unsigned short reg2)
{
	registers[reg1] = registers[reg1] >> reg2;
}

void halt()
{
	run = 0;
}

void instructionDecodeUnit(unsigned short *opCode, unsigned short *reg1, unsigned short *reg2, unsigned short *reg3)
{
	*opCode = IM[IC] >> 12;

	switch(*opCode)
	{
		case OP_LOAD:
			*reg1 = (IM[IC] >> 8) & 0XF;
			*reg2 = (IM[IC] >> 4) & 0XF;
			*reg3 = 1;
			break;

		case OP_ADD:
		case OP_SUB:
		case OP_AND:
		case OP_OR:
			*reg1 = (IM[IC] >> 8) & 0XF;
			*reg2 = (IM[IC] >> 4) & 0XF;
			*reg3 =  IM[IC]       & 0XF;
			break;

		case OP_SH_LEFT:
		case OP_SH_RIGHT:
			*reg1 = (IM[IC] >> 8) & 0XF;
			*reg2 = 1;
			*reg3 = 1;
			break;

		case OP_HALT:
			break;

		default:
			printf("Error\n");
	}
}

void incIC()
{
	IC++;
}
