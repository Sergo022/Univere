using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Windows.Forms.DataVisualization.Charting;

namespace _25._2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void chart1_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            chart1.Series[0].Points.AddXY("Сергій", 25);
            chart1.Series[0].Points.AddXY("Олег", 15);
            chart1.Series[0].Points.AddXY("Андрій", 18);
            chart1.Series[0].Points.AddXY("Макс", 21);
            chart1.Series[0].Points.AddXY("Стас", 19);
        }

        private void button2_Click(object sender, EventArgs e)
        {
            chart2.Series[0].Points.AddXY("Сергій", 25);
            chart2.Series[0].Points.AddXY("Олег", 15);
            chart2.Series[0].Points.AddXY("Андрій", 18);
            chart2.Series[0].Points.AddXY("Макс", 21);
            chart2.Series[0].Points.AddXY("Стас", 19);
        }

        private void button3_Click(object sender, EventArgs e)
        {
            chart3.Series[0].Points.AddXY("Сергій", 25);
            chart3.Series[0].Points.AddXY("Олег", 15);
            chart3.Series[0].Points.AddXY("Андрій", 18);
            chart3.Series[0].Points.AddXY("Макс", 21);
            chart3.Series[0].Points.AddXY("Стас", 19);
        }
    }
}
