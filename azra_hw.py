one= 'H'
two= 'e'
three='l'
four='l'
five='o'
six=' '
seven='W'
eight='o'
nine='r'
ten='l'
eleven='d'

hello_world={'letter1':one,'letter2':two,'letter3':three,'letter4':four,'letter5':five,'letter6':six,'letter7':seven,'letter8':eight,'letter9':nine,'letter10':ten,'letter11':eleven}
def print_helloworld(a):
    for key,values in a.items():
        word=[]
        word.append(values)
        print(word)

print_helloworld(hello_world)
