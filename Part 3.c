
/**
* Water Footprint Calculator
* 
* This script calculates the water footprint of a crop based on the type of crop, 
* area of land, irrigation method, and average yield.
*/ 

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Water Footprint Calculator</title>
    <style>
        body {
            background-image:url("https://img.freepik.com/free-photo/growing-organic-ecological-plants-fields-background_1268-30622.jpg?t=st=1726004055~exp=1726007655~hmac=260c389d1ddc9961609b5bb7ca88101a341ef2ef3df4897c7779cbafa157e27e&w=1060");
            font-family: sans-serif;
            background-repeat: no-repeat;
            background-size:100%;
            background-position: center;
            margin: 0;
            background-color: #f5f5f5;
        }

        header {
            background-color: #fff;
            padding: 20px 0;
            text-align: center;
            box-shadow: 0 2px 4px rgba(0, 0, 0, 0.1);
        }

        .container {
            width: 100%; 
            height: 100%; 
            max-width: 800px;
            margin: 20px auto;
            padding: 20px;
            background-color: #fff;
            box-shadow: 0 2px 4px rgba(0, 0, 0, 0.1);
            background-image:url("https://img.freepik.com/free-photo/blue-sea-with-waves-clear-blue-sky_1373-486.jpg?t=st=1726004168~exp=1726007768~hmac=818903e4a62a4e9b4a5c8ca7be0a8c99e7c9ff6c4507c3b68d5c3c7bbe6d66df&w=360");
            background-repeat: no-repeat;
            background-size: 100%;
            background-position: center;
        }
        

        h1 {
            margin-top: 0;
            font-size: 2.5em;
        }

        label {
            display: block;
            margin-bottom: 5px;
        }

        select,
        input[type="text"] {
            width: 100%;
            padding: 10px;
            border: 1px solid #ccc;
            box-sizing: border-box;
            margin-bottom: 15px;
        }

        button {
            background-color: #32c10e;
            color: white;
            padding: 12px 20px;
            border: none;
            border-radius: 4px;
            cursor: pointer;
        }

        button:hover {
            background-color: #45a049;
        }

        .result {
            text-align: center;
            font-size: 1.5em;
            margin-top: 20px;
        }

        footer {
            text-align: center;
            padding: 10px 0;
            background-color: #eee;
        }
    </style>
    <link rel="stylesheet" href="style2.css"> <!-- Linking to the CSS file -->
</head>
<body>
    <header>
        <h1>Water Footprint Calculator</h1>
        <nav>
            <div class="button-group">
                <a href="app1.html"><button>HOME</button></a>
            </div>
        </nav>
    </header>
    
    <div class="container">
        <form>
            <label for="crop">Crop Type:</label>
            <select id="crop" name="crop">
                <option value="wheat">Wheat</option>
                <option value="rice">Rice</option>
                <option value="corn">Corn</option>
                <option value="cotton">Cotton</option>
            </select>

            <label for="area">Area of Land (Acres):</label>
            <input type="text" id="area" name="area" placeholder="Enter area">

            <label for="method">Irrigation Method:</label>
            <select id="method" name="method">
                <option value="drip">Drip</option>
                <option value="flood">Flood</option>
                <option value="sprinkler">Sprinkler</option>
            </select>

            <label for="yield">Average Yield(in kg):</label>
            <input type="text" id="yield" name="yield" placeholder="Enter yield">

            <button type="button" onclick="calculateFootprint()">Calculate</button>
        </form>

        <div class="result">
            Your Water Footprint(in Litres):
            <span id="footprint"></span>
        </div>
    </div>


    <script>
        function calculateFootprint() {
           
            let crop = document.getElementById("crop").value;
            let area = parseFloat(document.getElementById("area").value);
            let method = document.getElementById("method").value;
            let yieldValue = parseFloat(document.getElementById("yield").value);

            
            let footprint = 0;
            if (crop === "wheat") {
                footprint = 1.5 * area * yieldValue;
            } else if (crop === "rice") {
                footprint = 2.5 * area * yieldValue;
            } else if (crop === "corn") {
                footprint = 1.8 * area * yieldValue;
            } else if (crop === "cotton") {
                footprint = 2.8 * area * yieldValue;
            }

            // Adjust footprint based on irrigation method
            if (method === "flood") {
                footprint *= 1.2;
            } else if (method === "sprinkler") {
                footprint *= 1.1;
            }

            // Display the result
            document.getElementById("footprint").textContent = footprint.toFixed(2);
        }
    </script>
    <div class="footer">
        Contact us: info@seametrics.com<br>
        Follow us on social media
    </div>
</body>
</html>
