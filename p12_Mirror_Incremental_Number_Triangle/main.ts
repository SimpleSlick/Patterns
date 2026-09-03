const input = require("prompt-sync")();

let n: number = Number(input())

for(let i = 1; i <= n; i++){
    let rowContent: string = ""

    for(let j = 0; j < i; j++){
        rowContent += i + j + " ";
    }
    rowContent = rowContent.trim();

    let lastRow: String = ""
    for(let j = 0; j < n; j++){
        lastRow += n + j + " "
    }

    lastRow = lastRow.trim()

    let spaces: string = " ".repeat(lastRow.length - rowContent.length);
    console.log(spaces + rowContent);
}