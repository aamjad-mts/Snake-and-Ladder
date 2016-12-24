# Snake-and-Ladder
A simple snake and ladder game
#include "MyForm.h" //the header name for the form

using namespace ludo; //the project name in the header file

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew MyForm());
	return 0;
}
