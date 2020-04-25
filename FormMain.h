#pragma once

namespace Form1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	//I added this
	using namespace MySql::Data::MySqlClient;


	/// <summary>
	/// Summary for FormMain
	/// </summary>
	public ref class FormMain : public System::Windows::Forms::Form
	{
	public:
		FormMain(void)
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
		~FormMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label1;


	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::BindingSource^  bindingSource1;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(-1, 1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1110, 107);
			this->panel1->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(428, 35);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(232, 32);
			this->label3->TabIndex = 1;
			this->label3->Text = L"C++ DATA BASE";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(889, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(188, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"SUPERPOLY";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Location = System::Drawing::Point(-1, 107);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(192, 372);
			this->panel3->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Location = System::Drawing::Point(13, 258);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(167, 20);
			this->label6->TabIndex = 4;
			this->label6->Text = L"OTHER PRODUCTS";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Location = System::Drawing::Point(13, 128);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(150, 20);
			this->label5->TabIndex = 3;
			this->label5->Text = L"MANAGER LOGIN";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(56, 64);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 20);
			this->label4->TabIndex = 2;
			this->label4->Text = L"LOGIN";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label7->Location = System::Drawing::Point(245, 171);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(103, 20);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Identification";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label8->Location = System::Drawing::Point(245, 235);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(53, 20);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Name";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label9->Location = System::Drawing::Point(247, 298);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(51, 20);
			this->label9->TabIndex = 7;
			this->label9->Text = L"Email";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label10->Location = System::Drawing::Point(245, 365);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(119, 20);
			this->label10->TabIndex = 8;
			this->label10->Text = L"Phone Contact";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(361, 168);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(159, 30);
			this->textBox1->TabIndex = 9;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(361, 228);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(159, 30);
			this->textBox2->TabIndex = 10;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(361, 288);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(159, 30);
			this->textBox3->TabIndex = 11;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(361, 355);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(159, 30);
			this->textBox4->TabIndex = 12;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(547, 168);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 29);
			this->button1->TabIndex = 13;
			this->button1->Text = L"DataBase";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FormMain::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(547, 229);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(116, 29);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Input ";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &FormMain::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(547, 288);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(116, 29);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Update";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &FormMain::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(547, 355);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(116, 29);
			this->button4->TabIndex = 16;
			this->button4->Text = L"Erase";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &FormMain::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button5->Location = System::Drawing::Point(497, 419);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(166, 29);
			this->button5->TabIndex = 17;
			this->button5->Text = L"Organize Data Base";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &FormMain::button5_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(669, 168);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(428, 280);
			this->dataGridView1->TabIndex = 18;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label2->Location = System::Drawing::Point(428, 32);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(261, 32);
			this->label2->TabIndex = 1;
			this->label2->Text = L"SUPERPOLY.COM";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(-1, 477);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1110, 107);
			this->panel2->TabIndex = 1;
			// 
			// FormMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1109, 577);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"FormMain";
			this->Text = L"FormMain";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//button Insert
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
	{

		//MessageBox::Show("Input new component in the Data Base");
		//connect with phpmyadmin in XAMPP, User Id Uid is root, Pwd means password which is nothin in my case.
		try
		{


			String^ constr = "Server=127.0.0.1; Uid = root; Pwd=;Database= visualcppdb_tutorial";
			MySqlConnection^ con = gcnew MySqlConnection(constr);

			int id = Int32::Parse(textBox1->Text);
			//MessageBox::Show("ID:"+id);

			String^ name = textBox2->Text;
			String^ email = textBox3->Text;
			String^ contact = textBox4->Text;

			MySqlCommand^ cmd = gcnew MySqlCommand("insert into userinfotbl values (" + id + ",'" + name + "','" + email + "','" + contact + "')", con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			MessageBox::Show("Your information has been saved:" + id);
		}

		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);


		}
	}

	//Button to see the complete DataBase in the program
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
{

	try
	{
		int id = Int32::Parse(textBox1->Text);
		String^ constr = "Server=127.0.0.1; Uid = root; Pwd=;Database= visualcppdb_tutorial";
		MySqlConnection^ con = gcnew MySqlConnection(constr);

		//query
		MySqlCommand^ cmd = gcnew MySqlCommand("select * from userinfotbl WHERE id=" + id + "", con);
		con->Open();
		MySqlDataReader^ dr = cmd->ExecuteReader();
		while (dr->Read())
		{
			//GetString 0,1,2,3 Identification Id, does not need it, the 1 is the name, 2 the email, 3 is the contact
			textBox2->Text = dr->GetString(1);
			textBox3->Text = dr->GetString(2);
			textBox4->Text = dr->GetString(3);

		}

		con->Close();
	}

	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);


	}


}

		//button to organize the data base
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
{

	String^ constr = "Server=127.0.0.1; Uid = root; Pwd=;Database= visualcppdb_tutorial";
	MySqlConnection^ con = gcnew MySqlConnection(constr);

	//quejy
	MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("select * from userinfotbl", con);
	DataTable^ dt = gcnew DataTable();
	sda->Fill(dt);

	bindingSource1->DataSource = dt;
	dataGridView1->DataSource = bindingSource1;

}

		 //Update button
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
{

	String^ constr = "Server=127.0.0.1; Uid = root; Pwd=;Database= visualcppdb_tutorial";
	MySqlConnection^ con = gcnew MySqlConnection(constr);
	int id = Int32::Parse(textBox1->Text);
	String^ name = textBox2->Text;
	String^ email = textBox3->Text;
	String^ contact = textBox4->Text;


	MySqlCommand^ cmd = gcnew MySqlCommand("update userinfotbl set name='" + name + "', email='" + email + "',contact='" + contact + "' WHERE id="+id+"", con);
	con->Open();
	MySqlDataReader^ dr = cmd->ExecuteReader();
	MessageBox::Show("The information of the user has been updated");
	con->Close();
}
		 //Erase button
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
{
	String^ constr = "Server=127.0.0.1; Uid = root; Pwd=;Database= visualcppdb_tutorial";
	MySqlConnection^ con = gcnew MySqlConnection(constr);

	int id = Int32::Parse(textBox1->Text);
	MySqlCommand^ cmd = gcnew MySqlCommand("delete from userinfotbl WHERE id=" + id + "", con);
	con->Open();

	MySqlDataReader^ dr = cmd->ExecuteReader();
	MessageBox::Show("The user information has been erased");
	con->Clone();

}
};
}
