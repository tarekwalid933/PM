#pragma once

namespace PM {

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
	private: System::Windows::Forms::Panel^ pn_titlebar;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ pn_navbar;
	private: System::Windows::Forms::Panel^ pn_container;


	private: System::Windows::Forms::Button^ btn3title;

	private: System::Windows::Forms::Button^ btn2title;

	private: System::Windows::Forms::Button^ btn1title;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Button^ btn_home;
	private: System::Windows::Forms::Button^ btn_add;
	private: System::Windows::Forms::Button^ btn_edit;
	private: System::Windows::Forms::Button^ btn_delete;
	private: System::Windows::Forms::Button^ btn_search;
	private: System::Windows::Forms::Button^ btn_export;
	private: System::Windows::Forms::Button^ btn_purchase;














	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnuser;

	private: System::Windows::Forms::Button^ btnlog;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ pn_home;
	private: System::Windows::Forms::Panel^ pn_add;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ btn_cancel;

	private: System::Windows::Forms::Button^ btn_save;
	private: System::Windows::Forms::Panel^ pn_edit;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;

	private: System::Windows::Forms::Panel^ pn_delete;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker3;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Panel^ pn_search;
private: System::Windows::Forms::Label^ label19;

private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::DateTimePicker^ dateTimePicker4;
private: System::Windows::Forms::TextBox^ textBox10;
private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::TextBox^ textBox12;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Panel^ pn_export;

private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::DataGridView^ dataGridView1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
private: System::Windows::Forms::Panel^ pn_purchase;

private: System::Windows::Forms::DataGridView^ dataGridView2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::TextBox^ textBox15;
private: System::Windows::Forms::TextBox^ textBox14;
private: System::Windows::Forms::Button^ button13;

private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
private: System::Windows::Forms::TextBox^ textBox16;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Panel^ pn_login;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::Button^ button15;
private: System::Windows::Forms::TextBox^ ps;

private: System::Windows::Forms::TextBox^ username;





private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Panel^ pn_register;
private: System::Windows::Forms::TextBox^ ps2r;


private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Button^ button16;
private: System::Windows::Forms::Button^ button17;
private: System::Windows::Forms::TextBox^ ps1r;

private: System::Windows::Forms::TextBox^ usernamer;

private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Label^ label37;

























































