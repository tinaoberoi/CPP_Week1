hello: hello.cpp
	g++-11 -std=c++20 -Wall -Werror -pedantic -DFMT_HEADER_ONLY -o hello hello.cpp

hello_personalized: hello_personalized.cpp
	g++-11 -std=c++20 -Wall -Werror -pedantic -DFMT_HEADER_ONLY -o hello_personalized hello_personalized.cpp

frame: frame.cpp
	g++-11 -std=c++20 -Wall -Werror -pedantic -DFMT_HEADER_ONLY -o frame frame.cpp

frame2: frame2.cpp
	g++-11 -std=c++20 -Wall -Werror -pedantic -DFMT_HEADER_ONLY -o frame2 frame2.cpp

vector_simple_demo: vector_simple_demo.cpp
	g++-11 -std=c++20 -Wall -Werror -pedantic -DFMT_HEADER_ONLY -o vector_simple_demo vector_simple_demo.cpp

all: hello hello_personalized frame frame2
	clear
	
clean: helloworld
	rm -rf helloworld