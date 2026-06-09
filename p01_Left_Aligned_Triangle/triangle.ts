const input = require("prompt-sync")();

let n: number = Number(input())

for(let i = 1; i <= n; i++){
    console.log("*".repeat(i));
}