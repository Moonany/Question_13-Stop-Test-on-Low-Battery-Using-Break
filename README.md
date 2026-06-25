# Stop Test on Low Battery Using `break`

## Overview
This C++ program reads up to 10 battery voltage values and stops the test early if a low battery condition is detected.

- Low battery threshold: **10.5 V**
- Uses a `for` loop to accept up to 10 readings
- Uses `break` to stop the loop immediately when a voltage below the threshold is entered

## Files
- `Question_13-Stop Test on Low Battery Using Break.cpp` - main C++ source code
- `Makefile.win` - Windows build helper (if using `make` on Windows)
- `Algorithm.txt` - algorithm description
- `Pseudocode.sql` - pseudocode version of the logic
- `Question_13-Stop Test on Low Battery Using Break.exe` - compiled executable
- `Question_13-Stop Test on Low Battery Using Break.o` - object file
- `stop_test_low_battery_break_flowchart.png` - process flowchart

## Build
If you have a C++ compiler installed, build with:

```powershell
g++ "Question_13-Stop Test on Low Battery Using Break.cpp" -o "Question_13-Stop Test on Low Battery Using Break.exe"
```

If you have `make` available on Windows, use:

```powershell
make -f Makefile.win
```

## Run
From the project folder, execute:

```powershell
."Question_13-Stop Test on Low Battery Using Break.exe"
```

Then enter voltage readings as prompted. The program will stop early when a reading is below 10.5 V.

## Example
Input sequence:
- `12.1`
- `11.5`
- `10.3`

Output:
- `Battery voltage normal: 12.1 V`
- `Battery voltage normal: 11.5 V`
- `Low battery detected. Test stopped.`
