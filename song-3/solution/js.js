const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

let cnt = 0;
let n = 0;
let b = [];
let m = 0;
let q = [];

rl.on("line", function (line) {
  if (cnt == 0) {
    n = parseInt(line);
  } else if (cnt == 1) {
    b = line.split(" ").map((x) => parseInt(x));
  } else if (cnt == 2) {
    m = parseInt(line);
  } else if (cnt == 3) {
    q = line.split(" ").map((x) => parseInt(x));
  }
  cnt++;
}).on("close", function () {
  for (let i = 1; i < n; i++) {
    b[i] += b[i - 1];
  }

  let sum = 0;

  for (let i = 0; i < m; i++) {
    q[i] = ((q[i] - 1) % b[n - 1]) + 1;

    let lo = -1;
    let hi = n - 1;

    while (lo + 1 < hi) {
      let mid = parseInt((lo + hi) / 2);

      if (b[mid] >= q[i]) {
        hi = mid;
      } else {
        lo = mid;
      }
    }

    sum = (sum + hi + 1) % 1000000007;
  }

  console.log(sum);
});
