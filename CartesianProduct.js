const setA = ["a", "b", "c", "d"];
const setB = ["m", "n", "o", "p"];
let cartesianProduct = [];

for (let a in setA) {
  for (let b in setB) {
    cartesianProduct.push([setA[a], setB[b]]);
  }
}

console.log(cartesianProduct);
