#!/bin/bash

n=10

python_file="random-number-gen.py"

run_python() {
    echo "Running Testcase Generator..."
    python3 "$python_file"
}

# Function to run the C files
run_c_files() {
    echo "Running K-sorting Algorithms..."
    echo " "
    echo "Running Selection Sort..."
    ./selection-sort
    echo "Running Bubble Sort..."
    ./bubble-sort
    echo "Running Heap Sort..."
    ./heap-sort
}

# Main loop to run the programs n times
for ((i=1; i<=n; i++)); do
    echo "Iteration $i:"
    
    run_python
    run_c_files
    
    echo "Iteration $i complete."
    echo " "
    echo " "
done

echo "Script complete."
