#pragma once

#using <System.dll>  //To used like Vector, Array.

namespace DE {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::Collections::Generic; //To used like Vector, Array.

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ problemTextBox;
	protected:

	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ selectComboBox;

	private: System::Windows::Forms::VScrollBar^ vScrollBar1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->problemTextBox = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->selectComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->vScrollBar1 = (gcnew System::Windows::Forms::VScrollBar());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// problemTextBox
			// 
			this->problemTextBox->Location = System::Drawing::Point(655, 144);
			this->problemTextBox->Name = L"problemTextBox";
			this->problemTextBox->Size = System::Drawing::Size(388, 22);
			this->problemTextBox->TabIndex = 0;
			this->problemTextBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::problemTextBox_KeyDown);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(514, 214);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 37);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Solve!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(238, 310);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(689, 34);
			this->label1->TabIndex = 2;
			this->label1->Text = L"                                        Solution:                                "
				L"        ";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// selectComboBox
			// 
			this->selectComboBox->FormattingEnabled = true;
			this->selectComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Classification by Type" });
			this->selectComboBox->Location = System::Drawing::Point(195, 142);
			this->selectComboBox->Name = L"selectComboBox";
			this->selectComboBox->Size = System::Drawing::Size(217, 24);
			this->selectComboBox->TabIndex = 3;
			// 
			// vScrollBar1
			// 
			this->vScrollBar1->Location = System::Drawing::Point(1141, 310);
			this->vScrollBar1->Name = L"vScrollBar1";
			this->vScrollBar1->Size = System::Drawing::Size(27, 342);
			this->vScrollBar1->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(499, 146);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(139, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Input your problem:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(286, 33);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(598, 57);
			this->label3->TabIndex = 6;
			this->label3->Text = L"DIFFERENTIAL EQUATION";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(114, 145);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 16);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Formula:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1177, 661);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->vScrollBar1);
			this->Controls->Add(this->selectComboBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->problemTextBox);
			this->Name = L"MyForm";
			this->Text = L"Differential Equation";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	
#pragma endregion



private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	solving();
}

private: System::Void problemTextBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Enter) {
		solving();
	}
}

	   Void solving() {
		   String^ problemText;
		   List<wchar_t>^ IV = gcnew List<wchar_t>(); // List for Independent Variables
		   List<wchar_t>^ DV = gcnew List<wchar_t>(); // List for Dependent Variables
		   wchar_t partial = L'\u2202'; // For ∂
		   bool numerator = true;
		   bool theresPartial = false;
		   bool parenthesis = false;
		   bool reciprocalDVIV = false;
		   wchar_t order = '1';
		   wchar_t degree = '0';
		   wchar_t preExponential = '0'; // it is used to check if the denominator exponent is the same on the numerator exponent
		   wchar_t partExponential = '0'; // For solving each part of their exponent
		   String^ linearity;
		   problemText = problemTextBox->Text; // Get the problem equation
		   numerator = true;

		   this->label1->Text = "                                        Solution:                                        ";
		   DV->Clear();
		   IV->Clear();

		   if (selectComboBox->Text == "Classification by Type") {
			   for (int i = 0; i < problemText->Length; i++) {
				   if (problemText[i] == '(') { // Check if there's a parenthesis
					   parenthesis = true;
				   }
				   else if (problemText[i] == ')') {
					   parenthesis = false;
					   if (i + 1 < problemText->Length && problemText[i + 1] == '^') {
						   i += 2; // Skip '^' and move to the exponent character
						   partExponential = problemText[i];
					   }
					   else {
						   partExponential = '1'; // If no exponent, assume it's '1'
					   }
				   }
				   if (problemText[i] == 'd' || problemText[i] == partial) { // If it detects 'd' or '∂'
					   if (problemText[i] == partial) { // If this is partial
						   theresPartial = true;
					   }
					   i++;
					   if (problemText[i] == '^') { // If it is exponential, get the Order if it is the highest
						   i++;
						   order = problemText[i];
						   if (numerator == true) { // Get the exponential from the numerator
							   preExponential = problemText[i];
						   }
					   }
					   else if (numerator == true) { // If it's not exponent
						   preExponential = '1';
						   linearity = "Linear";		   
					   }
					   while (i < problemText->Length && problemText[i] != 'x' && problemText[i] != 'y' && problemText[i] != 'z' && problemText[i] != 'v') {
						   i++; // Find until 'x', 'y', 'z', or 'v'
					   }
					   if (numerator == true) { // If this is NUMERATOR
						   if (!DV->Contains(problemText[i])) { // To prevent repeat answer
							   DV->Add(problemText[i]);
						   }
						   while (i < problemText->Length && problemText[i] != '/') { // Repeat until it finds a fraction or not	   
							   if (problemText[i] == '+' || problemText[i] == '-') { // If it's found '+' or '-' instead of '/'
								   numerator = false;
								   break;
							   }  
							   i++;
						   }
						   if (i < problemText->Length && problemText[i] == '/') {
							   numerator = false; // After numerator, it will change to the denominator target
						   }
						   else { // If didn't detect fraction, it will reverse DV and IV
							   reciprocalDVIV = true;
						   }
					   }
					   else if (numerator == false) { // If this is DENOMINATOR
						   if (!IV->Contains(problemText[i])) { // To prevent repeat answer
							   IV->Add(problemText[i]);
						   }
						   if (degree == '1') { // Check if it is linear or not linear (Work on the 2nd)
							   linearity = "Linear";
						   }
						   if (order == preExponential) { // Check if the exponent of the numerator is the same as the exponent of the denominator
							   degree = '1';
						   }
						   if (parenthesis == true) { // Get the exponential on that part
							   partExponential = preExponential;
						   }
						   numerator = true; // After denominator, it will change to the numerator target
					   }
				   }
			   }
			   // Create strings for displaying the variables
			   String^ dependentVariable = String::Join(",", DV);
			   String^ independentVariable = String::Join(",", IV);
			   if (reciprocalDVIV == false) {
				   this->label1->Text += "\n" + "Dependent Variable: " + dependentVariable;
				   this->label1->Text += "\n" + "Independent Variable: " + independentVariable;
			   }
			   else {
				   this->label1->Text += "\n" + "Dependent Variable: " + independentVariable;
				   this->label1->Text += "\n" + "Independent Variable: " + dependentVariable;
			   }
			   this->label1->Text += "\n" + "Type: ";
			   if (DV->Count > 1 || IV->Count > 1 || theresPartial == true) {
				   this->label1->Text += "Partial";
			   }
			   else {
				   this->label1->Text += "Ordinary";
			   }
			   this->label1->Text += "\n" + "Order: " + order;
			   this->label1->Text += "\n" + "Degree: " + degree  /* + " " + order + " " + preExponential + " " + partExponential*/;
			   this->label1->Text += "\n" + "Linearity: " + linearity;
		   }
		   else {
			   this->label1->Text = "Please Select the Formula.";
		   }
	   }

};
}
