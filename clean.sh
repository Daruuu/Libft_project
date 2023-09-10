find . -type f \( -name "a.out" -o -name "*.o" -o -name "*.a" \) -exec rm -f {} \;
