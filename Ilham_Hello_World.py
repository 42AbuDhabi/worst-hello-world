from colorama import Fore, Back, Style

# Weekend-challenge
# From 42 Abu Dhabi Team
# Ilham Code
# First Code in my Life
# 03/04/2021
# I Tried to use Arabic word With the English One
# programme used python

م = "H" ; H = "م"
ر = "e" ; e = "ر"
ح = "l" ; l = "ح"
با = "lo"; lo = "با"

بال = "W"; W = "بال"
ع = "o" ; o = "ع"
ا = "r" ; r = "ا"
لم = "ld"; ld = "لم"

print(Fore.BLUE + Style.BRIGHT + م,Fore.GREEN+ " |", Fore.RED + H)
print(Fore.BLUE + Style.BRIGHT +ر,Fore.GREEN+ " |",Fore.RED +e)
print(Fore.BLUE + Style.BRIGHT +ح,Fore.GREEN+ " |",Fore.RED +l)
print(Fore.BLUE + Style.BRIGHT +با,Fore.GREEN+ "|",Fore.RED +lo,"\n")
print(Style.RESET_ALL)

print(Fore.GREEN + Style.BRIGHT + بال,Fore.BLUE+ " |",Fore.YELLOW + W)
print(Fore.GREEN + Style.BRIGHT +ع,Fore.BLUE+ " |",Fore.YELLOW + o)
print(Fore.GREEN + Style.BRIGHT +ا,Fore.BLUE+ " |",Fore.YELLOW + r)
print(Fore.GREEN + Style.BRIGHT +لم,Fore.BLUE+ "|",Fore.YELLOW + ld,"\n")

print(Fore.BLUE + Style.BRIGHT + "\t\t",م,ر,ح,با,"",بال,ع,ا,لم,"\n\t\t",Fore.RED + "="*20)
print(Style.RESET_ALL)

print(Fore.GREEN + Style.BRIGHT+ "\t\t",H,e,l,lo,"",W,o,r,ld,"\n\t\t",Fore.RED + "="*20)
print(Style.RESET_ALL)


HW = "  مرحــباً  بالعـالم "

print(Fore.MAGENTA + Style.BRIGHT +  "\t\t",HW)
print(Style.RESET_ALL)
