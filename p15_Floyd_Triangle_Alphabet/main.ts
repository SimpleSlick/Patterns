let n = 5;
let charCode = 65; // Starting character 'A'

for (let i = 1; i <= n; i++) {

    let row = "";

    for (let j = 1; j <= i; j++) {

        row += String.fromCharCode(charCode) + " ";
        charCode++;
    }

    console.log(row.trim());
}