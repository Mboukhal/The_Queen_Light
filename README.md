# The Queen Light

## Project Overview
This ESP32-based project utilize an LED strip (SM16703) and an ultrasonic sensor (HC-SR04) to check void closets without the need to open them. The code is modularized for better organization and readability.

## Hardware Components
- ESP32
- LED strip (SM16703)
- Ultrasonic sensor (HC-SR04)
- Shift Register (74hc565)

## Libraries
The project utilizes the following library:
- [FastLED](https://github.com/FastLED/FastLED) - for controlling the LED strip.

## Pin Configuration
The LED strip data pin is configured using `DATA_PIN`.

## Code Structure
The project is organized into multiple files:
- **The_Queen_Light.ino**: The main file containing setup and loop functions.
- **modules.cpp**: Defines additional modular functions.
- **modules.hpp**: Header file for function declarations.

## Functionality
1. **Setup Function:**
   - Initializes the LED strip.

2. **Loop Function:**
   - Utilizes the `UpTo` function to sequentially light up different sections of the LED strip with specified colors.
   - The `UpTo` function gradually illuminates sections with different colors.
<!---
## Usage Instructions
Provide instructions for setting up and using the project.

## Code Considerations
- Specify any important considerations, such as power requirements, safety precautions, or potential issues.

## Future Improvements
Suggest possible improvements or features that could enhance the project.

## Licensing
Specify the license under which you are sharing the code.

## Examples
Provide examples of how to modify the code for different LED strip configurations or additional sensors.

## Credits
Give credit to any third-party libraries or resources used in the project.
-->
