#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ args) {
    // Enable Windows Forms visual styles
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    DE::MyForm form;
    Application::Run(% form);
}


