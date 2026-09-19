const input = require("prompt-sync")();

const n: number = Number(input())

for(let i = 0; i < n; i++){
    // At the ascii values 65 = A
    let letter = String.fromCharCode(65 + i);
    let row = (letter + " ").repeat(i + 1);
    console.log(row.trim());
}