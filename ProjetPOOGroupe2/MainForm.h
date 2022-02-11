#pragma once
#include "EditClientForm.h";
#include "EditPersonnelForm.h"
#include "EditCommandeForm.h"
#include "EditArticleForm.h"
#include "ServiceStatistiques.h"

typedef DataTable ^ (*fonctionSimulation)(int^ tva1, int^ tva2, int^ tva3, double^ marge, int^ remise, int^ demarque);

System::Data::DataTable^ Simulation(int^ tva1, int^ tva2, int^ tva3, double^ marge, int^ remise, int^ demarque) {
	ServiceStatistiques^ serviceStat = gcnew ServiceStatistiques();
	return serviceStat->simulation(tva1, tva2, tva3, marge, remise, demarque);
}

namespace ProjetPOOGroupe2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::StatusStrip^ statusStrip;
	private: System::Windows::Forms::ToolStripStatusLabel^ statusLabel;
	protected:

	protected:

	private: System::Windows::Forms::TabControl^ tabView;
	private: System::Windows::Forms::TabPage^ tabClient;
	private: System::Windows::Forms::TabPage^ tabStock;
	private: System::Windows::Forms::TabPage^ tabCommandes;
	private: System::Windows::Forms::TabPage^ tabPersonnel;
	private: System::Windows::Forms::TabPage^ tabStats;
	private: System::Windows::Forms::PageSetupDialog^ pageSetupDialog1;
	private: System::Windows::Forms::MenuStrip^ commandesMenu;
	private: System::Windows::Forms::ToolStripMenuItem^ ajouterCommandesButton;
	private: System::Windows::Forms::ToolStripMenuItem^ modifierCommandesButton;
	private: System::Windows::Forms::ToolStripMenuItem^ supprimerCommandesButton;
	private: System::Windows::Forms::DataGridView^ dataGridViewClient;
	private: System::Windows::Forms::MenuStrip^ menuClient;
	private: System::Windows::Forms::ToolStripMenuItem^ rechercherClientButton;
	private: System::Windows::Forms::ToolStripMenuItem^ ajouterClientButton;
	private: System::Windows::Forms::ToolStripMenuItem^ modifierClientButton;
	private: System::Windows::Forms::ToolStripMenuItem^ supprimerClientButton;
	private: System::Windows::Forms::DataGridView^ dataGridViewStock;
	private: System::Windows::Forms::MenuStrip^ stockMenu;
	private: System::Windows::Forms::ToolStripMenuItem^ rechercherStockButton;
	private: System::Windows::Forms::ToolStripMenuItem^ ajouterStockButton;
	private: System::Windows::Forms::ToolStripMenuItem^ modifierStockButton;
	private: System::Windows::Forms::ToolStripMenuItem^ supprimerStockButton;
	private: System::Windows::Forms::DataGridView^ dataGridViewCommandes;
	private: System::Windows::Forms::ToolStripMenuItem^ rechercherCommandesButton;
	private: System::Windows::Forms::MenuStrip^ menuPersonnel;
	private: System::Windows::Forms::ToolStripMenuItem^ rechercherPersonnelButton;
	private: System::Windows::Forms::ToolStripMenuItem^ ajouterPersonnelButton;
	private: System::Windows::Forms::ToolStripMenuItem^ modifierPersonnelButton;
	private: System::Windows::Forms::ToolStripMenuItem^ supprimerPersonnelButton;
	private: System::Windows::Forms::DataGridView^ dataGridViewPersonnel;

	private: DataSet^ dataset = gcnew DataSet();
	private: Bdd^ bdd = gcnew Bdd();
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::DataGridView^ mostSold;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DataGridView^ lessSold;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ produitSousSeuil;
	private: System::Windows::Forms::TextBox^ vAchatStock;
	private: System::Windows::Forms::TextBox^ vCommerciale;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::ToolStripMenuItem^ numéroClientToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ nOmToolStripMenuItem;


private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::TextBox^ nomClient;

private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::TextBox^ numclient;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::TextBox^ refcmd;

private: System::Windows::Forms::ToolStripMenuItem^ référenceToolStripMenuItem;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::TextBox^ nameart;

private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::TextBox^ refart;

