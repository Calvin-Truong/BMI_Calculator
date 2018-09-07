using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace CalvinTProj1_BMI
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnCompute_Click(object sender, EventArgs e)
        {
            double feet = Convert.ToDouble(txtFeet.Text);
            double feetInches = feet * 12;
            double inches = Convert.ToDouble(txtInches.Text);
            double newInches = feetInches + inches;
            double meter = newInches / 39.3701;
            double lbs = Convert.ToDouble(txtLbs.Text);
            double kilogram = lbs * 0.453592;
            double BMI = kilogram / (meter * meter);
            txtBMI.Text = Math.Round(BMI, 1).ToString();
        }
        private void btnClear_Click(object sender, EventArgs e)
        {
            txtBMI.Text = "";
            txtFeet.Text = "";
            txtInches.Text = "";
            txtLbs.Text = "";
        }
        private void btnExit_Click(object sender, EventArgs e)
        {
            Close();
        }
    }
}