	protected:




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
			this->pn_titlebar = (gcnew System::Windows::Forms::Panel());
			this->btnlog = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn3title = (gcnew System::Windows::Forms::Button());
			this->btn2title = (gcnew System::Windows::Forms::Button());
			this->btn1title = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->pn_navbar = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->btn_home = (gcnew System::Windows::Forms::Button());
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->btn_edit = (gcnew System::Windows::Forms::Button());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->btn_search = (gcnew System::Windows::Forms::Button());
			this->btn_export = (gcnew System::Windows::Forms::Button());
			this->btn_purchase = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnuser = (gcnew System::Windows::Forms::Button());
			this->pn_container = (gcnew System::Windows::Forms::Panel());
			this->pn_home = (gcnew System::Windows::Forms::Panel());
			this->pn_login = (gcnew System::Windows::Forms::Panel());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->ps = (gcnew System::Windows::Forms::TextBox());
			this->username = (gcnew System::Windows::Forms::TextBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->pn_register = (gcnew System::Windows::Forms::Panel());
			this->ps2r = (gcnew System::Windows::Forms::TextBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->ps1r = (gcnew System::Windows::Forms::TextBox());
			this->usernamer = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->pn_purchase = (gcnew System::Windows::Forms::Panel());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->pn_add = (gcnew System::Windows::Forms::Panel());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->btn_cancel = (gcnew System::Windows::Forms::Button());
			this->btn_save = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pn_search = (gcnew System::Windows::Forms::Panel());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker4 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->pn_export = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->pn_delete = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->pn_edit = (gcnew System::Windows::Forms::Panel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pn_titlebar->SuspendLayout();
			this->panel2->SuspendLayout();
			this->pn_navbar->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->pn_container->SuspendLayout();
			this->pn_login->SuspendLayout();
			this->pn_register->SuspendLayout();
			this->pn_purchase->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->pn_add->SuspendLayout();
			this->pn_search->SuspendLayout();
			this->pn_export->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->pn_delete->SuspendLayout();
			this->pn_edit->SuspendLayout();
			this->SuspendLayout();
			// 
			// pn_titlebar
			// 
			this->pn_titlebar->Controls->Add(this->btnlog);
			this->pn_titlebar->Controls->Add(this->label1);
			this->pn_titlebar->Controls->Add(this->btn3title);
			this->pn_titlebar->Controls->Add(this->btn2title);
			this->pn_titlebar->Controls->Add(this->btn1title);
			this->pn_titlebar->Dock = System::Windows::Forms::DockStyle::Top;
			this->pn_titlebar->Location = System::Drawing::Point(0, 0);
			this->pn_titlebar->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->pn_titlebar->Name = L"pn_titlebar";
			this->pn_titlebar->Size = System::Drawing::Size(891, 43);
			this->pn_titlebar->TabIndex = 0;
			// 
			// btnlog
			// 
			this->btnlog->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnlog.BackgroundImage")));
			this->btnlog->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnlog->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnlog->Location = System::Drawing::Point(12, 5);
			this->btnlog->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->btnlog->Name = L"btnlog";
			this->btnlog->Size = System::Drawing::Size(39, 33);
			this->btnlog->TabIndex = 4;
			this->btnlog->UseVisualStyleBackColor = true;
			this->btnlog->Click += gcnew System::EventHandler(this, &MyForm::btnlog_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Lime;
			this->label1->Location = System::Drawing::Point(287, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(317, 27);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Pharmacy Management";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn3title
			// 
			this->btn3title->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btn3title->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn3title.BackgroundImage")));
			this->btn3title->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn3title->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn3title->Location = System::Drawing::Point(738, 7);
			this->btn3title->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->btn3title->Name = L"btn3title";
			this->btn3title->Size = System::Drawing::Size(39, 33);
			this->btn3title->TabIndex = 2;
			this->btn3title->UseVisualStyleBackColor = true;
			this->btn3title->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// btn2title
			// 
			this->btn2title->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btn2title->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn2title.BackgroundImage")));
			this->btn2title->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn2title->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn2title->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2title->Location = System::Drawing::Point(791, 7);
			this->btn2title->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->btn2title->Name = L"btn2title";
			this->btn2title->Size = System::Drawing::Size(39, 33);
			this->btn2title->TabIndex = 1;
			this->btn2title->UseVisualStyleBackColor = true;
			this->btn2title->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// btn1title
			// 
			this->btn1title->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btn1title->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn1title->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn1title.BackgroundImage")));
			this->btn1title->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn1title->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn1title->Location = System::Drawing::Point(844, 7);
			this->btn1title->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->btn1title->Name = L"btn1title";
			this->btn1title->Size = System::Drawing::Size(39, 33);
			this->btn1title->TabIndex = 0;
			this->btn1title->UseVisualStyleBackColor = false;
			this->btn1title->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label31);
			this->panel2->Controls->Add(this->label30);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 480);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(891, 62);
			this->panel2->TabIndex = 1;
			// 
			// label31
			// 
			this->label31->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label31->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label31->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->ForeColor = System::Drawing::Color::DarkBlue;
			this->label31->Location = System::Drawing::Point(664, 10);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(200, 35);
			this->label31->TabIndex = 8;
			this->label31->Text = L"By Code Masters";
			this->label31->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label30
			// 
			this->label30->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label30->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->ForeColor = System::Drawing::Color::DarkBlue;
			this->label30->Location = System::Drawing::Point(29, 10);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(200, 35);
			this->label30->TabIndex = 7;
			this->label30->Text = L"User name";
			this->label30->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pn_navbar
			// 
			this->pn_navbar->Controls->Add(this->flowLayoutPanel1);
			this->pn_navbar->Controls->Add(this->panel1);
			this->pn_navbar->Dock = System::Windows::Forms::DockStyle::Left;
			this->pn_navbar->Location = System::Drawing::Point(0, 43);
			this->pn_navbar->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->pn_navbar->Name = L"pn_navbar";
			this->pn_navbar->Size = System::Drawing::Size(299, 437);
			this->pn_navbar->TabIndex = 2;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"flowLayoutPanel1.BackgroundImage")));
			this->flowLayoutPanel1->Controls->Add(this->btn_home);
			this->flowLayoutPanel1->Controls->Add(this->btn_add);
			this->flowLayoutPanel1->Controls->Add(this->btn_edit);
			this->flowLayoutPanel1->Controls->Add(this->btn_delete);
			this->flowLayoutPanel1->Controls->Add(this->btn_search);
			this->flowLayoutPanel1->Controls->Add(this->btn_export);
			this->flowLayoutPanel1->Controls->Add(this->btn_purchase);
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 101);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(10);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(299, 336);
			this->flowLayoutPanel1->TabIndex = 1;
			// 
			// btn_home
			// 
			this->btn_home->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btn_home->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_home->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_home->Cursor = System::Windows::Forms::Cursors::AppStarting;
			this->btn_home->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_home->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_home->Location = System::Drawing::Point(3, 5);
			this->btn_home->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->btn_home->Name = L"btn_home";
			this->btn_home->Size = System::Drawing::Size(296, 33);
			this->btn_home->TabIndex = 3;
			this->btn_home->Text = L"Home";
			this->btn_home->UseVisualStyleBackColor = false;
			this->btn_home->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// btn_add
			// 
			this->btn_add->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btn_add->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn_add->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_add->Location = System::Drawing::Point(3, 48);
			this->btn_add->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Size = System::Drawing::Size(296, 33);
			this->btn_add->TabIndex = 4;
			this->btn_add->Text = L"Add_Inventory";
			this->btn_add->UseVisualStyleBackColor = true;
			this->btn_add->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// btn_edit
			// 
			this->btn_edit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btn_edit->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn_edit->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_edit->Location = System::Drawing::Point(3, 91);
			this->btn_edit->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->btn_edit->Name = L"btn_edit";
			this->btn_edit->Size = System::Drawing::Size(296, 33);
			this->btn_edit->TabIndex = 5;
			this->btn_edit->Text = L"Edit_Inventory";
			this->btn_edit->UseVisualStyleBackColor = true;
			this->btn_edit->Click += gcnew System::EventHandler(this, &MyForm::btn3nav_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btn_delete->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn_delete->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_delete->Location = System::Drawing::Point(3, 134);
			this->btn_delete->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(296, 33);
			this->btn_delete->TabIndex = 6;
			this->btn_delete->Text = L"Delete_Inventory";
			this->btn_delete->UseVisualStyleBackColor = true;
			this->btn_delete->Click += gcnew System::EventHandler(this, &MyForm::btn_delete_Click);
			// 
			// btn_search
			// 
			this->btn_search->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btn_search->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn_search->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_search->Location = System::Drawing::Point(3, 177);
			this->btn_search->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->btn_search->Name = L"btn_search";
			this->btn_search->Size = System::Drawing::Size(296, 33);
			this->btn_search->TabIndex = 7;
			this->btn_search->Text = L"Search_Medicines";
			this->btn_search->UseVisualStyleBackColor = true;
			this->btn_search->Click += gcnew System::EventHandler(this, &MyForm::btn_search_Click);
			// 
			// btn_export
			// 
			this->btn_export->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btn_export->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn_export->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_export->Location = System::Drawing::Point(3, 220);
			this->btn_export->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->btn_export->Name = L"btn_export";
			this->btn_export->Size = System::Drawing::Size(296, 33);
			this->btn_export->TabIndex = 8;
			this->btn_export->Text = L"Export_Data";
			this->btn_export->UseVisualStyleBackColor = true;
			this->btn_export->Click += gcnew System::EventHandler(this, &MyForm::btn6nav_Click);
			// 
			// btn_purchase
			// 
			this->btn_purchase->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btn_purchase->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn_purchase->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_purchase->Location = System::Drawing::Point(3, 263);
			this->btn_purchase->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->btn_purchase->Name = L"btn_purchase";
			this->btn_purchase->Size = System::Drawing::Size(296, 33);
			this->btn_purchase->TabIndex = 9;
			this->btn_purchase->Text = L"Purchase";
			this->btn_purchase->UseVisualStyleBackColor = true;
			this->btn_purchase->Click += gcnew System::EventHandler(this, &MyForm::btn_purchase_Click);
			// 
			// panel1
			// 
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->btnuser);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(299, 101);
			this->panel1->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DarkBlue;
			this->label3->Location = System::Drawing::Point(68, 74);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(150, 23);
			this->label3->TabIndex = 6;
			this->label3->Text = L"User name";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(112, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 15);
			this->label2->TabIndex = 5;
			this->label2->Text = L"hgwghpdi";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(83, 8);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(116, 61);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// btnuser
			// 
			this->btnuser->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnuser->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnuser.BackgroundImage")));
			this->btnuser->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnuser->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnuser->Location = System::Drawing::Point(250, 5);
			this->btnuser->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->btnuser->Name = L"btnuser";
			this->btnuser->Size = System::Drawing::Size(46, 33);
			this->btnuser->TabIndex = 3;
			this->btnuser->UseVisualStyleBackColor = true;
			this->btnuser->Click += gcnew System::EventHandler(this, &MyForm::btnuser_Click);
			// 
			// pn_container
			// 
			this->pn_container->Controls->Add(this->pn_login);
			this->pn_container->Controls->Add(this->pn_home);
			this->pn_container->Controls->Add(this->pn_register);
			this->pn_container->Controls->Add(this->pn_purchase);
			this->pn_container->Controls->Add(this->pn_add);
			this->pn_container->Controls->Add(this->pn_search);
			this->pn_container->Controls->Add(this->pn_export);
			this->pn_container->Controls->Add(this->pn_delete);
			this->pn_container->Controls->Add(this->pn_edit);
			this->pn_container->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_container->Location = System::Drawing::Point(0, 0);
			this->pn_container->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->pn_container->Name = L"pn_container";
			this->pn_container->Size = System::Drawing::Size(891, 542);
			this->pn_container->TabIndex = 3;
			this->pn_container->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pn_home_Paint);
			// 
			// pn_home
			// 
			this->pn_home->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pn_home.BackgroundImage")));
			this->pn_home->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pn_home->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pn_home->Cursor = System::Windows::Forms::Cursors::HSplit;
			this->pn_home->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_home->Location = System::Drawing::Point(0, 0);
			this->pn_home->Name = L"pn_home";
			this->pn_home->Size = System::Drawing::Size(891, 542);
			this->pn_home->TabIndex = 0;
			this->pn_home->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pn_home_Paint_1);
			// 
			// pn_login
			// 
			this->pn_login->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pn_login->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pn_login.BackgroundImage")));
			this->pn_login->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pn_login->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pn_login->Controls->Add(this->label32);
			this->pn_login->Controls->Add(this->button14);
			this->pn_login->Controls->Add(this->button15);
			this->pn_login->Controls->Add(this->ps);
			this->pn_login->Controls->Add(this->username);
			this->pn_login->Controls->Add(this->label35);
			this->pn_login->Controls->Add(this->label36);
			this->pn_login->Cursor = System::Windows::Forms::Cursors::HSplit;
			this->pn_login->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_login->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pn_login->ForeColor = System::Drawing::SystemColors::Highlight;
			this->pn_login->Location = System::Drawing::Point(0, 0);
			this->pn_login->Name = L"pn_login";
			this->pn_login->Size = System::Drawing::Size(891, 542);
			this->pn_login->TabIndex = 7;
			// 
			// label32
			// 
			this->label32->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label32->BackColor = System::Drawing::SystemColors::Highlight;
			this->label32->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->ForeColor = System::Drawing::Color::White;
			this->label32->Location = System::Drawing::Point(368, 60);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(416, 69);
			this->label32->TabIndex = 12;
			this->label32->Text = L"Welcome to Pharmacy App!\r\nPlease Login OR Register\r\n";
			this->label32->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button14
			// 
			this->button14->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button14->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(606, 276);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(120, 35);
			this->button14->TabIndex = 9;
			this->button14->Text = L"Register";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button15->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(453, 276);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(120, 35);
			this->button15->TabIndex = 8;
			this->button15->Text = L"Login";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// ps
			// 
			this->ps->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ps->BackColor = System::Drawing::SystemColors::Control;
			this->ps->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ps->Location = System::Drawing::Point(519, 204);
			this->ps->Multiline = true;
			this->ps->Name = L"ps";
			this->ps->Size = System::Drawing::Size(256, 30);
			this->ps->TabIndex = 5;
			this->ps->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->ps->TextChanged += gcnew System::EventHandler(this, &MyForm::ps_TextChanged);
			// 
			// username
			// 
			this->username->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->username->BackColor = System::Drawing::SystemColors::Control;
			this->username->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username->Location = System::Drawing::Point(519, 149);
			this->username->Multiline = true;
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(256, 30);
			this->username->TabIndex = 4;
			this->username->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->username->TextChanged += gcnew System::EventHandler(this, &MyForm::username_TextChanged);
			// 
			// label35
			// 
			this->label35->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label35->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->ForeColor = System::Drawing::Color::Blue;
			this->label35->Location = System::Drawing::Point(364, 203);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(130, 30);
			this->label35->TabIndex = 1;
			this->label35->Text = L"Password:";
			this->label35->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label36
			// 
			this->label36->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label36->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->ForeColor = System::Drawing::Color::Blue;
			this->label36->Location = System::Drawing::Point(364, 148);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(130, 30);
			this->label36->TabIndex = 0;
			this->label36->Text = L"UserName:";
			this->label36->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pn_register
			// 
			this->pn_register->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pn_register->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pn_register.BackgroundImage")));
			this->pn_register->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pn_register->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pn_register->Controls->Add(this->ps2r);
			this->pn_register->Controls->Add(this->label38);
			this->pn_register->Controls->Add(this->label33);
			this->pn_register->Controls->Add(this->button16);
			this->pn_register->Controls->Add(this->button17);
			this->pn_register->Controls->Add(this->ps1r);
			this->pn_register->Controls->Add(this->usernamer);
			this->pn_register->Controls->Add(this->label34);
			this->pn_register->Controls->Add(this->label37);
			this->pn_register->Cursor = System::Windows::Forms::Cursors::HSplit;
			this->pn_register->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_register->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pn_register->ForeColor = System::Drawing::SystemColors::Highlight;
			this->pn_register->Location = System::Drawing::Point(0, 0);
			this->pn_register->Name = L"pn_register";
			this->pn_register->Size = System::Drawing::Size(891, 542);
			this->pn_register->TabIndex = 8;
			// 
			// ps2r
			// 
			this->ps2r->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ps2r->BackColor = System::Drawing::SystemColors::Control;
			this->ps2r->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ps2r->Location = System::Drawing::Point(538, 254);
			this->ps2r->Multiline = true;
			this->ps2r->Name = L"ps2r";
			this->ps2r->Size = System::Drawing::Size(256, 30);
			this->ps2r->TabIndex = 14;
			this->ps2r->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label38
			// 
			this->label38->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label38->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->ForeColor = System::Drawing::Color::Blue;
			this->label38->Location = System::Drawing::Point(303, 254);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(204, 30);
			this->label38->TabIndex = 13;
			this->label38->Text = L"Conform Password:";
			this->label38->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label33
			// 
			this->label33->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label33->BackColor = System::Drawing::SystemColors::Highlight;
			this->label33->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->ForeColor = System::Drawing::Color::White;
			this->label33->Location = System::Drawing::Point(368, 60);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(416, 69);
			this->label33->TabIndex = 12;
			this->label33->Text = L"Welcome to Pharmacy App!\r\nPlease Login OR Register\r\n";
			this->label33->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button16
			// 
			this->button16->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button16->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(591, 302);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(120, 35);
			this->button16->TabIndex = 9;
			this->button16->Text = L"Register";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button17->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(430, 302);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(120, 35);
			this->button17->TabIndex = 8;
			this->button17->Text = L"Login";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// ps1r
			// 
			this->ps1r->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ps1r->BackColor = System::Drawing::SystemColors::Control;
			this->ps1r->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ps1r->Location = System::Drawing::Point(538, 203);
			this->ps1r->Multiline = true;
			this->ps1r->Name = L"ps1r";
			this->ps1r->Size = System::Drawing::Size(256, 30);
			this->ps1r->TabIndex = 5;
			this->ps1r->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// usernamer
			// 
			this->usernamer->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->usernamer->BackColor = System::Drawing::SystemColors::Control;
			this->usernamer->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernamer->Location = System::Drawing::Point(538, 151);
			this->usernamer->Multiline = true;
			this->usernamer->Name = L"usernamer";
			this->usernamer->Size = System::Drawing::Size(256, 30);
			this->usernamer->TabIndex = 4;
			this->usernamer->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label34
			// 
			this->label34->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label34->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->ForeColor = System::Drawing::Color::Blue;
			this->label34->Location = System::Drawing::Point(303, 203);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(204, 30);
			this->label34->TabIndex = 1;
			this->label34->Text = L"Password:";
			this->label34->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label37
			// 
			this->label37->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label37->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->ForeColor = System::Drawing::Color::Blue;
			this->label37->Location = System::Drawing::Point(303, 148);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(204, 30);
			this->label37->TabIndex = 0;
			this->label37->Text = L"UserName:";
			this->label37->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pn_purchase
			// 
			this->pn_purchase->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pn_purchase->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pn_purchase->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pn_purchase->Controls->Add(this->numericUpDown1);
			this->pn_purchase->Controls->Add(this->textBox16);
			this->pn_purchase->Controls->Add(this->textBox15);
			this->pn_purchase->Controls->Add(this->textBox14);
			this->pn_purchase->Controls->Add(this->button13);
			this->pn_purchase->Controls->Add(this->label29);
			this->pn_purchase->Controls->Add(this->label28);
			this->pn_purchase->Controls->Add(this->label27);
			this->pn_purchase->Controls->Add(this->label26);
			this->pn_purchase->Controls->Add(this->dataGridView2);
			this->pn_purchase->Controls->Add(this->label25);
			this->pn_purchase->Controls->Add(this->button11);
			this->pn_purchase->Controls->Add(this->button12);
			this->pn_purchase->Cursor = System::Windows::Forms::Cursors::HSplit;
			this->pn_purchase->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pn_purchase->ForeColor = System::Drawing::SystemColors::Highlight;
			this->pn_purchase->Location = System::Drawing::Point(8, 8);
			this->pn_purchase->Name = L"pn_purchase";
			this->pn_purchase->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->pn_purchase->Size = System::Drawing::Size(891, 542);
			this->pn_purchase->TabIndex = 6;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(492, 149);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(256, 23);
			this->numericUpDown1->TabIndex = 22;
			// 
			// textBox16
			// 
			this->textBox16->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox16->BackColor = System::Drawing::SystemColors::MenuBar;
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox16->Location = System::Drawing::Point(494, 228);
			this->textBox16->Multiline = true;
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(256, 30);
			this->textBox16->TabIndex = 21;
			this->textBox16->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox15
			// 
			this->textBox15->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox15->BackColor = System::Drawing::SystemColors::MenuBar;
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox15->Location = System::Drawing::Point(494, 185);
			this->textBox15->Multiline = true;
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(256, 30);
			this->textBox15->TabIndex = 20;
			this->textBox15->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox14
			// 
			this->textBox14->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox14->BackColor = System::Drawing::SystemColors::MenuBar;
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox14->Location = System::Drawing::Point(494, 110);
			this->textBox14->Multiline = true;
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(256, 30);
			this->textBox14->TabIndex = 19;
			this->textBox14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button13
			// 
			this->button13->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button13->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(693, 270);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(120, 35);
			this->button13->TabIndex = 18;
			this->button13->Text = L"Cancel\r\n";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// label29
			// 
			this->label29->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label29->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->ForeColor = System::Drawing::Color::Blue;
			this->label29->Location = System::Drawing::Point(364, 227);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(130, 30);
			this->label29->TabIndex = 17;
			this->label29->Text = L"Total:";
			this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label28
			// 
			this->label28->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label28->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::Color::Blue;
			this->label28->Location = System::Drawing::Point(364, 109);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(130, 30);
			this->label28->TabIndex = 16;
			this->label28->Text = L"Name item:";
			this->label28->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label27
			// 
			this->label27->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label27->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::Color::Blue;
			this->label27->Location = System::Drawing::Point(358, 144);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(130, 30);
			this->label27->TabIndex = 15;
			this->label27->Text = L"Quantity:";
			this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label26
			// 
			this->label26->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label26->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::Color::Blue;
			this->label26->Location = System::Drawing::Point(358, 184);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(130, 30);
			this->label26->TabIndex = 14;
			this->label26->Text = L"Price:";
			this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// dataGridView2
			// 
			this->dataGridView2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5
			});
			this->dataGridView2->Location = System::Drawing::Point(329, 334);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(525, 130);
			this->dataGridView2->TabIndex = 13;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"ID item";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Name item";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Quantity";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Price";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Expiry Data";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			// 
			// label25
			// 
			this->label25->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label25->BackColor = System::Drawing::SystemColors::Highlight;
			this->label25->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::Color::White;
			this->label25->Location = System::Drawing::Point(331, 62);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(525, 30);
			this->label25->TabIndex = 12;
			this->label25->Text = L"Purchase Page";
			this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button11
			// 
			this->button11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button11->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(550, 270);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(120, 35);
			this->button11->TabIndex = 9;
			this->button11->Text = L"Add to cary";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button12->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(406, 270);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(120, 35);
			this->button12->TabIndex = 8;
			this->button12->Text = L"Purchase";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// pn_add
			// 
			this->pn_add->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pn_add->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pn_add->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pn_add->Controls->Add(this->label18);
			this->pn_add->Controls->Add(this->btn_cancel);
			this->pn_add->Controls->Add(this->btn_save);
			this->pn_add->Controls->Add(this->dateTimePicker1);
			this->pn_add->Controls->Add(this->textBox3);
			this->pn_add->Controls->Add(this->textBox2);
			this->pn_add->Controls->Add(this->textBox1);
			this->pn_add->Controls->Add(this->label7);
			this->pn_add->Controls->Add(this->label6);
			this->pn_add->Controls->Add(this->label5);
			this->pn_add->Controls->Add(this->label4);
			this->pn_add->Cursor = System::Windows::Forms::Cursors::HSplit;
			this->pn_add->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_add->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pn_add->ForeColor = System::Drawing::SystemColors::Highlight;
			this->pn_add->Location = System::Drawing::Point(0, 0);
			this->pn_add->Name = L"pn_add";
			this->pn_add->Size = System::Drawing::Size(891, 542);
			this->pn_add->TabIndex = 1;
			this->pn_add->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel3_Paint);
			// 
			// label18
			// 
			this->label18->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label18->BackColor = System::Drawing::SystemColors::Highlight;
			this->label18->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(368, 60);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(416, 30);
			this->label18->TabIndex = 12;
			this->label18->Text = L"Add Inventory Page";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_cancel
			// 
			this->btn_cancel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btn_cancel->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cancel->Location = System::Drawing::Point(621, 302);
			this->btn_cancel->Name = L"btn_cancel";
			this->btn_cancel->Size = System::Drawing::Size(120, 35);
			this->btn_cancel->TabIndex = 9;
			this->btn_cancel->Text = L"Cancel\r\n";
			this->btn_cancel->UseVisualStyleBackColor = true;
			this->btn_cancel->Click += gcnew System::EventHandler(this, &MyForm::btn_cancel_Click);
			// 
			// btn_save
			// 
			this->btn_save->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btn_save->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_save->Location = System::Drawing::Point(453, 302);
			this->btn_save->Name = L"btn_save";
			this->btn_save->Size = System::Drawing::Size(120, 35);
			this->btn_save->TabIndex = 8;
			this->btn_save->Text = L"Save";
			this->btn_save->UseVisualStyleBackColor = true;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dateTimePicker1->Location = System::Drawing::Point(528, 237);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(256, 23);
			this->dateTimePicker1->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox3->BackColor = System::Drawing::SystemColors::MenuBar;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(528, 192);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(256, 30);
			this->textBox3->TabIndex = 6;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox2->BackColor = System::Drawing::SystemColors::MenuBar;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(528, 149);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(256, 30);
			this->textBox2->TabIndex = 5;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox1->BackColor = System::Drawing::SystemColors::MenuBar;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(528, 106);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(256, 30);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Blue;
			this->label7->Location = System::Drawing::Point(364, 233);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(130, 30);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Expiry data:\r\n";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Blue;
			this->label6->Location = System::Drawing::Point(364, 190);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(130, 30);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Price:";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Blue;
			this->label5->Location = System::Drawing::Point(364, 142);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(130, 30);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Quantity:";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Blue;
			this->label4->Location = System::Drawing::Point(364, 99);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(130, 30);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Name item:";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pn_search
			// 
			this->pn_search->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pn_search->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pn_search->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pn_search->Controls->Add(this->label19);
			this->pn_search->Controls->Add(this->button8);
			this->pn_search->Controls->Add(this->button9);
			this->pn_search->Controls->Add(this->dateTimePicker4);
			this->pn_search->Controls->Add(this->textBox10);
			this->pn_search->Controls->Add(this->textBox11);
			this->pn_search->Controls->Add(this->textBox12);
			this->pn_search->Controls->Add(this->label20);
			this->pn_search->Controls->Add(this->label21);
			this->pn_search->Controls->Add(this->label22);
			this->pn_search->Controls->Add(this->label23);
			this->pn_search->Cursor = System::Windows::Forms::Cursors::HSplit;
			this->pn_search->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_search->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pn_search->ForeColor = System::Drawing::SystemColors::Highlight;
			this->pn_search->Location = System::Drawing::Point(0, 0);
			this->pn_search->Name = L"pn_search";
			this->pn_search->Size = System::Drawing::Size(891, 542);
			this->pn_search->TabIndex = 4;
			// 
			// label19
			// 
			this->label19->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label19->BackColor = System::Drawing::SystemColors::Highlight;
			this->label19->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::White;
			this->label19->Location = System::Drawing::Point(368, 60);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(416, 30);
			this->label19->TabIndex = 12;
			this->label19->Text = L"Search Inventory Page";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button8
			// 
			this->button8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button8->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(621, 302);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(120, 35);
			this->button8->TabIndex = 9;
			this->button8->Text = L"Cancel\r\n";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button9->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(453, 302);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(120, 35);
			this->button9->TabIndex = 8;
			this->button9->Text = L"Search";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// dateTimePicker4
			// 
			this->dateTimePicker4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dateTimePicker4->Location = System::Drawing::Point(528, 237);
			this->dateTimePicker4->Name = L"dateTimePicker4";
			this->dateTimePicker4->Size = System::Drawing::Size(256, 23);
			this->dateTimePicker4->TabIndex = 7;
			// 
			// textBox10
			// 
			this->textBox10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox10->BackColor = System::Drawing::SystemColors::MenuBar;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(528, 192);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(256, 30);
			this->textBox10->TabIndex = 6;
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox11
			// 
			this->textBox11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox11->BackColor = System::Drawing::SystemColors::MenuBar;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->Location = System::Drawing::Point(528, 149);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(256, 30);
			this->textBox11->TabIndex = 5;
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox12
			// 
			this->textBox12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox12->BackColor = System::Drawing::SystemColors::MenuBar;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox12->Location = System::Drawing::Point(528, 106);
			this->textBox12->Multiline = true;
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(256, 30);
			this->textBox12->TabIndex = 4;
			this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label20
			// 
			this->label20->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label20->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::Blue;
			this->label20->Location = System::Drawing::Point(364, 233);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(130, 30);
			this->label20->TabIndex = 3;
			this->label20->Text = L"Expiry data:\r\n";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label21
			// 
			this->label21->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label21->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::Blue;
			this->label21->Location = System::Drawing::Point(364, 190);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(130, 30);
			this->label21->TabIndex = 2;
			this->label21->Text = L"Price:";
			this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label22
			// 
			this->label22->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label22->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::Blue;
			this->label22->Location = System::Drawing::Point(364, 142);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(130, 30);
			this->label22->TabIndex = 1;
			this->label22->Text = L"Quantity:";
			this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label23
			// 
			this->label23->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label23->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::Blue;
			this->label23->Location = System::Drawing::Point(364, 99);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(130, 30);
			this->label23->TabIndex = 0;
			this->label23->Text = L"Name item:";
			this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pn_export
			// 
			this->pn_export->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pn_export->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pn_export->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pn_export->Controls->Add(this->dataGridView1);
			this->pn_export->Controls->Add(this->label24);
			this->pn_export->Controls->Add(this->button7);
			this->pn_export->Controls->Add(this->button10);
			this->pn_export->Cursor = System::Windows::Forms::Cursors::HSplit;
			this->pn_export->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_export->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pn_export->ForeColor = System::Drawing::SystemColors::Highlight;
			this->pn_export->Location = System::Drawing::Point(0, 0);
			this->pn_export->Name = L"pn_export";
			this->pn_export->Size = System::Drawing::Size(891, 542);
			this->pn_export->TabIndex = 5;
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(329, 106);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(525, 323);
			this->dataGridView1->TabIndex = 13;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID item";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Name item";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Quantity";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Price";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Expiry Data";
			this->Column5->Name = L"Column5";
			// 
			// label24
			// 
			this->label24->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label24->BackColor = System::Drawing::SystemColors::Highlight;
			this->label24->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::Color::White;
			this->label24->Location = System::Drawing::Point(329, 60);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(525, 30);
			this->label24->TabIndex = 12;
			this->label24->Text = L"Export Data Inventory Page";
			this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button7
			// 
			this->button7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button7->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(606, 435);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(120, 35);
			this->button7->TabIndex = 9;
			this->button7->Text = L"Cancel\r\n";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button10
			// 
			this->button10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button10->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(453, 435);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(120, 35);
			this->button10->TabIndex = 8;
			this->button10->Text = L"Export";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// pn_delete
			// 
			this->pn_delete->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pn_delete->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pn_delete->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pn_delete->Controls->Add(this->label17);
			this->pn_delete->Controls->Add(this->button4);
			this->pn_delete->Controls->Add(this->button5);
			this->pn_delete->Controls->Add(this->button6);
			this->pn_delete->Controls->Add(this->dateTimePicker3);
			this->pn_delete->Controls->Add(this->textBox7);
			this->pn_delete->Controls->Add(this->textBox8);
			this->pn_delete->Controls->Add(this->textBox9);
			this->pn_delete->Controls->Add(this->label12);
			this->pn_delete->Controls->Add(this->label13);
			this->pn_delete->Controls->Add(this->label14);
			this->pn_delete->Controls->Add(this->label15);
			this->pn_delete->Cursor = System::Windows::Forms::Cursors::HSplit;
			this->pn_delete->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_delete->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pn_delete->ForeColor = System::Drawing::SystemColors::Highlight;
			this->pn_delete->Location = System::Drawing::Point(0, 0);
			this->pn_delete->Name = L"pn_delete";
			this->pn_delete->Size = System::Drawing::Size(891, 542);
			this->pn_delete->TabIndex = 3;
			// 
			// label17
			// 
			this->label17->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label17->BackColor = System::Drawing::SystemColors::Highlight;
			this->label17->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(368, 60);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(416, 30);
			this->label17->TabIndex = 12;
			this->label17->Text = L"Delete Inventory Page";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button4->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(802, 107);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(87, 30);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Search";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button5->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(621, 302);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(120, 35);
			this->button5->TabIndex = 9;
			this->button5->Text = L"Cancel\r\n";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click_1);
			// 
			// button6
			// 
			this->button6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button6->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(453, 302);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(120, 35);
			this->button6->TabIndex = 8;
			this->button6->Text = L"Delete";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// dateTimePicker3
			// 
			this->dateTimePicker3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dateTimePicker3->Location = System::Drawing::Point(528, 237);
			this->dateTimePicker3->Name = L"dateTimePicker3";
			this->dateTimePicker3->Size = System::Drawing::Size(256, 23);
			this->dateTimePicker3->TabIndex = 7;
			// 
			// textBox7
			// 
			this->textBox7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox7->BackColor = System::Drawing::SystemColors::MenuBar;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(528, 192);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(256, 30);
			this->textBox7->TabIndex = 6;
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox8
			// 
			this->textBox8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox8->BackColor = System::Drawing::SystemColors::MenuBar;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(528, 149);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(256, 30);
			this->textBox8->TabIndex = 5;
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox9
			// 
			this->textBox9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox9->BackColor = System::Drawing::SystemColors::MenuBar;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(528, 106);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(256, 30);
			this->textBox9->TabIndex = 4;
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label12->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Blue;
			this->label12->Location = System::Drawing::Point(364, 233);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(130, 30);
			this->label12->TabIndex = 3;
			this->label12->Text = L"Expiry data:\r\n";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label13
			// 
			this->label13->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label13->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Blue;
			this->label13->Location = System::Drawing::Point(364, 190);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(130, 30);
			this->label13->TabIndex = 2;
			this->label13->Text = L"Price:";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label14
			// 
			this->label14->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label14->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Blue;
			this->label14->Location = System::Drawing::Point(364, 142);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(130, 30);
			this->label14->TabIndex = 1;
			this->label14->Text = L"Quantity:";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label15
			// 
			this->label15->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label15->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::Blue;
			this->label15->Location = System::Drawing::Point(364, 99);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(130, 30);
			this->label15->TabIndex = 0;
			this->label15->Text = L"Name item:";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pn_edit
			// 
			this->pn_edit->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pn_edit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pn_edit->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pn_edit->Controls->Add(this->label16);
			this->pn_edit->Controls->Add(this->button3);
			this->pn_edit->Controls->Add(this->button1);
			this->pn_edit->Controls->Add(this->button2);
			this->pn_edit->Controls->Add(this->dateTimePicker2);
			this->pn_edit->Controls->Add(this->textBox4);
			this->pn_edit->Controls->Add(this->textBox5);
			this->pn_edit->Controls->Add(this->textBox6);
			this->pn_edit->Controls->Add(this->label8);
			this->pn_edit->Controls->Add(this->label9);
			this->pn_edit->Controls->Add(this->label10);
			this->pn_edit->Controls->Add(this->label11);
			this->pn_edit->Cursor = System::Windows::Forms::Cursors::HSplit;
			this->pn_edit->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_edit->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pn_edit->ForeColor = System::Drawing::SystemColors::Highlight;
			this->pn_edit->Location = System::Drawing::Point(0, 0);
			this->pn_edit->Name = L"pn_edit";
			this->pn_edit->Size = System::Drawing::Size(891, 542);
			this->pn_edit->TabIndex = 2;
			// 
			// label16
			// 
			this->label16->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label16->BackColor = System::Drawing::SystemColors::Highlight;
			this->label16->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(368, 60);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(416, 30);
			this->label16->TabIndex = 11;
			this->label16->Text = L"Edit Inventory Page";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label16->Click += gcnew System::EventHandler(this, &MyForm::label16_Click);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(802, 107);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(87, 30);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Search";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(621, 302);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 35);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Cancel\r\n";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(453, 302);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 35);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Edit";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dateTimePicker2->Location = System::Drawing::Point(528, 237);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(256, 23);
			this->dateTimePicker2->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox4->BackColor = System::Drawing::SystemColors::MenuBar;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(528, 192);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(256, 30);
			this->textBox4->TabIndex = 6;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox5
			// 
			this->textBox5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox5->BackColor = System::Drawing::SystemColors::MenuBar;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(528, 149);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(256, 30);
			this->textBox5->TabIndex = 5;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox6
			// 
			this->textBox6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox6->BackColor = System::Drawing::SystemColors::MenuBar;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(528, 106);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(256, 30);
			this->textBox6->TabIndex = 4;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label8->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Blue;
			this->label8->Location = System::Drawing::Point(364, 233);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(130, 30);
			this->label8->TabIndex = 3;
			this->label8->Text = L"Expiry data:\r\n";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label9->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Blue;
			this->label9->Location = System::Drawing::Point(364, 190);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(130, 30);
			this->label9->TabIndex = 2;
			this->label9->Text = L"Price:";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label10->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Blue;
			this->label10->Location = System::Drawing::Point(364, 142);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(130, 30);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Quantity:";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label11
			// 
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label11->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Blue;
			this->label11->Location = System::Drawing::Point(364, 99);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(130, 30);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Name item:";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(891, 542);
			this->Controls->Add(this->pn_navbar);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->pn_titlebar);
			this->Controls->Add(this->pn_container);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PM";
			this->pn_titlebar->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->pn_navbar->ResumeLayout(false);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->pn_container->ResumeLayout(false);
			this->pn_login->ResumeLayout(false);
			this->pn_login->PerformLayout();
			this->pn_register->ResumeLayout(false);
			this->pn_register->PerformLayout();
			this->pn_purchase->ResumeLayout(false);
			this->pn_purchase->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->pn_add->ResumeLayout(false);
			this->pn_add->PerformLayout();
			this->pn_search->ResumeLayout(false);
			this->pn_search->PerformLayout();
			this->pn_export->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->pn_delete->ResumeLayout(false);
			this->pn_delete->PerformLayout();
			this->pn_edit->ResumeLayout(false);
			this->pn_edit->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->WindowState == System::Windows::Forms::FormWindowState::Normal) {
		this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
	}
	else if (this->WindowState == System::Windows::Forms::FormWindowState::Maximized) {
		this->WindowState = System::Windows::Forms::FormWindowState::Normal;
	}



}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = System::Windows::Forms::FormWindowState::Minimized;

}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	pn_add->BringToFront();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	pn_home->BringToFront(); 
}
private: System::Void btn6nav_Click(System::Object^ sender, System::EventArgs^ e) {
	pn_export->BringToFront();

}
private: System::Void btnuser_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->pn_navbar->Width > 70) {
		this->pn_navbar->Width = 70;  // تقلص
	}
	else {
		this->pn_navbar->Width = 299; // يرجع الحجم الطبيعي
	}
}
private: System::Void btn3nav_Click(System::Object^ sender, System::EventArgs^ e) {
	pn_edit->BringToFront();
}
private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e) {
	pn_delete->BringToFront();
}
private: System::Void btn_search_Click(System::Object^ sender, System::EventArgs^ e) {
	pn_search->BringToFront();

}
private: System::Void btn_purchase_Click(System::Object^ sender, System::EventArgs^ e) {
	pn_purchase->BringToFront();

}
private: System::Void pn_register_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

