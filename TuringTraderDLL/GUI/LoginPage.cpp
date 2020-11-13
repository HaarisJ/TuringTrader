#include "LoginPage.h"

using namespace GUI;

int main(int argc, char** argv) {

	LoginPage^ g = gcnew LoginPage();
	Application::Run(g);

	return 0;
}