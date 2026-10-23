let n: number = 4;
let counter: number = 1;

for (let i = 1; i <= n; i++) {
    let row: string = "";

    for (let j = 1; j <= i; j++) {
        row += " " + counter;
        counter++;
    }

    console.log(row);
}