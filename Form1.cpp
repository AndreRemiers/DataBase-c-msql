#include "stdafx.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<System::String ^> ^args)
{
	//copy and paste to create a windows form in c++
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Form1::FormMain  nameObjectForm;
	Application::Run(%nameObjectForm);


    return 0;
}
