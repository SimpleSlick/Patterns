const input = require("prompt-sync")();

let n: number = Number(input());

for(let i = 1; i <= n; i++){
    let spaces: string = " ".repeat(i);
    let stars: string = "*".repeat(n - i + 1);

    console.log(spaces + stars);
}