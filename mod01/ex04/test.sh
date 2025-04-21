#!/bin/bash

cmd="$1"

cat > test1.txt << EOF
HELLO world. This is a test of the zed program.
HELLO again, and welcome. We use HELLO to greet.
Sometimes, HELLO is overused. But HELLO still works.
One more HELLO for good measure.
EOF

cat > test2.txt << EOF
The quick brown fox jumps over the lazy dog.
The fox was very clever and fast. Many people admire the fox for its wit.
In this case, the dog didn't even notice. The fox ran off into the woods.
Such is the tale of the fox and the dog.
EOF

cat > test3.txt << EOF
CODING is fun when you solve problems. CODING also brings frustration sometimes.
However, CODING daily sharpens your skills. Many developers enjoy CODING challenges.
CODING is both art and science. Never stop CODING.
EOF

cat > test4.txt << EOF
APPLES are red and sometimes green. I eat APPLES every morning.
APPLES are known for their health benefits. My favorite APPLES are sweet and crisp.
Let’s go buy more APPLES tomorrow.
EOF

cat > test5.txt << EOF
This word should be replaced in every sentence. The word we chose is just a placeholder.
Let’s make sure every word is properly detected. Some sentences have more than one word.
Replacing the word shouldn't break the line. It’s important to replace every matching word.
EOF

if [ ! -f "./zed" ]; then
    echo "Error: ./zed not found. Please compile your program first."
    exit 1
fi

run_test() {
	local testNum="$1"
    local filename="$2"
    local from="$3"
    local to="$4"
    local outfile="${filename}.replace"

    echo "Test $testNum : $cmd $filename $from $to"

    echo
    cat "$filename"
    echo

    $cmd "$filename" "$from" "$to"

    cat "$outfile"
    echo

    if grep -q "$to" "$outfile"; then
        echo "✅ Test $testNum passed"
    else
        echo "❌ Test failed: '$to' not found in output"
    fi
    echo "---------------------------------------------------------"
    echo
}

run_test 1 test1.txt HELLO HI
run_test 2 test2.txt fox cat
run_test 3 test3.txt CODING PROGRAMMING
run_test 4 test4.txt APPLES ORANGES
run_test 5 test5.txt word term

echo "Test input file error : $cmd nofile.txt apple orange"
$cmd nofile.txt apple orange 
if [ $? -ne 0 ]; then
    echo "✅ Test passed (nonexistent input file handled)"
else
    echo "❌ Test failed: nonexistent file not handled"
fi
echo

echo "Test outfile error: $cmd test6.txt locked changed"
echo "this is a locked file" > test6.txt
touch test6.txt.replace
chmod -w test6.txt.replace

$cmd test6.txt locked changed 
if [ $? -ne 0 ]; then
    echo "✅ Test passed (output file unwritable)"
else
    echo "❌ Test failed: should have failed due to write permission"
fi
chmod +w test6.txt.replace
echo

rm -f test*.txt test*.txt.replace

