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
	Matrix matrix1 (3, 3);
	Matrix matrix2 (3, 3);
	Matrix matrix3 (3, 3);	
	std::ifstream("matrix1.txt") >> m1;
	std::ifstream("matrix2.txt") >> m2;
	std::ifstream("summatrix.txt") >> m3;
}

SCENARIO("operator *") {
	Matrix matrix1 (3, 3);
	Matrix matrix2 (3, 3);
	Matrix matrix3 (3, 3);	
	std::ifstream("matrix1.txt") >> m1;
	std::ifstream("matrix2.txt") >> m2;
	std::ifstream("multmatrix.txt") >> m3;
}
REQUIRE(matrix.Strings() == 0);
REQUIRE(matrix.Columns() == 0);
REQUIRE(matrix.Strings() == 3);
REQUIRE(matrix.Columns() == 3);
REQUIRE(copy.Strings() == 3);
REQUIRE(copy.Columns() == 3);
REQUIRE(m1 + m2 == m3);
REQUIRE(m1 * m2 == m3);
