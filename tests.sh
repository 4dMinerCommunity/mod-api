function 2Nl {
	echo ""
	echo ""
}


echo "makeing tests"

2Nl

make -C "tests/"


2Nl


2Nl

echo "Tests Made, trying to run"

touch temp.test
for test in tests/made/*; do
	if [ "$test" != "tests/makefile" ]; then
		if [ -f "$test" ]; then 
			echo "~/mod-api/$test" > ./temp.test
			bash ./temp.test

			echo "test: $test made"
		fi
	fi
done


cd tests

make clean

cd ..
rm temp.test

