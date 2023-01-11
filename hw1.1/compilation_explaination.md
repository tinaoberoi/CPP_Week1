Ques: Whether g++ or the other compilers are behaving correctly and why?

Ans: `Class template argument deduction for aggregates` is implemented in g++ for c++20 whereas it is not implemented in clang or other compilers.
This is the reason clang and other compilers are failing for `vector<auto>`. 