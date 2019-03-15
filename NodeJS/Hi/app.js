
var mesage = 'Hi there';

console.log(mesage);

for (var i = 31; i < 37; i++) {
    var c = i.toString();
    console.log('\x1b[' + c + 'm%s\x1b[0m', mesage);
}

console.log(mesage);


