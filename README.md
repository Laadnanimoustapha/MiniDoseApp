
# MiniDoseApp

**Free Palestine** 🇵🇸

This is a simple C++ application that calculates the recommended dosage of medication based on the patient's weight. It currently supports three medications: Paracétamol, Amoxicilline, and Ibuprofène.

### Features

- Simple dose calculator
- Supports three common medications
- Input for patient's name (optional)
- Input for patient's weight in kilograms
- Outputs the recommended dosage based on weight and selected medication

### Medications

- **Paracétamol**: 15 mg per kg
- **Amoxicilline**: 20 mg per kg
- **Ibuprofène**: 10 mg per kg

### How it works

1. The user inputs the patient's weight (in kg).
2. The user selects the medication from the available choices.
3. The app calculates the recommended dosage in mg and displays it.

### Requirements

- C++ Compiler (e.g., GCC, Clang)
- Standard C++ library

### Installation

1. Clone the repository:

   ```bash
   git clone https://github.com/your-username/MiniDoseApp.git
   ```

2. Navigate to the project directory:

   ```bash
   cd MiniDoseApp
   ```

3. Compile the program:

   ```bash
   g++ -o MiniDoseApp MiniDoseApp.cpp
   ```

4. Run the program:

   ```bash
   ./MiniDoseApp
   ```

### Future Plans

- Convert this to a full app using QT for better GUI functionality.
- Add more medications.
- Provide an option to save patient data.

### License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.


