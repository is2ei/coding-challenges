function f(h1, h2) {
    return h1 - h2;
}

function main(input) {

    input = input.split("\n");

    const h1 = parseInt(input[0]);
    const h2 = parseInt(input[1]);

    const result = f(h1, h2);

    console.log(result);
}

main(require("fs").readFileSync("/dev/stdin", "utf8"));