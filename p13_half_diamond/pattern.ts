const input = require("prompt-sync")();

const n: number = Number(input())

// top portion
for(let i = 1; i <= n; i++){
    let stars = "*".repeat(i);

    console.log(stars);
}

// bottom portion
for(let i = n - 1; i >= 1; i--){
    let stars = "*".repeat(i);

    console.log(stars);
}