#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream out;
	
	out.open("C:\\Users\\Colton\\Desktop\\o.cpp");
	
	out << "#include <iostream>" << endl << endl;
	out << "using namespace std;" << endl << endl;
	out << "int main()" << endl;
	out << "{" << endl;
	
	out << "for (int i = 0; i < 10; i++)" << endl;
	out << "{" << endl;
	out << "cout << \"Hey Bro!\" << endl;" << endl << endl;
	out << "cout << \"Dont Bro me Bro!\" << endl;" << endl << endl;
	out << "cout << endl;" << endl;
	out << "}" << endl;
	out << "cin.ignore();" << endl;
	out << "return 0;" << endl;
	out << "}" << endl;
	
	
}