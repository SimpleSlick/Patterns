const input = require("prompt-sync")();

let n: number = Number(input());

for(let i = n; i >= 1; i--){
    let row: string = "*".repeat(i);
    console.log(row);
}