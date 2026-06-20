const input = require("prompt-sync")();

let n: number = Number(input())

for(let i = 1; i <= n ; i++){
    let spaces = " ".repeat(n - i);
    let stars = "* ".repeat(i);

    console.log(spaces + stars);
}