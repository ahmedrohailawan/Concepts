const fs = require('fs');
let text = fs.readFileSync('read.txt','utf-8');
console.log(text)

text = text.replace('this is file we have access using fs module','this is file we are reading which content has been changed')

console.log("creating new file...")
fs.writeFileSync("rohan.txt",text)