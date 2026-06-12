const input = require("prompt-sync")()

let n: number = Number(input())

for(let i = 1; i <= n; i++){
    let spaces: string = " ".repeat(n - i);
    let stars: string = "*".repeat(i);

    console.log(spaces + stars);
}