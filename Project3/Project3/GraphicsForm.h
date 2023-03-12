#pragma once

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ GraphicsForm
	/// </summary>
	public ref class GraphicsForm : public System::Windows::Forms::Form
	{
	public:
		GraphicsForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~GraphicsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::IO::Ports::SerialPort^ serialPort1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// chart1
			// 
			this->chart1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->chart1->BorderlineColor = System::Drawing::Color::WhiteSmoke;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(8, 19);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::None;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->LabelBackColor = System::Drawing::Color::White;
			series1->LabelBorderColor = System::Drawing::Color::White;
			series1->Legend = L"Legend1";
			series1->LegendText = L"Cos";
			series1->Name = L"Series1";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Legend = L"Legend1";
			series2->LegendText = L"Sin";
			series2->Name = L"Series2";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Legend = L"Legend1";
			series3->Name = L"Series3";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(446, 300);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &GraphicsForm::chart1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->chart1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(460, 325);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Text";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(517, 31);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(162, 29);
			this->textBox1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(685, 31);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 29);
			this->button1->TabIndex = 3;
			this->button1->Text = L"build";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GraphicsForm::button1_Click);
			// 
			// GraphicsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(791, 368);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->groupBox1);
			this->MaximizeBox = false;
			this->Name = L"GraphicsForm";
			this->ShowIcon = false;
			this->Text = L"GraphicsForm";
			this->Load += gcnew System::EventHandler(this, &GraphicsForm::GraphicsForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void GraphicsForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);

};
}
