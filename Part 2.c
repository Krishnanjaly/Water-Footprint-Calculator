/**
 * Water Footprint Calculator HTML Template
 *
 * This HTML template is used to create a simple water footprint calculator web application.
 * It includes a header section with a logo and navigation links, a main section with a title,
 * description, and a call-to-action button, and a footer section with contact information.
 */
 <!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Water Footprint Calculator</title>
    <style>
        body {
            margin: 0;
            padding: 0;
            background-image: url("https://img.freepik.com/free-photo/growing-organic-ecological-plants-fields-background_1268-30622.jpg?t=st=1726004634~exp=1726008234~hmac=37cee25de8b55d955b83d27c5d4edc6cbccc78b56ea1d539b72443cee99ab97c&w=1060");
            background-size: cover;
            background-repeat: no-repeat;
            background-position: center;
            font-family: 'Arial', sans-serif;
            color: #333;
            display: flex;
            justify-content: center;
            align-items: center;
            min-height: 100vh;
        }

        .container {
            background-color: rgba(255, 255, 255, 0.8);
            padding: 30px;
            border-radius: 10px;
            text-align: center;
        }

        h1 {
            font-size: 3em;
            margin-bottom: 20px;
        }

        h2 {
            font-size: 2em;
            margin-top: 30px;
            margin-bottom: 10px;
        }

        p {
            font-size: 1.2em;
            line-height: 1.6;
        }

        .button-group {
            display: flex;
            justify-content: center;
            margin-top: 30px;
        }

        button {
            background-color: #4CAF50;
            color: white;
            padding: 15px 30px;
            margin: 0 10px;
            border: none;
            border-radius: 5px;
            cursor: pointer;
            transition: background-color 0.3s;
        }

        button:hover {
            background-color: #45a049;
        }

        .footer {
            background-color: aliceblue;
            position: absolute;
            bottom: 20px;
            left: 50%;
            transform: translateX(-50%);
            font-size: 0.8em;
        }

        .header {
            display: flex;
            justify-content: center;
            align-items: center;
            margin-bottom: 30px;
        }

        .header img {
            width: 50px;
            height: 50px;
            margin-right: 10px;
        }

        .header a {
            text-decoration: none;
            color: #333;
            font-weight: bold;
            margin: 0 10px;
            transition: color 0.3s;
        }

        .header a:hover {
            color: #4CAF50;
        }
    </style>
</head>
<body>
    
    <div class="container">
        <h1>WATER FOOTPRINT CALCULATOR</h1>
        <h2>Calculate Your Water Footprint</h2>
        <p>Understand the water usage of your agricultural practices</p>
        <div class="button-group">
            <a href="app3.html"><button>Start Calculator</button></a>
        </div>
    </div>
    <div class="footer">
        Contact us: info@seametrics.com
        <br>
        Follow us on social media
    </div>
</body>
</html>
