#pragma once
#include "ServiceCommande.h"
#include "ServiceArticle.h"
#include "ServiceClient.h"
#include "EditPayementForm.h"

namespace ProjetPOOGroupe2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de EditCommandeForm
	/// </summary>
	public ref class EditCommandeForm : public System::Windows::Forms::Form
	{
	public:
		EditCommandeForm(bool^ e)
		{
			this->editMode = e;
			this->serviceCommande = gcnew ServiceCommande();
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
		EditCommandeForm(bool^ e, Commande^ c)
		{
			this->editMode = e;
			this->commandeToEdit = c;
			this->serviceCommande = gcnew ServiceCommande();
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~EditCommandeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;


	private: bool^ editMode;
	private: Commande^ commandeToEdit;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label8;


	private: ServiceCommande^ serviceCommande;
	private: DataSet^ dataset = gcnew DataSet();
	private: array<DataRow^>^ articles;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ numClient;
	private: System::Windows::Forms::Button^ saveButton;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ lblTotalHT;
	private: System::Windows::Forms::Label^ lblTotalTva;


	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ lbltotalttc;


	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::ComboBox^ cityComboBox;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ cpTxtBox;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ streetTxtBox;
	private: System::Windows::Forms::TextBox^ numTxtBox;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ prenomClient;
	private: System::Windows::Forms::TextBox^ nomClient;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::CheckBox^ checkBox1;



	private: System::Windows::Forms::ComboBox^ villeLivraison;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ cpLivraison;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ rueLivraison;

	private: System::Windows::Forms::TextBox^ numLivraison;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::DateTimePicker^ dateFacturation;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::DateTimePicker^ dateLivraison;









private: System::Windows::Forms::TextBox^ reference;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Référence;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nom;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Quantité;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ pu_ht;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ remise;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ total_ht;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ tva;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Montant_TVA;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Total_TTC;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ id_article;
private: System::Windows::Forms::DataGridView^ dataGridView2;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EditCommandeForm::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->prenomClient = (gcnew System::Windows::Forms::TextBox());
			this->nomClient = (gcnew System::Windows::Forms::TextBox());
			this->cityComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cpTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->streetTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->numTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->numClient = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Référence = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Quantité = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pu_ht = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->remise = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->total_ht = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tva = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Montant_TVA = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Total_TTC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->id_article = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->lblTotalHT = (gcnew System::Windows::Forms::Label());
			this->lblTotalTva = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->lbltotalttc = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->villeLivraison = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->cpLivraison = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->rueLivraison = (gcnew System::Windows::Forms::TextBox());
			this->numLivraison = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->dateFacturation = (gcnew System::Windows::Forms::DateTimePicker());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->dateLivraison = (gcnew System::Windows::Forms::DateTimePicker());
			this->reference = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(148, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 128);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Informations société";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 98);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(104, 17);
			this->label4->TabIndex = 4;
			this->label4->Text = L"01.42.34.56.78";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(5, 78);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 17);
			this->label3->TabIndex = 3;
			this->label3->Text = L"75000 Paris";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(147, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"56 Avenue de l\'argent";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(6, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"StonkCorp";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(130, 128);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->prenomClient);
			this->groupBox2->Controls->Add(this->nomClient);
			this->groupBox2->Controls->Add(this->cityComboBox);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->cpTxtBox);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->streetTxtBox);
			this->groupBox2->Controls->Add(this->numTxtBox);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->numClient);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Location = System::Drawing::Point(391, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(259, 208);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Adresse Facturation";
			// 
			// prenomClient
			// 
			this->prenomClient->Location = System::Drawing::Point(133, 58);
			this->prenomClient->Name = L"prenomClient";
			this->prenomClient->ReadOnly = true;
			this->prenomClient->Size = System::Drawing::Size(120, 22);
			this->prenomClient->TabIndex = 23;
			// 
			// nomClient
			// 
			this->nomClient->Location = System::Drawing::Point(12, 58);
			this->nomClient->Name = L"nomClient";
			this->nomClient->ReadOnly = true;
			this->nomClient->Size = System::Drawing::Size(115, 22);
			this->nomClient->TabIndex = 22;
			// 
			// cityComboBox
			// 
			this->cityComboBox->FormattingEnabled = true;
			this->cityComboBox->Location = System::Drawing::Point(109, 154);
			this->cityComboBox->Name = L"cityComboBox";
			this->cityComboBox->Size = System::Drawing::Size(133, 24);
			this->cityComboBox->TabIndex = 21;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(106, 134);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(42, 17);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Ville :";
			// 
			// cpTxtBox
			// 
			this->cpTxtBox->Location = System::Drawing::Point(11, 154);
			this->cpTxtBox->Name = L"cpTxtBox";
			this->cpTxtBox->Size = System::Drawing::Size(89, 22);
			this->cpTxtBox->TabIndex = 19;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(8, 134);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(92, 17);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Code Postal :";
			// 
			// streetTxtBox
			// 
			this->streetTxtBox->Location = System::Drawing::Point(57, 105);
			this->streetTxtBox->Name = L"streetTxtBox";
			this->streetTxtBox->Size = System::Drawing::Size(198, 22);
			this->streetTxtBox->TabIndex = 16;
			// 
			// numTxtBox
			// 
			this->numTxtBox->Location = System::Drawing::Point(12, 103);
			this->numTxtBox->Name = L"numTxtBox";
			this->numTxtBox->Size = System::Drawing::Size(39, 22);
			this->numTxtBox->TabIndex = 17;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(9, 83);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(68, 17);
			this->label12->TabIndex = 15;
			this->label12->Text = L"Adresse :";
			// 
			// numClient
			// 
			this->numClient->Location = System::Drawing::Point(116, 28);
			this->numClient->Name = L"numClient";
			this->numClient->Size = System::Drawing::Size(137, 22);
			this->numClient->TabIndex = 9;
			this->numClient->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &EditCommandeForm::numClient_KeyDown);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(7, 28);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(103, 17);
			this->label10->TabIndex = 5;
			this->label10->Text = L"Numéro client :";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->Référence,
					this->Nom, this->Quantité, this->pu_ht, this->remise, this->total_ht, this->tva, this->Montant_TVA, this->Total_TTC, this->id_article
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 301);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1053, 255);
			this->dataGridView1->TabIndex = 6;
			this->dataGridView1->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &EditCommandeForm::dataGridView1_CellValueChanged);
			// 
			// Référence
			// 
			this->Référence->HeaderText = L"Référence";
			this->Référence->MinimumWidth = 6;
			this->Référence->Name = L"Référence";
			this->Référence->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Référence->Width = 125;
			// 
			// Nom
			// 
			this->Nom->HeaderText = L"Nom";
			this->Nom->MinimumWidth = 6;
			this->Nom->Name = L"Nom";
			this->Nom->ReadOnly = true;
			this->Nom->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Nom->Width = 250;
			// 
			// Quantité
			// 
			this->Quantité->HeaderText = L"Quantité";
			this->Quantité->MinimumWidth = 6;
			this->Quantité->Name = L"Quantité";
			this->Quantité->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Quantité->Width = 60;
			// 
			// pu_ht
			// 
			this->pu_ht->HeaderText = L"PU HT";
			this->pu_ht->MinimumWidth = 6;
			this->pu_ht->Name = L"pu_ht";
			this->pu_ht->ReadOnly = true;
			this->pu_ht->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->pu_ht->Width = 60;
			// 
			// remise
			// 
			this->remise->HeaderText = L"Remise";
			this->remise->MinimumWidth = 6;
			this->remise->Name = L"remise";
			this->remise->Width = 125;
			// 
			// total_ht
			// 
			this->total_ht->HeaderText = L"Total HT";
			this->total_ht->MinimumWidth = 6;
			this->total_ht->Name = L"total_ht";
			this->total_ht->ReadOnly = true;
			this->total_ht->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->total_ht->Width = 60;
			// 
			// tva
			// 
			this->tva->HeaderText = L"TVA";
			this->tva->MinimumWidth = 6;
			this->tva->Name = L"tva";
			this->tva->ReadOnly = true;
			this->tva->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->tva->Width = 60;
			// 
			// Montant_TVA
			// 
			this->Montant_TVA->HeaderText = L"Montant TVA";
			this->Montant_TVA->MinimumWidth = 6;
			this->Montant_TVA->Name = L"Montant_TVA";
			this->Montant_TVA->ReadOnly = true;
			this->Montant_TVA->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Montant_TVA->Width = 60;
			// 
			// Total_TTC
			// 
			this->Total_TTC->HeaderText = L"Total TTC";
			this->Total_TTC->MinimumWidth = 6;
			this->Total_TTC->Name = L"Total_TTC";
			this->Total_TTC->ReadOnly = true;
			this->Total_TTC->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Total_TTC->Width = 60;
			// 
			// id_article
			// 
			this->id_article->HeaderText = L"id_article";
			this->id_article->MinimumWidth = 6;
			this->id_article->Name = L"id_article";
			this->id_article->Visible = false;
			this->id_article->Width = 125;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label8->Location = System::Drawing::Point(12, 153);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(109, 20);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Commande : ";
			// 
			// saveButton
			// 
			this->saveButton->Location = System::Drawing::Point(16, 598);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(259, 63);
			this->saveButton->TabIndex = 8;
			this->saveButton->Text = L"Sauvegarder";
			this->saveButton->UseVisualStyleBackColor = true;
			this->saveButton->Click += gcnew System::EventHandler(this, &EditCommandeForm::saveButton_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(834, 577);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(83, 18);
			this->label11->TabIndex = 9;
			this->label11->Text = L"Total HT :";
			// 
			// lblTotalHT
			// 
			this->lblTotalHT->AutoSize = true;
			this->lblTotalHT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTotalHT->Location = System::Drawing::Point(932, 577);
			this->lblTotalHT->Name = L"lblTotalHT";
			this->lblTotalHT->Size = System::Drawing::Size(24, 18);
			this->lblTotalHT->TabIndex = 10;
			this->lblTotalHT->Text = L"0€";
			// 
			// lblTotalTva
			// 
			this->lblTotalTva->AutoSize = true;
			this->lblTotalTva->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTotalTva->Location = System::Drawing::Point(940, 607);
			this->lblTotalTva->Name = L"lblTotalTva";
			this->lblTotalTva->Size = System::Drawing::Size(24, 18);
			this->lblTotalTva->TabIndex = 12;
			this->lblTotalTva->Text = L"0€";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(812, 607);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(105, 18);
			this->label14->TabIndex = 11;
			this->label14->Text = L"Montant TVA : ";
			// 
			// lbltotalttc
			// 
			this->lbltotalttc->AutoSize = true;
			this->lbltotalttc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Italic));
			this->lbltotalttc->Location = System::Drawing::Point(931, 637);
			this->lbltotalttc->Name = L"lbltotalttc";
			this->lbltotalttc->Size = System::Drawing::Size(30, 24);
			this->lbltotalttc->TabIndex = 14;
			this->lbltotalttc->Text = L"0€";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(803, 637);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(114, 24);
			this->label16->TabIndex = 13;
			this->label16->Text = L"Total TTC :";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->checkBox1);
			this->groupBox3->Controls->Add(this->villeLivraison);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->cpLivraison);
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->rueLivraison);
			this->groupBox3->Controls->Add(this->numLivraison);
			this->groupBox3->Controls->Add(this->label15);
			this->groupBox3->Location = System::Drawing::Point(682, 12);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(259, 208);
			this->groupBox3->TabIndex = 24;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Adresse Livraison";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(11, 27);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(186, 21);
			this->checkBox1->TabIndex = 24;
			this->checkBox1->Text = L"Identique à la facturation";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &EditCommandeForm::checkBox1_CheckedChanged);
			// 
			// villeLivraison
			// 
			this->villeLivraison->FormattingEnabled = true;
			this->villeLivraison->Location = System::Drawing::Point(109, 154);
			this->villeLivraison->Name = L"villeLivraison";
			this->villeLivraison->Size = System::Drawing::Size(133, 24);
			this->villeLivraison->TabIndex = 21;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(106, 134);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(42, 17);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Ville :";
			// 
			// cpLivraison
			// 
			this->cpLivraison->Location = System::Drawing::Point(11, 154);
			this->cpLivraison->Name = L"cpLivraison";
			this->cpLivraison->Size = System::Drawing::Size(89, 22);
			this->cpLivraison->TabIndex = 19;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(8, 134);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(92, 17);
			this->label13->TabIndex = 18;
			this->label13->Text = L"Code Postal :";
			// 
			// rueLivraison
			// 
			this->rueLivraison->Location = System::Drawing::Point(57, 105);
			this->rueLivraison->Name = L"rueLivraison";
			this->rueLivraison->Size = System::Drawing::Size(198, 22);
			this->rueLivraison->TabIndex = 16;
			// 
			// numLivraison
			// 
			this->numLivraison->Location = System::Drawing::Point(12, 103);
			this->numLivraison->Name = L"numLivraison";
			this->numLivraison->Size = System::Drawing::Size(39, 22);
			this->numLivraison->TabIndex = 17;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(9, 83);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(68, 17);
			this->label15->TabIndex = 15;
			this->label15->Text = L"Adresse :";
			// 
			// dateFacturation
			// 
			this->dateFacturation->Location = System::Drawing::Point(401, 252);
			this->dateFacturation->Name = L"dateFacturation";
			this->dateFacturation->Size = System::Drawing::Size(200, 22);
			this->dateFacturation->TabIndex = 25;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(388, 232);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(117, 17);
			this->label17->TabIndex = 24;
			this->label17->Text = L"Date facturation :";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(681, 232);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(102, 17);
			this->label18->TabIndex = 26;
			this->label18->Text = L"Date livraison :";
			// 
			// dateLivraison
			// 
			this->dateLivraison->Location = System::Drawing::Point(694, 252);
			this->dateLivraison->Name = L"dateLivraison";
			this->dateLivraison->Size = System::Drawing::Size(200, 22);
			this->dateLivraison->TabIndex = 27;
			// 
			// reference
			// 
			this->reference->Location = System::Drawing::Point(127, 153);
			this->reference->Name = L"reference";
			this->reference->Size = System::Drawing::Size(174, 22);
			this->reference->TabIndex = 28;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(281, 577);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(516, 111);
			this->dataGridView2->TabIndex = 29;
			// 
			// EditCommandeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1081, 726);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->reference);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->dateLivraison);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->dateFacturation);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->lbltotalttc);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->lblTotalTva);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->lblTotalHT);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->saveButton);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"EditCommandeForm";
			this->Text = L"Nouvelle Commande";
			this->Load += gcnew System::EventHandler(this, &EditCommandeForm::EditCommandeForm_Load);
			this->Shown += gcnew System::EventHandler(this, &EditCommandeForm::EditCommandeForm_Shown);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void EditCommandeForm_Shown(System::Object^ sender, System::EventArgs^ e) {
		ServiceClient^ serviceclient = gcnew ServiceClient();
		DataTable^ rows = serviceclient->getCities();
		cityComboBox->DataSource = rows;
		cityComboBox->DisplayMember = "Ville";

		villeLivraison->DataSource = rows;
		villeLivraison->DisplayMember = "Ville";

		if (Convert::ToBoolean(this->editMode) == true) {
			this->serviceCommande->setCommande(this->commandeToEdit);
			DataRow^ row = this->serviceCommande->getCommandeById();

			this->reference->Text = row[1]->ToString();
			this->commandeToEdit->setReference(this->reference->Text);

			DataRowCollection^ datasetArticles = this->serviceCommande->getArticlesOfCommande();

			for each (DataRow^ entry in datasetArticles) {
				int i = this->dataGridView1->Rows->Add(1);
				this->dataGridView1->Rows[i]->Cells[0]->Value = entry[4];
				this->dataGridView1->Rows[i]->Cells[2]->Value = entry[2];
				this->dataGridView1->Rows[i]->Cells[4]->Value = entry[3];
			}

			serviceclient->getClient()->setId(Convert::ToInt32(row[3]));
			DataRow^ rowClient = serviceclient->getClientById();

			this->prenomClient->Text = rowClient[2]->ToString();
			this->nomClient->Text = rowClient[1]->ToString();
			this->numClient->Text = rowClient[0]->ToString();

			DataRow^ rowAdresseLivraison = serviceclient->getAdresseById(Convert::ToInt32(row[2]));
			this->numLivraison->Text = rowAdresseLivraison[1]->ToString();
			this->rueLivraison->Text = rowAdresseLivraison[2]->ToString();		
		
			DataRow^ rowAdresseFacturation = serviceclient->getAdresseById(Convert::ToInt32(row[4]));
			this->numTxtBox->Text = rowAdresseLivraison[1]->ToString();
			this->streetTxtBox->Text = rowAdresseLivraison[2]->ToString();

			Payement^ p = gcnew Payement();
			p->setCommande(this->commandeToEdit);

			this->dataGridView2->DataSource = serviceCommande->getPayements(p);
		}
	}
	private: System::Void dataGridView1_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (e->RowIndex < 0) return;

		if (e->ColumnIndex == 0) {
			DataGridViewRow^ row = this->dataGridView1->Rows[e->RowIndex];
			ServiceArticle^ serviceArticle = gcnew ServiceArticle();
			Article^ tempArticle = gcnew Article();
			tempArticle->setReference(row->Cells[0]->Value->ToString());
			serviceArticle->setArticle(tempArticle);

			DataRowCollection^ rows = serviceArticle->obtenirInfosArticle();

			for each (DataRow^ r in rows)
			{
				row->Cells[1]->Value = r[2];
				row->Cells[2]->Value = 1;
				//row->Cells[4]->Value = 0;
				row->Cells[3]->Value = roundoff(Convert::ToSingle(r[3]), 2);
				row->Cells[5]->Value = roundoff(Convert::ToSingle(r[3]), 2);
				row->Cells[6]->Value = r[5];

				row->Cells[7]->Value = roundoff((Convert::ToSingle(row->Cells[5]->Value) * Convert::ToSingle(row->Cells[6]->Value)) / 100, 2);
				row->Cells[8]->Value = roundoff(Convert::ToSingle(row->Cells[5]->Value) + Convert::ToSingle(row->Cells[7]->Value), 2);
				row->Cells[9]->Value = r[0];
			}
			
		}
		if (e->ColumnIndex == 2 || e->ColumnIndex == 4) {
			DataGridViewRow^ row = this->dataGridView1->CurrentRow;		

			int quantite = Convert::ToInt32(row->Cells[2]->Value);
			float pu = Convert::ToSingle(row->Cells[3]->Value);
			float coeffRemise = 1 - (Convert::ToSingle(row->Cells[4]->Value) / 100);
			float coeffTVA =  (Convert::ToSingle(row->Cells[6]->Value) / 100);

			row->Cells[5]->Value = roundoff(quantite * pu * coeffRemise, 2);			
			row->Cells[7]->Value = roundoff(Convert::ToSingle(row->Cells[5]->Value) * coeffTVA, 2);
			row->Cells[8]->Value = roundoff(Convert::ToSingle(row->Cells[5]->Value) + Convert::ToSingle(row->Cells[7]->Value), 2);
		}

		DataGridViewRowCollection^ rows = this->dataGridView1->Rows;
		float totalHt = 0;
		float totalTVA = 0;
		for each (DataGridViewRow^ row in rows)
		{
			totalHt += Convert::ToSingle(row->Cells[5]->Value);
			totalTVA += Convert::ToSingle(row->Cells[7]->Value);
		}
		this->lblTotalHT->Text = Convert::ToString(totalHt) + "€";
		this->lblTotalTva->Text = Convert::ToString(totalTVA) + "€";
		this->lbltotalttc->Text = Convert::ToString(totalTVA + totalHt) + "€";
	}

	float roundoff(float value, unsigned char prec)
	{
		float pow_10 = pow(10.0f, (float)prec);
		return round(value * pow_10) / pow_10;
	}
	private: System::Void numClient_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter || e->KeyCode == Keys::Tab) {
			ServiceClient^ serviceClient = gcnew ServiceClient();
			Client^ tempClient = gcnew Client();
			tempClient->setId(Convert::ToInt32(this->numClient->Text));
			serviceClient->setClient(tempClient);

			serviceClient->getAllAboutClient();

			this->nomClient->Text = serviceClient->getClient()->getNom();
			this->prenomClient->Text = serviceClient->getClient()->getPrenom();
			this->numTxtBox->Text = serviceClient->getClient()->getAdresse()->getNumeroRue();
			this->streetTxtBox->Text = serviceClient->getClient()->getAdresse()->getRue();
			this->cpTxtBox->Text = serviceClient->getClient()->getAdresse()->getVille()->getCodePostal();
			this->cityComboBox->Text = serviceClient->getClient()->getAdresse()->getVille()->getVille();
		}
	}
	private: System::Void saveButton_Click(System::Object^ sender, System::EventArgs^ e) {
		ServiceCommande^ serviceCommande = gcnew ServiceCommande();

		Client^ clientCommande = gcnew Client();
		clientCommande->setId(Convert::ToInt32(this->numClient->Text));
		clientCommande->setNom(this->nomClient->Text);
		clientCommande->setPrenom(this->prenomClient->Text);

		Ville^ villeFacturation = gcnew Ville(Convert::ToInt32(((DataRowView^)this->cityComboBox->SelectedItem)->Row[0]), this->cpTxtBox->Text, this->cityComboBox->Text);
		Adresse^ adresseFacturation = gcnew Adresse(this->numClient->Text, this->streetTxtBox->Text, villeFacturation);
		
		int^ tempId = this->serviceCommande->ajouterAdresse(adresseFacturation);
		adresseFacturation->setId(tempId);

		Ville^ villeLivraison = gcnew Ville(Convert::ToInt32(((DataRowView^)this->villeLivraison->SelectedItem)->Row[0]) ,this->cpLivraison->Text, this->villeLivraison->Text);
		Adresse^ adresseLivraison = gcnew Adresse(this->numLivraison->Text, this->rueLivraison->Text, villeLivraison);

		tempId = this->serviceCommande->ajouterAdresse(adresseLivraison);
		adresseLivraison->setId(tempId);

		Date^ dateFacturation = gcnew Date(this->dateFacturation->Value);
		Date^ dateLivraison = gcnew Date(this->dateLivraison->Value);

		if (dateFacturation->getSqlDate() == dateLivraison->getSqlDate()) {
			int^ id = this->serviceCommande->ajouterDate(dateLivraison);
			dateFacturation->setIdDate(id);
			dateLivraison->setIdDate(id);
		}
		else {
			int^ id = this->serviceCommande->ajouterDate(dateFacturation);
			dateFacturation->setIdDate(id);
			id = this->serviceCommande->ajouterDate(dateLivraison);
			dateLivraison->setIdDate(id);
		}

		int^ i = serviceCommande->getLastId();
		String^ reference = clientCommande->getPrenom()->Substring(0, 2)->ToUpper() + clientCommande->getNom()->Substring(0, 2)->ToUpper() + dateFacturation->getDate()->ToString("yyyy") + adresseLivraison->getVille()->getVille()->Substring(0, 3)->ToUpper() + i->ToString();

		Commande^ commande = gcnew Commande();
		commande->setReference(reference);
		commande->setDateCommande(dateFacturation);
		commande->setDateLivraison(dateLivraison);
		commande->setClient(clientCommande);
		commande->setAdresseFacturation(adresseFacturation);
		commande->setAdresseLivraison(adresseLivraison);
		
		int^ id = this->serviceCommande->ajouterCommande(commande);
		commande->setIdCommande(id);

		serviceCommande->setCommande(commande);		

		for each (DataGridViewRow^ article in dataGridView1->Rows)
		{
			try
			{
				this->serviceCommande->addArticle(article);
			}
			catch (const Exception^)
			{

			}
		}

		EditPayementForm^ f = gcnew EditPayementForm(Convert::ToSingle(this->lbltotalttc->Text->Substring(0,this->lbltotalttc->Text->Length - 2)), commande->getIdCommande());
		f->ShowDialog();
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->checkBox1->Checked) {
			this->numLivraison->Text = this->numTxtBox->Text;
			this->rueLivraison->Text = this->streetTxtBox->Text;
			this->cpLivraison->Text = this->cpTxtBox->Text;

			this->numLivraison->ReadOnly = true;
			this->rueLivraison->ReadOnly = true;
			this->cpLivraison->ReadOnly = true;
			this->villeLivraison->DataSource = this->cityComboBox->DataSource;
			this->villeLivraison->DisplayMember = this->cityComboBox->DisplayMember;
		}
		else {
			this->numLivraison->Text = "";
			this->rueLivraison->Text = "";
			this->cpLivraison->Text = "";

			this->numLivraison->ReadOnly = false;
			this->rueLivraison->ReadOnly = false;
			this->cpLivraison->ReadOnly = false;
		}
	}


	private: System::Void EditCommandeForm_Load(System::Object^ sender, System::EventArgs^ e) {
		if (Convert::ToBoolean(this->editMode) == true) {
			this->checkBox1->Enabled = true;
			this->dataGridView2->Visible = true;
		}
		else {
			this->dataGridView2->Visible = false;
		}
	}
};
}
