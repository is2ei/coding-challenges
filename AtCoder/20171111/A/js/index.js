function f(x, y) {
  if (x < y) {
    return "<";
  } else if(x > y) {
    return ">";
  }
  return "=";
}

function main(input) {
  input = input.split("\n");
  const xy = input[0].split(" ");
  const result = f(xy[0], xy[1]);
  console.log(result);
}

main(require("fs").readFileSync("/dev/stdin", "utf8"));