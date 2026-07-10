const input = require("prompt-sync")();

let n: number = Number(input())

for(let i = 1; i <= n; i++){
    let row: string = "";

    for(let j = 0; j < i; j++){
        row += (i + j) + " ";
    }

    console.log(row.trim());
}