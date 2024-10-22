const mongoose = require("mongoose");

const connectDB = async () => {
  mongoose.connect(
    "mongodb+srv://impracticalayan:CMlaC53T34wZA3Cp@cluster1.1cejl.mongodb.net/?retryWrites=true&w=majority&appName=Cluster1"
  );
};

module.exports = connectDB;
