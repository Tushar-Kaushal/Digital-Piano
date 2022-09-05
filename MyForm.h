#pragma once
#include<Windows.h>
#include <conio.h>

namespace DigitalPiano {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Button^ C4;
	private: System::Windows::Forms::Button^ D4;
	private: System::Windows::Forms::Button^ F4;
	protected:



	private: System::Windows::Forms::Button^ E4;
	private: System::Windows::Forms::Button^ C5;


	private: System::Windows::Forms::Button^ B4;

	private: System::Windows::Forms::Button^ A4;

	private: System::Windows::Forms::Button^ G4;
	private: System::Windows::Forms::Button^ B5;




	private: System::Windows::Forms::Button^ A5;

	private: System::Windows::Forms::Button^ G5;

	private: System::Windows::Forms::Button^ F5;

	private: System::Windows::Forms::Button^ E5;

	private: System::Windows::Forms::Button^ D5;
	private: System::Windows::Forms::Button^ Cs4;
	private: System::Windows::Forms::Button^ Fs4;
	private: System::Windows::Forms::Button^ gS4;
	private: System::Windows::Forms::Button^ As4;





	private: System::Windows::Forms::Button^ Ds4;
	private: System::Windows::Forms::Button^ Cs5;
	private: System::Windows::Forms::Button^ dS5;
	private: System::Windows::Forms::Button^ Fs5;
	private: System::Windows::Forms::Button^ Gs5;
	private: System::Windows::Forms::Button^ As5;
	private: System::Windows::Forms::Button^ C6;








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
			this->C4 = (gcnew System::Windows::Forms::Button());
			this->D4 = (gcnew System::Windows::Forms::Button());
			this->F4 = (gcnew System::Windows::Forms::Button());
			this->E4 = (gcnew System::Windows::Forms::Button());
			this->C5 = (gcnew System::Windows::Forms::Button());
			this->B4 = (gcnew System::Windows::Forms::Button());
			this->A4 = (gcnew System::Windows::Forms::Button());
			this->G4 = (gcnew System::Windows::Forms::Button());
			this->B5 = (gcnew System::Windows::Forms::Button());
			this->A5 = (gcnew System::Windows::Forms::Button());
			this->G5 = (gcnew System::Windows::Forms::Button());
			this->F5 = (gcnew System::Windows::Forms::Button());
			this->E5 = (gcnew System::Windows::Forms::Button());
			this->D5 = (gcnew System::Windows::Forms::Button());
			this->Cs4 = (gcnew System::Windows::Forms::Button());
			this->Fs4 = (gcnew System::Windows::Forms::Button());
			this->gS4 = (gcnew System::Windows::Forms::Button());
			this->As4 = (gcnew System::Windows::Forms::Button());
			this->Ds4 = (gcnew System::Windows::Forms::Button());
			this->Cs5 = (gcnew System::Windows::Forms::Button());
			this->dS5 = (gcnew System::Windows::Forms::Button());
			this->Fs5 = (gcnew System::Windows::Forms::Button());
			this->Gs5 = (gcnew System::Windows::Forms::Button());
			this->As5 = (gcnew System::Windows::Forms::Button());
			this->C6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// C4
			// 
			this->C4->BackColor = System::Drawing::Color::White;
			this->C4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->C4->Location = System::Drawing::Point(2, 0);
			this->C4->Name = L"C4";
			this->C4->Size = System::Drawing::Size(78, 311);
			this->C4->TabIndex = 0;
			this->C4->Text = L"C";
			this->C4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->C4->UseVisualStyleBackColor = false;
			this->C4->Click += gcnew System::EventHandler(this, &MyForm::C_Click);
			this->C4->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::C4_KeyDown);
			this->C4->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::C4_KeyDown);
			// 
			// D4
			// 
			this->D4->BackColor = System::Drawing::Color::White;
			this->D4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Bold));
			this->D4->Location = System::Drawing::Point(86, 0);
			this->D4->Name = L"D4";
			this->D4->Size = System::Drawing::Size(78, 311);
			this->D4->TabIndex = 1;
			this->D4->Text = L"D";
			this->D4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->D4->UseVisualStyleBackColor = false;
			this->D4->Click += gcnew System::EventHandler(this, &MyForm::D4_Click);
			// 
			// F4
			// 
			this->F4->BackColor = System::Drawing::Color::White;
			this->F4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Bold));
			this->F4->Location = System::Drawing::Point(255, 0);
			this->F4->Name = L"F4";
			this->F4->Size = System::Drawing::Size(78, 311);
			this->F4->TabIndex = 3;
			this->F4->Text = L"F";
			this->F4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->F4->UseVisualStyleBackColor = false;
			this->F4->Click += gcnew System::EventHandler(this, &MyForm::F4_Click);
			// 
			// E4
			// 
			this->E4->BackColor = System::Drawing::Color::White;
			this->E4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Bold));
			this->E4->Location = System::Drawing::Point(171, 0);
			this->E4->Name = L"E4";
			this->E4->Size = System::Drawing::Size(78, 311);
			this->E4->TabIndex = 2;
			this->E4->Text = L"E";
			this->E4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->E4->UseVisualStyleBackColor = false;
			this->E4->Click += gcnew System::EventHandler(this, &MyForm::E4_Click);
			// 
			// C5
			// 
			this->C5->BackColor = System::Drawing::Color::White;
			this->C5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Bold));
			this->C5->Location = System::Drawing::Point(592, 0);
			this->C5->Name = L"C5";
			this->C5->Size = System::Drawing::Size(78, 311);
			this->C5->TabIndex = 7;
			this->C5->Text = L"C";
			this->C5->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->C5->UseVisualStyleBackColor = false;
			this->C5->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// B4
			// 
			this->B4->BackColor = System::Drawing::Color::White;
			this->B4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Bold));
			this->B4->Location = System::Drawing::Point(508, 0);
			this->B4->Name = L"B4";
			this->B4->Size = System::Drawing::Size(78, 311);
			this->B4->TabIndex = 6;
			this->B4->Text = L"B";
			this->B4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->B4->UseVisualStyleBackColor = false;
			this->B4->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// A4
			// 
			this->A4->BackColor = System::Drawing::Color::White;
			this->A4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Bold));
			this->A4->Location = System::Drawing::Point(423, 0);
			this->A4->Name = L"A4";
			this->A4->Size = System::Drawing::Size(78, 311);
			this->A4->TabIndex = 5;
			this->A4->Text = L"A";
			this->A4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->A4->UseVisualStyleBackColor = false;
			this->A4->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// G4
			// 
			this->G4->BackColor = System::Drawing::Color::White;
			this->G4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Bold));
			this->G4->Location = System::Drawing::Point(339, 0);
			this->G4->Name = L"G4";
			this->G4->Size = System::Drawing::Size(78, 311);
			this->G4->TabIndex = 4;
			this->G4->Text = L"G";
			this->G4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->G4->UseVisualStyleBackColor = false;
			this->G4->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// B5
			// 
			this->B5->BackColor = System::Drawing::Color::White;
			this->B5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Bold));
			this->B5->Location = System::Drawing::Point(1097, 0);
			this->B5->Name = L"B5";
			this->B5->Size = System::Drawing::Size(78, 311);
			this->B5->TabIndex = 13;
			this->B5->Text = L"B";
			this->B5->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->B5->UseVisualStyleBackColor = false;
			this->B5->Click += gcnew System::EventHandler(this, &MyForm::B5_Click);
			// 
			// A5
			// 
			this->A5->BackColor = System::Drawing::Color::White;
			this->A5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Bold));
			this->A5->Location = System::Drawing::Point(1013, 0);
			this->A5->Name = L"A5";
			this->A5->Size = System::Drawing::Size(78, 311);
			this->A5->TabIndex = 12;
			this->A5->Text = L"A";
			this->A5->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->A5->UseVisualStyleBackColor = false;
			this->A5->Click += gcnew System::EventHandler(this, &MyForm::A5_Click);
			// 
			// G5
			// 
			this->G5->BackColor = System::Drawing::Color::White;
			this->G5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Bold));
			this->G5->Location = System::Drawing::Point(929, 0);
			this->G5->Name = L"G5";
			this->G5->Size = System::Drawing::Size(78, 311);
			this->G5->TabIndex = 11;
			this->G5->Text = L"G";
			this->G5->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->G5->UseVisualStyleBackColor = false;
			this->G5->Click += gcnew System::EventHandler(this, &MyForm::G5_Click);
			// 
			// F5
			// 
			this->F5->BackColor = System::Drawing::Color::White;
			this->F5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Bold));
			this->F5->Location = System::Drawing::Point(845, 0);
			this->F5->Name = L"F5";
			this->F5->Size = System::Drawing::Size(78, 311);
			this->F5->TabIndex = 10;
			this->F5->Text = L"F";
			this->F5->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->F5->UseVisualStyleBackColor = false;
			this->F5->Click += gcnew System::EventHandler(this, &MyForm::F5_Click);
			// 
			// E5
			// 
			this->E5->BackColor = System::Drawing::Color::White;
			this->E5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Bold));
			this->E5->Location = System::Drawing::Point(760, 0);
			this->E5->Name = L"E5";
			this->E5->Size = System::Drawing::Size(78, 311);
			this->E5->TabIndex = 9;
			this->E5->Text = L"E";
			this->E5->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->E5->UseVisualStyleBackColor = false;
			this->E5->Click += gcnew System::EventHandler(this, &MyForm::E5_Click);
			// 
			// D5
			// 
			this->D5->BackColor = System::Drawing::Color::White;
			this->D5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Bold));
			this->D5->Location = System::Drawing::Point(676, 0);
			this->D5->Name = L"D5";
			this->D5->Size = System::Drawing::Size(78, 311);
			this->D5->TabIndex = 8;
			this->D5->Text = L"D";
			this->D5->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->D5->UseVisualStyleBackColor = false;
			this->D5->Click += gcnew System::EventHandler(this, &MyForm::D5_Click);
			// 
			// Cs4
			// 
			this->Cs4->BackColor = System::Drawing::Color::Black;
			this->Cs4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Bold));
			this->Cs4->ForeColor = System::Drawing::Color::White;
			this->Cs4->Location = System::Drawing::Point(49, 0);
			this->Cs4->Name = L"Cs4";
			this->Cs4->Size = System::Drawing::Size(67, 200);
			this->Cs4->TabIndex = 16;
			this->Cs4->Text = L"C#";
			this->Cs4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->Cs4->UseVisualStyleBackColor = false;
			this->Cs4->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// Fs4
			// 
			this->Fs4->BackColor = System::Drawing::Color::Black;
			this->Fs4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Bold));
			this->Fs4->ForeColor = System::Drawing::Color::White;
			this->Fs4->Location = System::Drawing::Point(303, 0);
			this->Fs4->Name = L"Fs4";
			this->Fs4->Size = System::Drawing::Size(67, 200);
			this->Fs4->TabIndex = 16;
			this->Fs4->Text = L"F#";
			this->Fs4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->Fs4->UseVisualStyleBackColor = false;
			this->Fs4->Click += gcnew System::EventHandler(this, &MyForm::Fs4_Click);
			// 
			// gS4
			// 
			this->gS4->BackColor = System::Drawing::Color::Black;
			this->gS4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Bold));
			this->gS4->ForeColor = System::Drawing::Color::White;
			this->gS4->Location = System::Drawing::Point(387, 0);
			this->gS4->Name = L"gS4";
			this->gS4->Size = System::Drawing::Size(67, 200);
			this->gS4->TabIndex = 16;
			this->gS4->Text = L"G#";
			this->gS4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->gS4->UseVisualStyleBackColor = false;
			this->gS4->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// As4
			// 
			this->As4->BackColor = System::Drawing::Color::Black;
			this->As4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Bold));
			this->As4->ForeColor = System::Drawing::Color::White;
			this->As4->Location = System::Drawing::Point(471, 0);
			this->As4->Name = L"As4";
			this->As4->Size = System::Drawing::Size(67, 200);
			this->As4->TabIndex = 16;
			this->As4->Text = L"A#";
			this->As4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->As4->UseVisualStyleBackColor = false;
			this->As4->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// Ds4
			// 
			this->Ds4->BackColor = System::Drawing::Color::Black;
			this->Ds4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Bold));
			this->Ds4->ForeColor = System::Drawing::Color::White;
			this->Ds4->Location = System::Drawing::Point(137, 0);
			this->Ds4->Name = L"Ds4";
			this->Ds4->Size = System::Drawing::Size(67, 200);
			this->Ds4->TabIndex = 16;
			this->Ds4->Text = L"D#";
			this->Ds4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->Ds4->UseVisualStyleBackColor = false;
			this->Ds4->Click += gcnew System::EventHandler(this, &MyForm::Ds4_Click);
			// 
			// Cs5
			// 
			this->Cs5->BackColor = System::Drawing::Color::Black;
			this->Cs5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Bold));
			this->Cs5->ForeColor = System::Drawing::Color::White;
			this->Cs5->Location = System::Drawing::Point(640, 0);
			this->Cs5->Name = L"Cs5";
			this->Cs5->Size = System::Drawing::Size(67, 200);
			this->Cs5->TabIndex = 16;
			this->Cs5->Text = L"C#";
			this->Cs5->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->Cs5->UseVisualStyleBackColor = false;
			this->Cs5->Click += gcnew System::EventHandler(this, &MyForm::Cs5_Click);
			// 
			// dS5
			// 
			this->dS5->BackColor = System::Drawing::Color::Black;
			this->dS5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Bold));
			this->dS5->ForeColor = System::Drawing::Color::White;
			this->dS5->Location = System::Drawing::Point(728, 0);
			this->dS5->Name = L"dS5";
			this->dS5->Size = System::Drawing::Size(67, 200);
			this->dS5->TabIndex = 16;
			this->dS5->Text = L"D#";
			this->dS5->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->dS5->UseVisualStyleBackColor = false;
			this->dS5->Click += gcnew System::EventHandler(this, &MyForm::dS5_Click);
			// 
			// Fs5
			// 
			this->Fs5->BackColor = System::Drawing::Color::Black;
			this->Fs5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Bold));
			this->Fs5->ForeColor = System::Drawing::Color::White;
			this->Fs5->Location = System::Drawing::Point(893, 0);
			this->Fs5->Name = L"Fs5";
			this->Fs5->Size = System::Drawing::Size(67, 200);
			this->Fs5->TabIndex = 16;
			this->Fs5->Text = L"F#";
			this->Fs5->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->Fs5->UseVisualStyleBackColor = false;
			this->Fs5->Click += gcnew System::EventHandler(this, &MyForm::Fs5_Click);
			// 
			// Gs5
			// 
			this->Gs5->BackColor = System::Drawing::Color::Black;
			this->Gs5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Bold));
			this->Gs5->ForeColor = System::Drawing::Color::White;
			this->Gs5->Location = System::Drawing::Point(977, 0);
			this->Gs5->Name = L"Gs5";
			this->Gs5->Size = System::Drawing::Size(67, 200);
			this->Gs5->TabIndex = 16;
			this->Gs5->Text = L"G#";
			this->Gs5->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->Gs5->UseVisualStyleBackColor = false;
			this->Gs5->Click += gcnew System::EventHandler(this, &MyForm::Gs5_Click);
			// 
			// As5
			// 
			this->As5->BackColor = System::Drawing::Color::Black;
			this->As5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Bold));
			this->As5->ForeColor = System::Drawing::Color::White;
			this->As5->Location = System::Drawing::Point(1064, 0);
			this->As5->Name = L"As5";
			this->As5->Size = System::Drawing::Size(67, 200);
			this->As5->TabIndex = 16;
			this->As5->Text = L"A#";
			this->As5->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->As5->UseVisualStyleBackColor = false;
			this->As5->Click += gcnew System::EventHandler(this, &MyForm::As5_Click);
			// 
			// C6
			// 
			this->C6->BackColor = System::Drawing::Color::White;
			this->C6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Bold));
			this->C6->Location = System::Drawing::Point(1181, 0);
			this->C6->Name = L"C6";
			this->C6->Size = System::Drawing::Size(78, 311);
			this->C6->TabIndex = 10;
			this->C6->Text = L"C";
			this->C6->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->C6->UseVisualStyleBackColor = false;
			this->C6->Click += gcnew System::EventHandler(this, &MyForm::C6_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1262, 315);
			this->Controls->Add(this->As5);
			this->Controls->Add(this->Gs5);
			this->Controls->Add(this->As4);
			this->Controls->Add(this->Fs5);
			this->Controls->Add(this->gS4);
			this->Controls->Add(this->Fs4);
			this->Controls->Add(this->dS5);
			this->Controls->Add(this->Ds4);
			this->Controls->Add(this->Cs5);
			this->Controls->Add(this->Cs4);
			this->Controls->Add(this->B5);
			this->Controls->Add(this->A5);
			this->Controls->Add(this->G5);
			this->Controls->Add(this->C6);
			this->Controls->Add(this->F5);
			this->Controls->Add(this->E5);
			this->Controls->Add(this->D5);
			this->Controls->Add(this->C5);
			this->Controls->Add(this->B4);
			this->Controls->Add(this->A4);
			this->Controls->Add(this->G4);
			this->Controls->Add(this->F4);
			this->Controls->Add(this->E4);
			this->Controls->Add(this->D4);
			this->Controls->Add(this->C4);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void C_Click(System::Object^ sender, System::EventArgs^ e) {
		Beep(261.63, 500);
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	Beep(392, 500);
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	Beep(440, 500);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Beep(493.88, 500);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Beep(523.25, 500);
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	Beep(415.30, 500);
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	Beep(466.16, 500);
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {

	Beep(277.18, 500);
}
private: System::Void D4_Click(System::Object^ sender, System::EventArgs^ e) {
	Beep(293.665, 500);
}
private: System::Void E4_Click(System::Object^ sender, System::EventArgs^ e) {
	Beep(329.628, 500);
}
private: System::Void Ds4_Click(System::Object^ sender, System::EventArgs^ e) {
	Beep(311.13, 500);
}
private: System::Void C4_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
}
private: System::Void F4_Click(System::Object^ sender, System::EventArgs^ e) {
	Beep(349.23, 500);
}
private: System::Void D5_Click(System::Object^ sender, System::EventArgs^ e) {
	Beep(587.33, 500);
}
private: System::Void E5_Click(System::Object^ sender, System::EventArgs^ e) {Beep(659.25, 500);
}
private: System::Void F5_Click(System::Object^ sender, System::EventArgs^ e) {
	Beep(698.46, 500);
}
private: System::Void G5_Click(System::Object^ sender, System::EventArgs^ e) {
	Beep(783.99, 500);
}
private: System::Void A5_Click(System::Object^ sender, System::EventArgs^ e) {
	Beep(880, 500);
}
private: System::Void B5_Click(System::Object^ sender, System::EventArgs^ e) {
	Beep(987.77, 500);
}
private: System::Void C6_Click(System::Object^ sender, System::EventArgs^ e) {
	Beep(1046.5, 500);
}
private: System::Void Fs4_Click(System::Object^ sender, System::EventArgs^ e) {
	Beep(369.99, 500);
}
private: System::Void Cs5_Click(System::Object^ sender, System::EventArgs^ e) {
	Beep(554.37, 500);
}
private: System::Void dS5_Click(System::Object^ sender, System::EventArgs^ e) {
	Beep(622.25, 500);
}
private: System::Void Fs5_Click(System::Object^ sender, System::EventArgs^ e) {
	Beep(739.99, 500);
}
private: System::Void Gs5_Click(System::Object^ sender, System::EventArgs^ e) {
	Beep(830.61, 500);
}
private: System::Void As5_Click(System::Object^ sender, System::EventArgs^ e) {
	Beep(932.33, 500);
}
};
}