private: System::Void pn_home_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pn_home_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	pn_export->Visible=false;
	pn_home->Visible = true;
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	pn_edit->Visible = false;
	pn_home->Visible = true;
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	pn_purchase->Visible = false;
	pn_home->Visible = true;
}
private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e) {
	pn_delete->Visible = false;
	pn_home->Visible = true;
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	pn_search->Visible = false;
	pn_home->Visible = true;
}
private: System::Void btn_cancel_Click(System::Object^ sender, System::EventArgs^ e) {
	pn_add->Visible = false;
	pn_home->Visible = true;
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ Username = username->Text->Trim();
	System::String^ Password = ps->Text;

	if (Username == "tarek" && Password == "123456") {
		pn_login->Visible = false;
		pn_home->Visible = true;
	}
	else {
		MessageBox::Show("username or password invalid!", "error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void username_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ps_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	pn_register->Visible=false;
	pn_login->Visible = true;
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ Username = username->Text->Trim();
	System::String^ Password = ps1r->Text;
	System::String^ ConfirmPassword = ps2r->Text;

//	if (Username == "" && Password = "" && ConfirmPassword = "") {
//		pn_register->Visible(false);
//		pn_home->Visible(true);
//	}
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	pn_login->Visible = false;
	pn_register->Visible = true;
}
private: System::Void btnlog_Click(System::Object^ sender, System::EventArgs^ e) {
	 pn_login->Visible = true;
}
};
}
