const http = require("http");
const hostname = '127.0.0.1';
const port = 3000;

const fs = require('fs')
let box = fs.readFileSync("box.html",'utf-8')

const server = http.createServer((req, res) => {
  res.statusCode = 200;
  res.setHeader('Content-Type', 'text/html');
  res.end(box);
  
});

server.listen(port, hostname, () => {
    console.log(`Server running at http://${hostname}:${port}/`);
  });