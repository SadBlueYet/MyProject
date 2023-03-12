#include "GraphicsForm.h"
#include "graphicsFoonctions.h"
#include <iostream>
#include <cmath>
#include <string>
System::Void Project3::GraphicsForm::GraphicsForm_Load(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void Project3::GraphicsForm::chart1_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void Project3::GraphicsForm::button1_Click(System::Object^ sender, System::EventArgs^ e) {
    //this->chart1->Series[0]->Points->Clear();
    //this->chart1->Series[2]->Points->AddXY(-10, 1);
    //this->chart1->Series[2]->Points->AddXY(10, 1);
	this->textBox1->Text += "&";
	String^ buf = textBox1->Text;
	std::string buffer, vale;
	std::pair<double, double> value;
	int counter = 0;
	while (buf[counter] != '&') {
		buffer += buf[counter];
		counter++;
	}
	for (int i = 0; i < buffer.length(); i++) {
		if (buffer[i] == 'S' || buffer[i] == 's') {
			value = sinGraph(buffer);
			break;
		}
	}
	for (double x = -value.first; x <= 2 * Math::PI; x += 0.1)
	{
		this->chart1->Series[1]->Points->AddXY(x, Math::Sin(x));
	}
	this->chart1->Series[2]->Points->AddXY(-value.second * 2, value.second);
	this->chart1->Series[2]->Points->AddXY(value.second * 2, value.second);
}
