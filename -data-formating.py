import csv
import time

csv_file = r"C:\Users\CHAR031209\Documents\Pictoblox\DataLogger\data.csv"
txt_file = "_data.txt"

while True:
    with open(csv_file, "r", newline="") as f:
        reader = csv.reader(f)
        rows = list(reader)

    if len(rows) > 1:
        last_word = rows[-1][0].strip()
        with open(txt_file, "w") as f:
            f.write(last_word)
        print(f"Wrote '{last_word}' to {txt_file}")

    time.sleep(0.5)