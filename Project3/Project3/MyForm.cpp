#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Project3::MyForm form;
	Application::Run(% form);
}

System::Void Project3::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e){
	this->textBox1->Text += "1";

}

System::Void Project3::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text += "2";
}
System::Void Project3::MyForm::button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text += "3";
}
System::Void Project3::MyForm::button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text += "4";
}
System::Void Project3::MyForm::button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text += "5";
}
System::Void Project3::MyForm::button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text += "6";
}
System::Void Project3::MyForm::button7_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text += "7";
}
System::Void Project3::MyForm::button8_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text += "8";
}
System::Void Project3::MyForm::button9_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text += "9";
}
System::Void Project3::MyForm::button10_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text += "0";
}
System::Void Project3::MyForm::button11_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text += ".";
}
System::Void Project3::MyForm::button12_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text += "&";
	String^ buf = textBox1->Text;
	std::string buffer;
	int counter = 0;
	while (buf[counter] != '&') {
		buffer += buf[counter];
		counter++;
	}
	double res = exitString(buffer);
	buffer = std::to_string(res);
	textBox1->Text = gcnew String(buffer.c_str());

}
System::Void Project3::MyForm::button13_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text += "+";
}
System::Void Project3::MyForm::button14_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text += "-";
}
System::Void Project3::MyForm::button15_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text += "*";
}
System::Void Project3::MyForm::button16_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text += "/";
}
System::Void Project3::MyForm::button22_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text += "sqrt";
}
System::Void Project3::MyForm::button21_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text += "ctg";
}
System::Void Project3::MyForm::button20_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text += "tg";
}
System::Void Project3::MyForm::button19_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text += "cos";
}
System::Void Project3::MyForm::button18_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text += "sin";
}
System::Void Project3::MyForm::button23_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text += "(";
}
System::Void Project3::MyForm::button24_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text += ")";
}
System::Void Project3::MyForm::button17_Click(System::Object^ sender, System::EventArgs^ e){
	this->textBox1->Clear();
}

System::Void Project3::MyForm::diagrammToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e){
	GraphicsForm^ frm = gcnew GraphicsForm();
	frm->Show();
}
