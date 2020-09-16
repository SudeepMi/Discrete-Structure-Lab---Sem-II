const setA = ["a", "e", "i", "o", "u"];
const setB = ["c", "d", "e", "f", "g", "h", "i"];

var union = [],
  intersection = [];

for (let dataA in setA) {
  for (let dataB in setB) {
    if (setA[dataA] === setB[dataB]) intersection.push(setA[dataA]);
    if (!union.includes(setA[dataA]) && !union.includes(setB[dataB])) {
      union.push(setA[dataA]);
      union.push(setB[dataB]);
    }
  }
}

console.log(intersection);
console.log(union);
