var floatData = 100.36;
let finalData;

const lessValue = --floatData;
const greatValue = ++floatData;

const margin = Math.round(lessValue + greatValue) / 2;

if (floatData > margin + 0.5) finalData = Math.round(greatValue);
else finalData = margin;

console.log(finalData);
