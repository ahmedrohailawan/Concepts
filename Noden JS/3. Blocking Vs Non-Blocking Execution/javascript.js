console.log("--------------\nblocking")
const fs = require("fs");
let text = fs.readFileSync("read.txt","utf-8",)
console.log(text)



console.log("---------------\nnon blocking")
// this function will be fire/ execute when the reading process in background will be completed
fs.readFile("read.txt","utf-8",(err,data)=>{
    console.log(data);
})

console.log("\nfile is reading in background....");
console.log("code is excuting next lines...");
console.log("will also execute function whenever it will be completed in backgrouond");

