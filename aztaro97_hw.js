//  WeeKend Challenge From 42 Abu Dhabi
// Done with JavaScript Language , by Taro Abdoul Aziz

function greet(){

    const AsciiCode = [72, 69, 76, 76, 79, 32, 87, 79, 82, 68]

    for(var i = 0; i < AsciiCode.length; i++) {
        document.write(String.fromCharCode(AsciiCode[i]))
    }

}

greet()