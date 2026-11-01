let n: number = 5;

for (let i: number = 1; i <= n; i++) {
    let row: string = "";

    let spaces: string = "  ".repeat(n - i);

    for (let j: number = 1; j <= i; j++) {
        row += j;
    }

    for (let j: number = i - 1; j >= 1; j--) {
        row += j;
    }

    console.log(spaces + row);
}