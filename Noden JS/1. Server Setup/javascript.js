const http = require('http');

const hostname = '127.0.0.1';
const port = 3000;

const server = http.createServer((req, res) => {
  res.statusCode = 200;
  res.setHeader('Content-Type', 'text/html');
  res.end(`<!DOCTYPE html>
  <html lang="en">
  <head>
      <meta charset="UTF-8">
      <meta http-equiv="X-UA-Compatible" content="IE=edge">
      <meta name="viewport" content="width=device-width, initial-scale=1.0">
      <title>spaning in css grid</title>
      <style>
          .container{
              display: grid;
              grid-template-columns: repeat(5,1fr);
              grid-template-rows: repeat(4,1fr);
              /* grid-column-gap: 5rem;
              grid-row-gap: 1rem; */
              grid-gap: 1rem;
          }
          .box{
              padding: 40px;
              border: 2px solid black;
              background-color: brown;
          }
          .box:first-child{
              /* grid-column: 1/span 3; */
              grid-row: 1/span 10;
          }
      </style>
  </head>
  <body>
      <div class="container">
          <div class="box">this is the item-1</div>
          <div class="box">this is the item-2</div>
          <div class="box">this is the item-3</div>
          <div class="box">this is the item-4</div>
          <div class="box">this is the item-5</div>
          <div class="box">this is the item-6</div>
          <div class="box">this is the item-7</div>
          <div class="box">this is the item-8</div>
          <div class="box">this is the item-9</div>
          <div class="box">this is the item-1</div>
          <div class="box">this is the item-2</div>
          <div class="box">this is the item-3</div>
          <div class="box">this is the item-4</div>
          <div class="box">this is the item-5</div>
          <div class="box">this is the item-6</div>
          <div class="box">this is the item-7</div>
          <div class="box">this is the item-8</div>
          <div class="box">this is the item-9</div>
          <div class="box">this is the item-1</div>
          <div class="box">this is the item-2</div>
          <div class="box">this is the item-3</div>
          <div class="box">this is the item-4</div>
          <div class="box">this is the item-5</div>
          <div class="box">this is the item-6</div>
          <div class="box">this is the item-7</div>
          <div class="box">this is the item-8</div>
          <div class="box">this is the item-9</div>
          <div class="box">this is the item-1</div>
          <div class="box">this is the item-2</div>
          <div class="box">this is the item-3</div>
          <div class="box">this is the item-4</div>
          <div class="box">this is the item-5</div>
          <div class="box">this is the item-6</div>
          <div class="box">this is the item-7</div>
          <div class="box">this is the item-8</div>
          <div class="box">this is the item-9</div>
      </div>
  </body>
  </html>`);
});

server.listen(port, hostname, () => {
  console.log(`Server running at http://${hostname}:${port}/`);
});