private: System::Windows::Forms::ToolStripMenuItem^ référenceToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ nomToolStripMenuItem1;



























	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->statusStrip = (gcnew System::Windows::Forms::StatusStrip());
			this->statusLabel = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->tabView = (gcnew System::Windows::Forms::TabControl());
			this->tabClient = (gcnew System::Windows::Forms::TabPage());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->nomClient = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->numclient = (gcnew System::Windows::Forms::TextBox());
			this->dataGridViewClient = (gcnew System::Windows::Forms::DataGridView());
			this->menuClient = (gcnew System::Windows::Forms::MenuStrip());
			this->rechercherClientButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->numéroClientToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nOmToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ajouterClientButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modifierClientButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->supprimerClientButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabCommandes = (gcnew System::Windows::Forms::TabPage());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->refcmd = (gcnew System::Windows::Forms::TextBox());
			this->dataGridViewCommandes = (gcnew System::Windows::Forms::DataGridView());
			this->commandesMenu = (gcnew System::Windows::Forms::MenuStrip());
			this->rechercherCommandesButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->référenceToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ajouterCommandesButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modifierCommandesButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->supprimerCommandesButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabStock = (gcnew System::Windows::Forms::TabPage());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->nameart = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->refart = (gcnew System::Windows::Forms::TextBox());
			this->dataGridViewStock = (gcnew System::Windows::Forms::DataGridView());
			this->stockMenu = (gcnew System::Windows::Forms::MenuStrip());
			this->rechercherStockButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->référenceToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nomToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ajouterStockButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modifierStockButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->supprimerStockButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabPersonnel = (gcnew System::Windows::Forms::TabPage());
			this->dataGridViewPersonnel = (gcnew System::Windows::Forms::DataGridView());
			this->menuPersonnel = (gcnew System::Windows::Forms::MenuStrip());
			this->rechercherPersonnelButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ajouterPersonnelButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modifierPersonnelButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->supprimerPersonnelButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabStats = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->mostSold = (gcnew System::Windows::Forms::DataGridView());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->lessSold = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->produitSousSeuil = (gcnew System::Windows::Forms::DataGridView());
			this->vAchatStock = (gcnew System::Windows::Forms::TextBox());
			this->vCommerciale = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->pageSetupDialog1 = (gcnew System::Windows::Forms::PageSetupDialog());
			this->statusStrip->SuspendLayout();
			this->tabView->SuspendLayout();
			this->tabClient->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewClient))->BeginInit();
			this->menuClient->SuspendLayout();
			this->tabCommandes->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewCommandes))->BeginInit();
			this->commandesMenu->SuspendLayout();
			this->tabStock->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewStock))->BeginInit();
			this->stockMenu->SuspendLayout();
			this->tabPersonnel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewPersonnel))->BeginInit();
			this->menuPersonnel->SuspendLayout();
			this->tabStats->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mostSold))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lessSold))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->produitSousSeuil))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// statusStrip
			// 
			this->statusStrip->ImageScalingSize = System::Drawing::Size(20, 20);
			this->statusStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->statusLabel });
			resources->ApplyResources(this->statusStrip, L"statusStrip");
			this->statusStrip->Name = L"statusStrip";
			// 
			// statusLabel
			// 
			this->statusLabel->Name = L"statusLabel";
			resources->ApplyResources(this->statusLabel, L"statusLabel");
			// 
			// tabView
			// 
			this->tabView->Controls->Add(this->tabClient);
			this->tabView->Controls->Add(this->tabCommandes);
			this->tabView->Controls->Add(this->tabStock);
			this->tabView->Controls->Add(this->tabPersonnel);
			this->tabView->Controls->Add(this->tabStats);
			resources->ApplyResources(this->tabView, L"tabView");
			this->tabView->Name = L"tabView";
			this->tabView->SelectedIndex = 0;
			this->tabView->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::tabView_SelectedIndexChanged);
			// 
			// tabClient
			// 
			this->tabClient->Controls->Add(this->label21);
			this->tabClient->Controls->Add(this->nomClient);
			this->tabClient->Controls->Add(this->label20);
			this->tabClient->Controls->Add(this->numclient);
			this->tabClient->Controls->Add(this->dataGridViewClient);
			this->tabClient->Controls->Add(this->menuClient);
			resources->ApplyResources(this->tabClient, L"tabClient");
			this->tabClient->Name = L"tabClient";
			this->tabClient->UseVisualStyleBackColor = true;
			this->tabClient->Click += gcnew System::EventHandler(this, &MainForm::tabClient_Click);
			// 
			// label21
			// 
			resources->ApplyResources(this->label21, L"label21");
			this->label21->Name = L"label21";
			// 
			// nomClient
			// 
			resources->ApplyResources(this->nomClient, L"nomClient");
			this->nomClient->Name = L"nomClient";
			// 
			// label20
			// 
			resources->ApplyResources(this->label20, L"label20");
			this->label20->Name = L"label20";
			// 
			// numclient
			// 
			resources->ApplyResources(this->numclient, L"numclient");
			this->numclient->Name = L"numclient";
			// 
			// dataGridViewClient
			// 
			this->dataGridViewClient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			resources->ApplyResources(this->dataGridViewClient, L"dataGridViewClient");
			this->dataGridViewClient->Name = L"dataGridViewClient";
			this->dataGridViewClient->RowTemplate->Height = 24;
			// 
			// menuClient
			// 
			this->menuClient->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuClient->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->rechercherClientButton,
					this->ajouterClientButton, this->modifierClientButton, this->supprimerClientButton
			});
			resources->ApplyResources(this->menuClient, L"menuClient");
			this->menuClient->Name = L"menuClient";
			// 
			// rechercherClientButton
			// 
			this->rechercherClientButton->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->numéroClientToolStripMenuItem,
					this->nOmToolStripMenuItem
			});
			this->rechercherClientButton->Name = L"rechercherClientButton";
			resources->ApplyResources(this->rechercherClientButton, L"rechercherClientButton");
			// 
			// numéroClientToolStripMenuItem
			// 
			this->numéroClientToolStripMenuItem->Name = L"numéroClientToolStripMenuItem";
			resources->ApplyResources(this->numéroClientToolStripMenuItem, L"numéroClientToolStripMenuItem");
			this->numéroClientToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::numéroClientToolStripMenuItem_Click);
			// 
			// nOmToolStripMenuItem
			// 
			this->nOmToolStripMenuItem->Name = L"nOmToolStripMenuItem";
			resources->ApplyResources(this->nOmToolStripMenuItem, L"nOmToolStripMenuItem");
			this->nOmToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::nOmToolStripMenuItem_Click);
			// 
			// ajouterClientButton
			// 
			this->ajouterClientButton->Name = L"ajouterClientButton";
			resources->ApplyResources(this->ajouterClientButton, L"ajouterClientButton");
			this->ajouterClientButton->Click += gcnew System::EventHandler(this, &MainForm::ajouterClientButton_Click);
			// 
			// modifierClientButton
			// 
			this->modifierClientButton->Name = L"modifierClientButton";
			resources->ApplyResources(this->modifierClientButton, L"modifierClientButton");
			this->modifierClientButton->Click += gcnew System::EventHandler(this, &MainForm::modifierClientButton_Click);
			// 
			// supprimerClientButton
			// 
			this->supprimerClientButton->Name = L"supprimerClientButton";
			resources->ApplyResources(this->supprimerClientButton, L"supprimerClientButton");
			this->supprimerClientButton->Click += gcnew System::EventHandler(this, &MainForm::supprimerClientButton_Click);
			// 
			// tabCommandes
			// 
			this->tabCommandes->Controls->Add(this->label22);
			this->tabCommandes->Controls->Add(this->refcmd);
			this->tabCommandes->Controls->Add(this->dataGridViewCommandes);
			this->tabCommandes->Controls->Add(this->commandesMenu);
			resources->ApplyResources(this->tabCommandes, L"tabCommandes");
			this->tabCommandes->Name = L"tabCommandes";
			this->tabCommandes->UseVisualStyleBackColor = true;
			// 
			// label22
			// 
			resources->ApplyResources(this->label22, L"label22");
			this->label22->Name = L"label22";
			// 
			// refcmd
			// 
			resources->ApplyResources(this->refcmd, L"refcmd");
			this->refcmd->Name = L"refcmd";
			// 
			// dataGridViewCommandes
			// 
			this->dataGridViewCommandes->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			resources->ApplyResources(this->dataGridViewCommandes, L"dataGridViewCommandes");
			this->dataGridViewCommandes->Name = L"dataGridViewCommandes";
			this->dataGridViewCommandes->RowTemplate->Height = 24;
			// 
			// commandesMenu
			// 
			this->commandesMenu->ImageScalingSize = System::Drawing::Size(20, 20);
			this->commandesMenu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->rechercherCommandesButton,
					this->ajouterCommandesButton, this->modifierCommandesButton, this->supprimerCommandesButton
			});
			resources->ApplyResources(this->commandesMenu, L"commandesMenu");
			this->commandesMenu->Name = L"commandesMenu";
			// 
			// rechercherCommandesButton
			// 
			this->rechercherCommandesButton->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->référenceToolStripMenuItem });
			this->rechercherCommandesButton->Name = L"rechercherCommandesButton";
			resources->ApplyResources(this->rechercherCommandesButton, L"rechercherCommandesButton");
			// 
			// référenceToolStripMenuItem
			// 
			this->référenceToolStripMenuItem->Name = L"référenceToolStripMenuItem";
			resources->ApplyResources(this->référenceToolStripMenuItem, L"référenceToolStripMenuItem");
			this->référenceToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::référenceToolStripMenuItem_Click);
			// 
			// ajouterCommandesButton
			// 
			this->ajouterCommandesButton->Name = L"ajouterCommandesButton";
			resources->ApplyResources(this->ajouterCommandesButton, L"ajouterCommandesButton");
			this->ajouterCommandesButton->Click += gcnew System::EventHandler(this, &MainForm::ajouterCommandesButton_Click);
			// 
			// modifierCommandesButton
			// 
			this->modifierCommandesButton->Name = L"modifierCommandesButton";
			resources->ApplyResources(this->modifierCommandesButton, L"modifierCommandesButton");
			this->modifierCommandesButton->Click += gcnew System::EventHandler(this, &MainForm::modifierCommandesButton_Click);
			// 
			// supprimerCommandesButton
			// 
			this->supprimerCommandesButton->Name = L"supprimerCommandesButton";
			resources->ApplyResources(this->supprimerCommandesButton, L"supprimerCommandesButton");
			this->supprimerCommandesButton->Click += gcnew System::EventHandler(this, &MainForm::supprimerCommandesButton_Click);
			// 
			// tabStock
			// 
			this->tabStock->Controls->Add(this->label23);
			this->tabStock->Controls->Add(this->nameart);
			this->tabStock->Controls->Add(this->label24);
			this->tabStock->Controls->Add(this->refart);
			this->tabStock->Controls->Add(this->dataGridViewStock);
			this->tabStock->Controls->Add(this->stockMenu);
			resources->ApplyResources(this->tabStock, L"tabStock");
			this->tabStock->Name = L"tabStock";
			this->tabStock->UseVisualStyleBackColor = true;
			// 
			// label23
			// 
			resources->ApplyResources(this->label23, L"label23");
			this->label23->Name = L"label23";
			// 
			// nameart
			// 
			resources->ApplyResources(this->nameart, L"nameart");
			this->nameart->Name = L"nameart";
			// 
			// label24
			// 
			resources->ApplyResources(this->label24, L"label24");
			this->label24->Name = L"label24";
			// 
			// refart
			// 
			resources->ApplyResources(this->refart, L"refart");
			this->refart->Name = L"refart";
			// 
			// dataGridViewStock
			// 
			this->dataGridViewStock->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			resources->ApplyResources(this->dataGridViewStock, L"dataGridViewStock");
			this->dataGridViewStock->Name = L"dataGridViewStock";
			this->dataGridViewStock->RowTemplate->Height = 24;
			// 
			// stockMenu
			// 
			this->stockMenu->ImageScalingSize = System::Drawing::Size(20, 20);
			this->stockMenu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->rechercherStockButton,
					this->ajouterStockButton, this->modifierStockButton, this->supprimerStockButton
			});
			resources->ApplyResources(this->stockMenu, L"stockMenu");
			this->stockMenu->Name = L"stockMenu";
			// 
			// rechercherStockButton
			// 
			this->rechercherStockButton->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->référenceToolStripMenuItem1,
					this->nomToolStripMenuItem1
			});
			this->rechercherStockButton->Name = L"rechercherStockButton";
			resources->ApplyResources(this->rechercherStockButton, L"rechercherStockButton");
			// 
			// référenceToolStripMenuItem1
			// 
			this->référenceToolStripMenuItem1->Name = L"référenceToolStripMenuItem1";
			resources->ApplyResources(this->référenceToolStripMenuItem1, L"référenceToolStripMenuItem1");
			this->référenceToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainForm::référenceToolStripMenuItem1_Click);
			// 
			// nomToolStripMenuItem1
			// 
			this->nomToolStripMenuItem1->Name = L"nomToolStripMenuItem1";
			resources->ApplyResources(this->nomToolStripMenuItem1, L"nomToolStripMenuItem1");
			this->nomToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainForm::nomToolStripMenuItem1_Click);
			// 
			// ajouterStockButton
			// 
			this->ajouterStockButton->Name = L"ajouterStockButton";
			resources->ApplyResources(this->ajouterStockButton, L"ajouterStockButton");
			this->ajouterStockButton->Click += gcnew System::EventHandler(this, &MainForm::ajouterStockButton_Click);
			// 
			// modifierStockButton
			// 
			this->modifierStockButton->Name = L"modifierStockButton";
			resources->ApplyResources(this->modifierStockButton, L"modifierStockButton");
			this->modifierStockButton->Click += gcnew System::EventHandler(this, &MainForm::modifierStockButton_Click);
			// 
			// supprimerStockButton
			// 
			this->supprimerStockButton->Name = L"supprimerStockButton";
			resources->ApplyResources(this->supprimerStockButton, L"supprimerStockButton");
			this->supprimerStockButton->Click += gcnew System::EventHandler(this, &MainForm::supprimerStockButton_Click);
			// 
			// tabPersonnel
			// 
			this->tabPersonnel->Controls->Add(this->dataGridViewPersonnel);
			this->tabPersonnel->Controls->Add(this->menuPersonnel);
			resources->ApplyResources(this->tabPersonnel, L"tabPersonnel");
			this->tabPersonnel->Name = L"tabPersonnel";
			this->tabPersonnel->UseVisualStyleBackColor = true;
			// 
			// dataGridViewPersonnel
			// 
			this->dataGridViewPersonnel->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			resources->ApplyResources(this->dataGridViewPersonnel, L"dataGridViewPersonnel");
			this->dataGridViewPersonnel->Name = L"dataGridViewPersonnel";
			this->dataGridViewPersonnel->RowTemplate->Height = 24;
			// 
			// menuPersonnel
			// 
			this->menuPersonnel->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuPersonnel->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->rechercherPersonnelButton,
					this->ajouterPersonnelButton, this->modifierPersonnelButton, this->supprimerPersonnelButton
			});
			resources->ApplyResources(this->menuPersonnel, L"menuPersonnel");
			this->menuPersonnel->Name = L"menuPersonnel";
			// 
			// rechercherPersonnelButton
			// 
			this->rechercherPersonnelButton->Name = L"rechercherPersonnelButton";
			resources->ApplyResources(this->rechercherPersonnelButton, L"rechercherPersonnelButton");
			// 
			// ajouterPersonnelButton
			// 
			this->ajouterPersonnelButton->Name = L"ajouterPersonnelButton";
			resources->ApplyResources(this->ajouterPersonnelButton, L"ajouterPersonnelButton");
			this->ajouterPersonnelButton->Click += gcnew System::EventHandler(this, &MainForm::ajouterPersonnelButton_Click);
			// 
			// modifierPersonnelButton
			// 
			this->modifierPersonnelButton->Name = L"modifierPersonnelButton";
			resources->ApplyResources(this->modifierPersonnelButton, L"modifierPersonnelButton");
			this->modifierPersonnelButton->Click += gcnew System::EventHandler(this, &MainForm::modifierPersonnelButton_Click);
			// 
			// supprimerPersonnelButton
			// 
			this->supprimerPersonnelButton->Name = L"supprimerPersonnelButton";
			resources->ApplyResources(this->supprimerPersonnelButton, L"supprimerPersonnelButton");
			this->supprimerPersonnelButton->Click += gcnew System::EventHandler(this, &MainForm::supprimerPersonnelButton_Click);
			// 
			// tabStats
			// 
			this->tabStats->Controls->Add(this->tabControl1);
			resources->ApplyResources(this->tabStats, L"tabStats");
			this->tabStats->Name = L"tabStats";
			this->tabStats->UseVisualStyleBackColor = true;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage2);
			resources->ApplyResources(this->tabControl1, L"tabControl1");
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->mostSold);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->lessSold);
			resources->ApplyResources(this->tabPage1, L"tabPage1");
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label10);
			resources->ApplyResources(this->groupBox1, L"groupBox1");
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->TabStop = false;
			// 
			// button1
			// 
			resources->ApplyResources(this->button1, L"button1");
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// textBox4
			// 
			resources->ApplyResources(this->textBox4, L"textBox4");
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			// 
			// label12
			// 
			resources->ApplyResources(this->label12, L"label12");
			this->label12->Name = L"label12";
			// 
			// textBox3
			// 
			resources->ApplyResources(this->textBox3, L"textBox3");
			this->textBox3->Name = L"textBox3";
			// 
			// textBox2
			// 
			resources->ApplyResources(this->textBox2, L"textBox2");
			this->textBox2->Name = L"textBox2";
			// 
			// label11
			// 
			resources->ApplyResources(this->label11, L"label11");
			this->label11->Name = L"label11";
			// 
			// label10
			// 
			resources->ApplyResources(this->label10, L"label10");
			this->label10->Name = L"label10";
			// 
			// textBox1
			// 
			resources->ApplyResources(this->textBox1, L"textBox1");
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Name = L"label1";
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->Name = L"label2";
			// 
			// label9
			// 
			resources->ApplyResources(this->label9, L"label9");
			this->label9->Name = L"label9";
			// 
			// mostSold
			// 
			this->mostSold->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			resources->ApplyResources(this->mostSold, L"mostSold");
			this->mostSold->Name = L"mostSold";
			this->mostSold->RowTemplate->Height = 24;
			// 
			// label8
			// 
			resources->ApplyResources(this->label8, L"label8");
			this->label8->Name = L"label8";
			// 
			// lessSold
			// 
			this->lessSold->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			resources->ApplyResources(this->lessSold, L"lessSold");
			this->lessSold->Name = L"lessSold";
			this->lessSold->RowTemplate->Height = 24;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->label3);
			this->tabPage4->Controls->Add(this->produitSousSeuil);
			this->tabPage4->Controls->Add(this->vAchatStock);
			this->tabPage4->Controls->Add(this->vCommerciale);
			this->tabPage4->Controls->Add(this->label6);
			this->tabPage4->Controls->Add(this->label5);
			this->tabPage4->Controls->Add(this->label7);
			this->tabPage4->Controls->Add(this->label4);
			resources->ApplyResources(this->tabPage4, L"tabPage4");
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->Name = L"label3";
			// 
			// produitSousSeuil
			// 
			this->produitSousSeuil->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			resources->ApplyResources(this->produitSousSeuil, L"produitSousSeuil");
			this->produitSousSeuil->Name = L"produitSousSeuil";
			this->produitSousSeuil->RowTemplate->Height = 24;
			// 
			// vAchatStock
			// 
			resources->ApplyResources(this->vAchatStock, L"vAchatStock");
			this->vAchatStock->Name = L"vAchatStock";
			this->vAchatStock->ReadOnly = true;
			// 
			// vCommerciale
			// 
			resources->ApplyResources(this->vCommerciale, L"vCommerciale");
			this->vCommerciale->Name = L"vCommerciale";
			this->vCommerciale->ReadOnly = true;
			// 
			// label6
			// 
			resources->ApplyResources(this->label6, L"label6");
			this->label6->Name = L"label6";
			// 
			// label5
			// 
			resources->ApplyResources(this->label5, L"label5");
			this->label5->Name = L"label5";
			// 
			// label7
			// 
			resources->ApplyResources(this->label7, L"label7");
			this->label7->Name = L"label7";
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->Name = L"label4";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->textBox10);
			this->tabPage2->Controls->Add(this->label19);
			this->tabPage2->Controls->Add(this->textBox9);
			this->tabPage2->Controls->Add(this->label18);
			this->tabPage2->Controls->Add(this->textBox8);
			this->tabPage2->Controls->Add(this->label17);
			this->tabPage2->Controls->Add(this->textBox7);
			this->tabPage2->Controls->Add(this->textBox6);
			this->tabPage2->Controls->Add(this->textBox5);
			this->tabPage2->Controls->Add(this->label16);
			this->tabPage2->Controls->Add(this->label15);
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Controls->Add(this->label13);
			resources->ApplyResources(this->tabPage2, L"tabPage2");
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			resources->ApplyResources(this->dataGridView1, L"dataGridView1");
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowTemplate->Height = 24;
			// 
			// button2
			// 
			resources->ApplyResources(this->button2, L"button2");
			this->button2->Name = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// textBox10
			// 
			resources->ApplyResources(this->textBox10, L"textBox10");
			this->textBox10->Name = L"textBox10";
			// 
			// label19
			// 
			resources->ApplyResources(this->label19, L"label19");
			this->label19->Name = L"label19";
			// 
			// textBox9
			// 
			resources->ApplyResources(this->textBox9, L"textBox9");
			this->textBox9->Name = L"textBox9";
			// 
			// label18
			// 
			resources->ApplyResources(this->label18, L"label18");
			this->label18->Name = L"label18";
			// 
			// textBox8
			// 
			resources->ApplyResources(this->textBox8, L"textBox8");
			this->textBox8->Name = L"textBox8";
			// 
			// label17
			// 
			resources->ApplyResources(this->label17, L"label17");
			this->label17->Name = L"label17";
			// 
			// textBox7
			// 
			resources->ApplyResources(this->textBox7, L"textBox7");
			this->textBox7->Name = L"textBox7";
			// 
			// textBox6
			// 
			resources->ApplyResources(this->textBox6, L"textBox6");
			this->textBox6->Name = L"textBox6";
			// 
			// textBox5
			// 
			resources->ApplyResources(this->textBox5, L"textBox5");
			this->textBox5->Name = L"textBox5";
			// 
			// label16
			// 
			resources->ApplyResources(this->label16, L"label16");
			this->label16->Name = L"label16";
			// 
			// label15
			// 
			resources->ApplyResources(this->label15, L"label15");
			this->label15->Name = L"label15";
			// 
			// label14
			// 
			resources->ApplyResources(this->label14, L"label14");
			this->label14->Name = L"label14";
			// 
			// label13
			// 
			resources->ApplyResources(this->label13, L"label13");
			this->label13->Name = L"label13";
			// 
			// MainForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->Controls->Add(this->tabView);
			this->Controls->Add(this->statusStrip);
			this->MainMenuStrip = this->menuPersonnel;
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->Shown += gcnew System::EventHandler(this, &MainForm::MainForm_Shown);
			this->statusStrip->ResumeLayout(false);
			this->statusStrip->PerformLayout();
			this->tabView->ResumeLayout(false);
			this->tabClient->ResumeLayout(false);
			this->tabClient->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewClient))->EndInit();
			this->menuClient->ResumeLayout(false);
			this->menuClient->PerformLayout();
			this->tabCommandes->ResumeLayout(false);
			this->tabCommandes->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewCommandes))->EndInit();
			this->commandesMenu->ResumeLayout(false);
			this->commandesMenu->PerformLayout();
			this->tabStock->ResumeLayout(false);
			this->tabStock->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewStock))->EndInit();
			this->stockMenu->ResumeLayout(false);
			this->stockMenu->PerformLayout();
			this->tabPersonnel->ResumeLayout(false);
			this->tabPersonnel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewPersonnel))->EndInit();
			this->menuPersonnel->ResumeLayout(false);
			this->menuPersonnel->PerformLayout();
			this->tabStats->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mostSold))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lessSold))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->produitSousSeuil))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MainForm_Shown(System::Object^ sender, System::EventArgs^ e) {
		resetClientView();
	}

	private: System::Void ajouterClientButton_Click(System::Object^ sender, System::EventArgs^ e) {
		EditClientForm^ f = gcnew EditClientForm(false);
		f->ShowDialog();
		resetClientView();
	}
	private: System::Void ajouterPersonnelButton_Click(System::Object^ sender, System::EventArgs^ e) {
		EditPersonnelForm^ f = gcnew EditPersonnelForm(false);
		f->ShowDialog();
		resetPersonnelView();
	}
	private: System::Void ajouterCommandesButton_Click(System::Object^ sender, System::EventArgs^ e) {
		EditCommandeForm^ f = gcnew EditCommandeForm(false);
		f->ShowDialog();
		resetCommandeView();
	}
	private: System::Void ajouterStockButton_Click(System::Object^ sender, System::EventArgs^ e) {
		EditArticleForm^ f = gcnew EditArticleForm(false);
		f->ShowDialog();
		resetArticleView();
	}

	private: System::Void tabClient_Click(System::Object^ sender, System::EventArgs^ e) {
		resetClientView();
	}

	private: System::Void supprimerClientButton_Click(System::Object^ sender, System::EventArgs^ e) {
		DataGridViewRow^ rowToDelete = this->dataGridViewClient->Rows[this->dataGridViewClient->CurrentCell->RowIndex];
		
		ServiceClient^ serviceClient = gcnew ServiceClient();
		serviceClient->supprimerClient(Convert::ToInt32(rowToDelete->Cells[0]->Value));

		resetClientView();
	}
	private: System::Void supprimerStockButton_Click(System::Object^ sender, System::EventArgs^ e) {
		DataGridViewRow^ rowToDelete = this->dataGridViewStock->Rows[this->dataGridViewStock->CurrentCell->RowIndex];
		
		ServiceArticle^ serviceArticle = gcnew ServiceArticle();
		serviceArticle->supprimerArticle(Convert::ToInt32(rowToDelete->Cells[0]->Value));

		resetArticleView();
	}
	private: System::Void supprimerPersonnelButton_Click(System::Object^ sender, System::EventArgs^ e) {
		DataGridViewRow^ rowToDelete = this->dataGridViewPersonnel->Rows[this->dataGridViewPersonnel->CurrentCell->RowIndex];
		
		ServicePersonnel^ servicePersonnel = gcnew ServicePersonnel();
		servicePersonnel->supprimerPersonnel(Convert::ToInt32(rowToDelete->Cells[0]->Value));

		resetPersonnelView();
	}
	private: System::Void supprimerCommandesButton_Click(System::Object^ sender, System::EventArgs^ e) {
		DataGridViewRow^ rowToDelete = this->dataGridViewCommandes->Rows[this->dataGridViewCommandes->CurrentCell->RowIndex];
		
		ServiceCommande^ serviceCommande = gcnew ServiceCommande();
		serviceCommande->supprimerCommande(Convert::ToInt32(rowToDelete->Cells[0]->Value));

		resetCommandeView();
	}

	private: System::Void resetClientView() {
		ServiceClient^ serviceClient = gcnew ServiceClient();
		serviceClient->displayClientMainMenu(this->dataGridViewClient);
	}
	private: System::Void resetArticleView() {
		ServiceArticle^ serviceArticle = gcnew ServiceArticle();
		serviceArticle->displayArticleMainMenu(this->dataGridViewStock);
	}
	private: System::Void resetCommandeView() {
		ServiceCommande^ serviceCommande = gcnew ServiceCommande();
		serviceCommande->displayCommandeMainMenu(this->dataGridViewCommandes);
	}
	private: System::Void resetPersonnelView() {
		ServicePersonnel^ servicePersonnel = gcnew ServicePersonnel();
		servicePersonnel->displayPersonnelsMainMenu(this->dataGridViewPersonnel);
	}
	private:System::Void resetStatsView() {
		ServiceStatistiques^ serviceStatistiques = gcnew ServiceStatistiques();
		this->vAchatStock->Text = serviceStatistiques->getValeurAchatStock()->ToString();
		this->vCommerciale->Text = serviceStatistiques->getValeurCommercialeStock()->ToString();
		this->textBox1->Text = serviceStatistiques->getPanierMoyen()->ToString(); 
		this->produitSousSeuil->DataSource = serviceStatistiques->getSousSeuil();
		this->mostSold->DataSource = serviceStatistiques->getMostArticles();
		this->lessSold->DataSource = serviceStatistiques->getLessArticles();
	}

	private: System::Void tabView_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		switch (this->tabView->SelectedIndex)
		{
		case 0:
			resetClientView();
			break;
		case 1:
			resetCommandeView();
			break;
		case 2:
			resetArticleView();
			break;
		case 3:
			resetPersonnelView();
			break;
		case 4:
			resetStatsView();
			break;
		default:
			break;
		}
	}

	private: System::Void modifierClientButton_Click(System::Object^ sender, System::EventArgs^ e) {
		DataGridViewRow^ rowToEdit = this->dataGridViewClient->Rows[this->dataGridViewClient->CurrentCell->RowIndex];
		
		ServiceClient^ serviceClient = gcnew ServiceClient();
		serviceClient->setClient(rowToEdit);

		EditClientForm^ f = gcnew EditClientForm(true, serviceClient->getClient());
		f->ShowDialog();
		resetClientView();
	}
	private: System::Void modifierStockButton_Click(System::Object^ sender, System::EventArgs^ e) {
		DataGridViewRow^ rowToEdit = this->dataGridViewStock->Rows[this->dataGridViewStock->CurrentCell->RowIndex];
		
		ServiceArticle^ serviceArticle = gcnew ServiceArticle();
		serviceArticle->setArticle(rowToEdit);

		EditArticleForm^ f = gcnew EditArticleForm(true, serviceArticle->getArticle());
		f->ShowDialog();
		resetArticleView();
	}
	private: System::Void modifierPersonnelButton_Click(System::Object^ sender, System::EventArgs^ e) {
		DataGridViewRow^ rowToEdit = this->dataGridViewPersonnel->Rows[this->dataGridViewPersonnel->CurrentCell->RowIndex];
		
		ServicePersonnel^ servicePersonnel = gcnew ServicePersonnel();
		servicePersonnel->setPersonnel(rowToEdit);

		EditPersonnelForm^ f = gcnew EditPersonnelForm(true, servicePersonnel->getPersonnel());
		f->ShowDialog();
		resetPersonnelView();
	}
	private: System::Void modifierCommandesButton_Click(System::Object^ sender, System::EventArgs^ e) {
		DataGridViewRow^ rowToEdit = this->dataGridViewCommandes->Rows[this->dataGridViewCommandes->CurrentCell->RowIndex];

		ServiceCommande^ serviceCommande = gcnew ServiceCommande();
		serviceCommande->setCommande(rowToEdit);

		EditCommandeForm^ f = gcnew EditCommandeForm(true, serviceCommande->getCommande());
		f->ShowDialog();
		resetCommandeView();
	}

	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		resetStatsView();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		ServiceStatistiques^ serviceStat = gcnew ServiceStatistiques();
		this->textBox4->Text = serviceStat->getCAMois(Convert::ToInt32(this->textBox3->Text), Convert::ToInt32(this->textBox2->Text))->ToString();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		fonctionSimulation pf = &Simulation;

		int^ tva1 = Convert::ToInt32(this->textBox5->Text);
		int^ tva2 = Convert::ToInt32(this->textBox6->Text);
		int^ tva3 = Convert::ToInt32(this->textBox7->Text);
		double^ marge = Convert::ToDouble(this->textBox8->Text->Replace(".", ","));
		int^ remise = Convert::ToInt32(this->textBox9->Text);
		int^ demarque = Convert::ToInt32(this->textBox10->Text);

		this->dataGridView1->DataSource = pf(tva1, tva2, tva3, marge, remise, demarque);
	}

	private: System::Void numéroClientToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ServiceClient^ serviceClient = gcnew ServiceClient();
		dataGridViewClient->DataSource = serviceClient->selectById(Convert::ToInt32(this->numclient->Text));
	}
	private: System::Void nOmToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ServiceClient^ serviceClient = gcnew ServiceClient();
		dataGridViewClient->DataSource = serviceClient->selectByName(this->nomClient->Text);
	}
	private: System::Void référenceToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ServiceCommande^ serviceCommande = gcnew ServiceCommande();
		dataGridViewCommandes->DataSource = serviceCommande->selectCommandeByRef(this->refcmd->Text);
	}
	private: System::Void référenceToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		ServiceArticle^ serviceArticle = gcnew ServiceArticle();
		dataGridViewStock->DataSource = serviceArticle->selectArticleByRef(this->refart->Text);
	}
	private: System::Void nomToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		ServiceArticle^ serviceArticle = gcnew ServiceArticle();
		dataGridViewStock->DataSource = serviceArticle->selectArticleByName(this->nameart->Text);
	}
};
}


