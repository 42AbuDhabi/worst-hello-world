# Really bad hello world program in python
# 42 Abu Dhabi - weekend challenge
# Done by: Karam

lowCaseHexDict = {
    "61": "a",
    "62": "b",
    "63": "c",
    "64": "d",
    "65": "e",
    "66": "f",
    "67": "g",
    "68": "h",
    "69": "i",
    "6a": "j",
    "6b": "k",
    "6c": "l",
    "6d": "m",
    "6e": "n",
    "6f": "o",
    "70": "p",
    "71": "q",
    "72": "r",
    "73": "s",
    "74": "t",
    "75": "u",
    "76": "v",
    "77": "w",
    "78": "x",
    "79": "y",
    "7a": "z"
}

upCaseHexDict = {
    "41": "A",
    "42": "B",
    "43": "C",
    "44": "D",
    "45": "E",
    "46": "F",
    "47": "G",
    "48": "H",
    "49": "I",
    "4a": "J",
    "4b": "K",
    "4c": "L",
    "4d": "M",
    "4e": "N",
    "4f": "O",
    "50": "P",
    "51": "Q",
    "52": "R",
    "53": "S",
    "54": "T",
    "55": "U",
    "56": "V",
    "57": "W",
    "58": "X",
    "59": "Y",
    "5a": "Z"
}

wordToPrintHex = ["48", "65", "6c", "6c", "6f", " ", "57", "6f", "72", "6c", "64"]
wordToPrint = []

for c in wordToPrintHex:
    if c == " ":
        wordToPrint.append(c)
    else:
            for i in lowCaseHexDict:
                if c == i:
                    wordToPrint.append(lowCaseHexDict[c])
                else:
                    continue
            for i in upCaseHexDict:
                if c == i:
                    wordToPrint.append(upCaseHexDict[c])

print("".join(str(i) for i in wordToPrint))