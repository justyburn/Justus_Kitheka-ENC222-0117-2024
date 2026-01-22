stations = [10.5, 20.0, 35.2, 50.1]

# Iteration
for s in stations:
    # Selection
    if s > 30.0:
        print(f"Station {s}: Outside boundary")
    else:
        print(f"Station {s}: Inside boundary")