#pragma once

namespace Diskret1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FormLaba2
	/// </summary>
	public ref class FormLaba2 : public System::Windows::Forms::Form
	{
	public:
		FormLaba2(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~FormLaba2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBoxN;

	private: System::Windows::Forms::TextBox^ textBoxM;

	private: System::Windows::Forms::Label^ label2;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormLaba2::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxN = (gcnew System::Windows::Forms::TextBox());
			this->textBoxM = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(128, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(78, 38);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Open txt for\r\nwrite P";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FormLaba2::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(128, 57);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(78, 38);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Open txt for\r\nwrite Q";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FormLaba2::button2_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"1) M=P^Q", L"2) M=P&Q", L"3) M=P\\Q", L"4) M=Q\\P",
					L"5) M=NO(P)", L"6) M=NO(Q)", L"7) M=P^-1", L"8) M=Q^-1", L"9) M=PxQ", L"10 )M=PΔQ"
			});
			this->listBox1->Location = System::Drawing::Point(12, 138);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(219, 134);
			this->listBox1->TabIndex = 2;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &FormLaba2::listBox1_SelectedIndexChanged);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(65, 289);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 52);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Calculate";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &FormLaba2::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"NxN:=";
			// 
			// textBoxN
			// 
			this->textBoxN->Location = System::Drawing::Point(56, 23);
			this->textBoxN->Name = L"textBoxN";
			this->textBoxN->Size = System::Drawing::Size(66, 20);
			this->textBoxN->TabIndex = 5;
			this->textBoxN->TextChanged += gcnew System::EventHandler(this, &FormLaba2::textBox1_TextChanged);
			// 
			// textBoxM
			// 
			this->textBoxM->Location = System::Drawing::Point(56, 67);
			this->textBoxM->Name = L"textBoxM";
			this->textBoxM->Size = System::Drawing::Size(66, 20);
			this->textBoxM->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"MxM:=";
			// 
			// FormLaba2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(245, 369);
			this->Controls->Add(this->textBoxM);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxN);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"FormLaba2";
			this->Text = L"Laba 5";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		ifstream fileP("fileP.txt"); ifstream fileQ("fileQ.txt");
		String^ sN = textBoxN->Text; int n = Convert::ToInt16(sN);
		String^ sM = textBoxN->Text; int m = Convert::ToInt16(sM);
		if (sN == "") {
			MessageBox::Show("Нет данных", "Ошибка");
			return;
		}
		if (sM == "") {
			MessageBox::Show("Нет данных", "Ошибка");
			return;
		}
		 int** p;  p = new  int* [n];
		 for (int i = 0; i < n; i++) {
			 *(p+i) = new int[n];
		 }
		 for (int i = 0; i < n; i++) {
			 for (int j = 0; j < n; j++) {
				 fileP >> p[i][j];
			 }
		 }
		 fileP.close(); fileQ.close();
		 ofstream filePROV("filePROV.txt");
		 for (int i = 0; i < n; i++) {
			 for (int j = 0; j < n; j++) {
				 filePROV << p[i][j];
			 }
			 filePROV << endl;
		 }
		 Process::Start("notepad.exe", "filePROV.txt");
		
		if (listBox1->SelectedIndex == 0) {
			/*for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
					if (((a1[0][i] % 2) == 0) || ((a1[1][j] % 2) == 0)) {
						axb << "<"; axb << a1[0][i]; axb << ","; axb << a1[1][j];	axb << ">";	axb << ",";
						bin << "1"; bin << " ";
					}
					else {
						bin << "0"; bin << " ";
					}
				}bin << endl;
			}
			axb.close(); bin.close();
			Process::Start("notepad.exe", "PAxB.txt");

		}
		if (listBox1->SelectedIndex == 1) {*/


		}
		if (listBox1->SelectedIndex == 2) {



		}
		if (listBox1->SelectedIndex == 3) {


		}
		if (listBox1->SelectedIndex == 4) {


		}

		if (listBox1->SelectedIndex == 5) {

		}
		if (listBox1->SelectedIndex == 6) {

		}
		if (listBox1->SelectedIndex == 7) {

		}
		if (listBox1->SelectedIndex == 8) {

		}
		if (listBox1->SelectedIndex == 9) {

		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	ofstream fileQ("fileQ.txt");
	fileQ.close();
	Process::Start("notepad.exe", "fileQ.txt");
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	ofstream fileP("fileP.txt");
	fileP.close();
	Process::Start("notepad.exe", "fileP.txt");
}
};
}
