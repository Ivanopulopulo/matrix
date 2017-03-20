#include <matrix.hpp>
#include <catch.hpp>

SCENARIO("default constructor") {
	Matrix matrix;
}

SCENARIO("constructor with params") {
	Matrix matrix(3, 3);
}

SCENARIO("copy constructor") {
	Matrix matrix (3, 3);	
	Matrix copy(matrix);	
}


SCENARIO("operator +") {
	Matrix m1 (3, 3);
	Matrix m2 (3, 3);
	Matrix m3 (3, 3);	
	std::ifstream("m1.txt") >> m1;
	std::ifstream("m2.txt") >> m2;
	std::ifstream("m1+m2.txt") >> m3;
}

SCENARIO("operator *") {
	Matrix m1 (3, 3);
	Matrix m2 (3, 3);
	Matrix m3 (3, 3);	
	std::ifstream("m1.txt") >> m1;
	std::ifstream("m2.txt") >> m2;
	std::ifstream("m1 x m2.txt") >> m3;
}
REQUIRE(matrix.Strings() == 0);
REQUIRE(matrix.Columns() == 0);
REQUIRE(matrix.Strings() == 3);
REQUIRE(matrix.Columns() == 3);
REQUIRE(copy.Strings() == 3);
REQUIRE(copy.Columns() == 3);
REQUIRE(m1 + m2 == m3);
REQUIRE(m1 * m2 == m3);
