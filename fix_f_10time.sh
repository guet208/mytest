cp libasn1.so /usr/lib
echo 36275 >t

run()
{
./nanotddLteScanner -L t -k -g
./snifferMsgExtractor
cat sniffer.out >>result.txt
}
rm result.txt
run
run
run
run
run
run
run
run
run
run


cat result.txt









