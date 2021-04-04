def BTD(B):
    B1 = B
    D, i, n = 0, 0, 0
    while(B != 0):
        dec = B % 10
        D = D + dec * pow(2, i)
        B = B//10
        i += 1
    return (D)
BD = '0110110001101001011100000111000001110011001011000010000001100001011100110111011001110000011010000010000000100001'
SD = ' '
for i in range(0, len(BD), 8):
    TD = int(BD[i:i + 8])
    DD = BTD(TD)
    SD = SD + chr(DD)
alphabet = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
            'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
def Decode(start_text, shift_amount, cipher_direction):
    end_text = ""
    if cipher_direction == "DEC":
        shift_amount *= -1
    for char in start_text:
        if char in alphabet:
            position = alphabet.index(char)
            new_position = position + shift_amount
            end_text += alphabet[new_position]
        else:
            end_text += char
    print(end_text.upper())
endThis = False
while not endThis:
    direction = "DEC"
    text = SD.lower()
    shift = 4
    shift = shift % 26
    Decode(start_text=text, shift_amount=shift, cipher_direction=direction)
    endThis = True