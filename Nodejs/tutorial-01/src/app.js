const express = require("express");
const connectDB = require("./config/database");
const User = require("./models/user");

const app = express();

app.post("/signup", async (req, res) => {
  const user = new User({
    firstName: "Sachin",
    lastName: "tendulkar",
    pass: "1234",
  });

  try {
    await user.save();
    res.send("User added successfuly");
  } catch (err) {
    res.send("Error adding data");
  }
});

connectDB()
  .then(() => {
    console.log("Cluster Connection established");
    app.listen(7777, () => {
      console.log("Server is running at port: 7777");
    });
  })
  .catch((err) => {
    console.log("DB Connection failed");
  });
