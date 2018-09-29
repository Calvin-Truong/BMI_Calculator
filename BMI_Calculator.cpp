using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace BMI_Calculator_Project
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnCompute_Click(object sender, EventArgs e)
        {
            //Feet
            int feet;
            string feetInput = txtFeet.Text;
            bool correctFeet = Int32.TryParse(feetInput, out feet);
            if (correctFeet && (Convert.ToInt32(feetInput) > 0))
            {
                txtFeet.BackColor = SystemColors.Window;
            }
            else
            {
                MessageBox.Show("Feet input is invalid, please try again");
                txtFeet.Clear();
                txtFeet.Focus();
                txtFeet.BackColor = System.Drawing.Color.Red;
                txtBMI.Clear();
            }

            //Inches 
            int inches;
            string inchesInput = txtInches.Text;
            bool correctInches = Int32.TryParse(inchesInput, out inches);
            if (correctInches && (Convert.ToInt32(inchesInput) > 0))
            {
                txtInches.BackColor = SystemColors.Window;
            }
            else
            {
                MessageBox.Show("Inches input is invalid, please try again");
                txtInches.Clear();
                txtInches.Focus();
                txtInches.BackColor = System.Drawing.Color.Red;
                txtBMI.Clear();
            }

            //Weight
            double lbs;
            string lbsInput = txtLbs.Text;
            bool correctLbs = Double.TryParse(lbsInput, out lbs);
            if (correctLbs && (Convert.ToDouble(lbsInput) > 0))
            {
                txtLbs.BackColor = SystemColors.Window;
            }
            else
            {
                MessageBox.Show("Weight input is invalid, please try again");
                txtLbs.Clear();
                txtLbs.Focus();
                txtLbs.BackColor = System.Drawing.Color.Red;
                txtBMI.Clear();
            }

            if (correctFeet && correctInches && correctLbs && feet > 0 && inches > 0 && lbs > 0)
            {
                int height = ((12 * feet) + inches);
                double heightDouble = Convert.ToDouble(height);

                double BMI = (lbs / (heightDouble * heightDouble)) * 703;
                txtBMI.Text = Math.Round(BMI, 2).ToString();
            }
        }

        private void btnClear_Click(object sender, EventArgs e)
        {
            txtFeet.Clear();
            txtInches.Clear();
            txtLbs.Clear();
            txtBMI.Clear();
        }

        private void btnExit_Click(object sender, EventArgs e)
        {
            Close();
        }
    }
}
