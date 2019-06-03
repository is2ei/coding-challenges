function f(x, y) {
  return Math.max(x, y);
}

function main(input) {

  input = input.split("\n");
  const xy = input[0].split(" ");

  const x = parseInt(xy[0]);
  const y = parseInt(xy[1]);

  const result = f(x, y);

  console.log(result);
}

main(require("fs").readFileSync("/dev/stdin", "utf8"));
