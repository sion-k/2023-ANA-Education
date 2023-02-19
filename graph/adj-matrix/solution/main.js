const N = 5;
const adj = [];

for (let i = 0; i < N; i++) {
  adj.push([]);
}

adj[1].push(4);
adj[4].push(1);
adj[2].push(3);
adj[3].push(2);

console.log(adj);
