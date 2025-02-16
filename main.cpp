#include <iostream>

#include <format>

auto cpp20_support_test(const std::string& str) {

	std::string f = std::format("****** {} *********", str);
	return f;
}

int main(){
  
  int a = 123;
  float b = 12.4f;
  double c = a * b;

  std::cout << static_cast<int>(c) << "\n" 
			<< cpp20_support_test("IF HAD TO") ;

  return 0;
}
