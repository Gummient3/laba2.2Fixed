#pragma once
#include <string>
namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using std::string;

	/// <summary>
	/// Zusammenfassung f?r Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{

		Double value = 0;
		String^ operation = "";
	private: System::Windows::Forms::Label^ equation;
		   bool operation_pressed = false;
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzuf?gen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::TextBox^ result;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;


	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode f?r die Designerunterst?tzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor ge?ndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->result = (gcnew System::Windows::Forms::TextBox());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->equation = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(11, 52);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(45, 45);
			this->button1->TabIndex = 0;
			this->button1->Text = L"7";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(62, 52);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(45, 45);
			this->button2->TabIndex = 1;
			this->button2->Text = L"8";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(113, 52);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(45, 45);
			this->button3->TabIndex = 2;
			this->button3->Text = L"9";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(11, 103);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(45, 45);
			this->button4->TabIndex = 3;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(62, 103);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(45, 45);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(113, 103);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(45, 45);
			this->button6->TabIndex = 5;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(11, 154);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(45, 45);
			this->button7->TabIndex = 6;
			this->button7->Text = L"1";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(62, 154);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(45, 45);
			this->button8->TabIndex = 7;
			this->button8->Text = L"2";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(113, 154);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(45, 45);
			this->button9->TabIndex = 8;
			this->button9->Text = L"3";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(164, 52);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(45, 45);
			this->button10->TabIndex = 9;
			this->button10->Text = L"/";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::operator_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(266, 52);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(45, 45);
			this->button11->TabIndex = 10;
			this->button11->Text = L"CE";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(164, 103);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(45, 45);
			this->button12->TabIndex = 11;
			this->button12->Text = L"*";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::operator_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(266, 103);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(45, 45);
			this->button13->TabIndex = 12;
			this->button13->Text = L"C";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(164, 154);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(45, 45);
			this->button14->TabIndex = 13;
			this->button14->Text = L"-";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::operator_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(11, 205);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(96, 45);
			this->button16->TabIndex = 15;
			this->button16->Text = L"0";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::button_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(113, 205);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(45, 45);
			this->button17->TabIndex = 16;
			this->button17->Text = L",";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::button_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(164, 205);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(45, 45);
			this->button18->TabIndex = 17;
			this->button18->Text = L"+";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Form1::operator_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(266, 154);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(45, 96);
			this->button19->TabIndex = 18;
			this->button19->Text = L"=";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &Form1::button19_Click);
			// 
			// result
			// 
			this->result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result->Location = System::Drawing::Point(13, 13);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(298, 31);
			this->result->TabIndex = 19;
			this->result->Text = L"0";
			this->result->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->result->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(215, 205);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(45, 45);
			this->button15->TabIndex = 23;
			this->button15->Text = L"!";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(215, 154);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(45, 45);
			this->button20->TabIndex = 22;
			this->button20->Text = L"!";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(215, 103);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(45, 45);
			this->button21->TabIndex = 21;
			this->button21->Text = L"%";
			this->button21->UseVisualStyleBackColor = true;
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(215, 52);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(45, 45);
			this->button22->TabIndex = 20;
			this->button22->Text = L"sqrt";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &Form1::operator_Click);
			// 
			// equation
			// 
			this->equation->AutoSize = true;
			this->equation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->equation->ForeColor = System::Drawing::Color::LightSlateGray;
			this->equation->Location = System::Drawing::Point(13, 13);
			this->equation->Name = L"equation";
			this->equation->Size = System::Drawing::Size(0, 20);
			this->equation->TabIndex = 24;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(321, 256);
			this->Controls->Add(this->equation);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->result);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button_Click(System::Object^ sender, System::EventArgs^ e) { // "1" 
		if (result->Text == "0" || operation_pressed) {
			result->Clear();
		}
		operation_pressed = false;
		Button^ b = (Button^)sender;
		result->Text = result->Text + b->Text;



}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) { // CE

	result->Text = "0";
}
private: System::Void operator_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ b = (Button^)sender;
	operation = b->Text;
	value = System::Convert::ToDouble(result->Text);
	operation_pressed = true;
	equation->Text = value + " " + operation;
	
	
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) { // =

	
	equation->Text = "";
	

	if (operation == "+") {
		result->Text = (value + System::Convert::ToDouble(result->Text)).ToString();
		
	}
	else if (operation == "-") {
		result->Text = (value - System::Convert::ToDouble(result->Text)).ToString();

	}
	else if (operation == "*") {
		result->Text = (value * System::Convert::ToDouble(result->Text)).ToString();

	}
	else if (operation == "/") {
		result->Text = (value / System::Convert::ToDouble(result->Text)).ToString();

	}
	
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) { // C

	result->Text = "0";
	value = 0;
}

private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
