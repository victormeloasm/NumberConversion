# Number System Conversion

This C program converts numbers from one number system to another. It supports a wide range of bases, from 2 to 36, allowing you to convert numbers using both digits and characters.

It's a exercise from my professor @bernd-ulmann. In his words: Convert numbers from one number system into another one. The base b can be 2 <= b <= 36, so you can use 10 digits and 26 characters to represent numbers. Conversion should run from one given base into another one, so 11111111 in base 2 should be converted to 377 in base 8 etc.

## Features

- Convert numbers from any base between 2 and 36.
- Supports both digits (0-9) and characters (A-Z, a-z) for number representation.
- Provides accurate conversion between number systems.
- Handles invalid input gracefully and displays appropriate error messages.

## Getting Started

To use this program, follow these steps:

1. Clone the repository or download the source code files.

2. Compile the program using a C compiler. For example, using GCC:

    ```
    gcc -o number_conversion number_conversion.c
    ```

3. Run the compiled executable:

    ```
    ./number_conversion
    ```

4. Enter the number you want to convert, the source base, and the target base when prompted.

5. The program will display the converted number.

## Usage Example

Let's say you want to convert the binary number `11111111` to base 8 (octal). Here's how you would use the program:

1. Run the compiled program:

    ```
    ./number_conversion
    ```

2. Enter the following inputs when prompted:

    ```
    Enter the number: 11111111
    Enter the source base: 2
    Enter the target base: 8
    ```

3. The program will display the converted number:

    ```
    Converted number: 377
    ```

## Limitations

- The program currently supports numbers up to 31 digits in length. If you need to convert longer numbers, you can modify the `result` array size in the `convertBase` function accordingly.
- The program assumes valid inputs for the number and bases. Invalid characters or bases outside the range of 2 to 36 will result in error messages being displayed.
- Floating-point numbers are not supported. The program performs integer-based conversions only.

## Contributing

Contributions are welcome! If you find any issues or have suggestions for improvements, feel free to open an issue or submit a pull request.

## License

This program is licensed under the [MIT License](LICENSE). You are free to modify and distribute it as per the terms of the license.
