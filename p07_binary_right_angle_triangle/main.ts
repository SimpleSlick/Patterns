const input = require("prompt-sync")();

let n: number = Number(input())

for(let i = 1; i <= n; i++){
    let row: string = "";
    for(let j = 1; j <= i; j++){
        if((i + j) % 2 == 0){
            row += "1 ";
        }else{
            row += "0 ";
        }
    }
    console.log(row);
}