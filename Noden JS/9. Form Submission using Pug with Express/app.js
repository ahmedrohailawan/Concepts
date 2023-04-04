const express = require("express");
const fs = require("fs");
const path = require("path");
const app = express();
const port = 80;

// Express staff
app.use("/static", express.static("static"));
app.use(express.urlencoded());

// pug staff
app.set("view engine", "pug");
app.set("views", path.join(__dirname, "views"));

// endpoints
app.get("/", (req, res) => {
  const name = "ahmed";
  const parama = { title: "Home page", name: name };
  res.status(200).render("index.pug", parama);
});
app.post("/", (req, res) => {
  username = req.body.username;
  age = req.body.age;
  gender = req.body.gender;
  address = req.body.address;
  let output = `the name of client is ${username}. The age of client is ${age}, the gender is ${gender}, lives in ${address} \n \n`;
  fs.appendFileSync('output.txt',output)
  const parama = { message: "Your form has been submmited successfully" };
  res.status(200).render("index.pug", parama);
});

// start server
app.listen(port, () => {
  console.log(`This applicaton has been started successfully on ${port}`);
});

// creating our home path and other path using get and post method

// app.get("/",(req,res)=>{
//     res.send("This is our home page of first express app");
// });
// app.get("/about",(req,res)=>{
//     res.send("This is our about page using get method");
// });
// app.post("/about",(req,res)=>{
//     res.send("This is our about page using post method");
// });
// app.get("/this",(req,res)=>{
//     res.status(404).send("This is our this page having 404 status");
// });
