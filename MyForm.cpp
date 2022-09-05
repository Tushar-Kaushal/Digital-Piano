#include "MyForm.h"
#include <WinUser.h>
#include <conio.h>

using namespace System;

using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ args)

{

    Application::EnableVisualStyles();

    Application::SetCompatibleTextRenderingDefault(false);

    DigitalPiano::MyForm form;

    Application::Run(% form);
    
}


