let n: number = 5;

// Top portion
for (let i = 1; i <= n; i++) {
    let spaces: string = " ".repeat(n - i);
    let stars: string = "*".repeat(i);

    console.log(spaces + stars);
}

// Bottom portion
for (let i = n - 1; i >= 1; i--) {
    let spaces: string = " ".repeat(n - i);
    let stars: string = "*".repeat(i);

    console.log(spaces + stars);
}