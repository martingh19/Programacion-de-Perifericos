using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO;

namespace winform02
{
    public partial class MainForm : Form
    {
        bool TextoCambiado = false;
        bool cambio = true;
        string nArchivo = "";
        string rutaArchivo = string.Empty;
        public MainForm()
        {
            InitializeComponent();
        }
        private void SaveFile()
        {
            SaveFileDialog ofd = new SaveFileDialog();
            if (ofd.ShowDialog() == DialogResult.OK)
            {
                File.WriteAllText(ofd.FileName, this.richTextBox1.Text);
            }
            cambio = true;
            TextoCambiado = false;
            rutaArchivo = ofd.FileName;
        }

        private void Savelog()
        { 
            if (File.Exists(rutaArchivo))
            {
                File.WriteAllText(rutaArchivo, this.richTextBox1.Text);
                this.Text = "El archivo se ha guardado";
                TextoCambiado = false;
            }
            else
            {
                SaveFile();
            }
        }

        private void NewFile()
        {
            if (!TextoCambiado)
            {
                this.richTextBox1.Clear();
                rutaArchivo = "";
                TextoCambiado = false;
            }
            else
            {
                DialogResult td;
                td = MessageBox.Show("El Archivo sea  Modificado ¿Quiere guardar el archivo", "Archivo Modificado", MessageBoxButtons.YesNoCancel, MessageBoxIcon.Exclamation);
                if(td == DialogResult.Yes)
                {
                    Savelog();
                    this.richTextBox1.Clear();
                    rutaArchivo = "";
                }
                if(td == DialogResult.No)
                {
                    this.richTextBox1.Clear();
                    rutaArchivo = "";
       
                }
                TextoCambiado = false;
            }
        }

        private void OpenFile()
        {
            cambio = false;
            OpenFileDialog ofd = new OpenFileDialog();
            if (ofd.ShowDialog() == DialogResult.OK)//&& string.IsNullOrEmpty(this.richTextBox1.Text)
            {
                this.richTextBox1.Text = File.ReadAllText(ofd.FileName);
                this.Text = ofd.FileName;
            }
            nArchivo = richTextBox1.Text;
            cambio = true;
            rutaArchivo = ofd.FileName;
        }


        private void CortarToolStripMenuItem_Click(object sender, EventArgs e)
        {

        }

        private void AcercaDeToolStripMenuItem_Click(object sender, EventArgs e)
        {
            AcercaDe acercaDe = new AcercaDe();//Creacion de una instancia
            acercaDe.Show();//.ShowDialog
        }

        private void SalirToolStripMenuItem_Click(object sender, EventArgs e)
        {
            DialogResult Respuesta;
           Respuesta =  MessageBox.Show(this,"¿Desea usted salir?", "Salir",MessageBoxButtons.YesNo,MessageBoxIcon.Question);
            if (Respuesta == DialogResult.Yes) Application.ExitThread();
            //Close();
        }

        

        private void MainForm_FormClosing(object sender, FormClosingEventArgs e)
        {
            DialogResult ResP;
            ResP = MessageBox.Show( "¿Desea usted salir?", "Salir", MessageBoxButtons.YesNo, MessageBoxIcon.Question);
            //if(MessageBox.Show("",,,,) == DialogResult.No){ e.Cancel = true;}
            if (ResP == DialogResult.Yes)
            {
                Application.ExitThread();
            }
            if(ResP == DialogResult.No) {
                e.Cancel = true;//"e" es una estructura
            }
        }
        private void RichTextBox1_TextChanged(object sender, EventArgs e)
        {
            if (cambio)
            {
                TextoCambiado = true;
            }

        }

        private void AbrirToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (!TextoCambiado)
            {
                OpenFile();
            }
            else
            {
                DialogResult result = MessageBox.Show(" Actualmente hay texto en el archivo ¿Desea guardar el documento actual?", "Salida", MessageBoxButtons.YesNoCancel, MessageBoxIcon.Exclamation);
                if (result == DialogResult.Yes)
                {
                    Savelog();
                    OpenFile();
                }
                else if (result == DialogResult.No)
                {
                    OpenFile();
                }
            }
        }

        private void GuardarToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Savelog();
        }

        private void MainForm_Load(object sender, EventArgs e)
        {

        }

        

        private void NuevoToolStripMenuItem_Click(object sender, EventArgs e)
        {
            NewFile();
        }

        private void GuardarComoToolStripMenuItem_Click(object sender, EventArgs e)
        {
            SaveFile();
        }
    }
}
