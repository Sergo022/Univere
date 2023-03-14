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

namespace _25._1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            double x, xn, xk, xh;
            double y;

            xn = Convert.ToDouble(textBox1.Text);
            xk = Convert.ToDouble(textBox2.Text);
            xh = Convert.ToDouble(textBox3.Text);
            {
                x=xn;
                while (x<=xk)
                {
                    if (xn<=0)
                    {
                        y=Math.Pow(x, 4)+2*Math.Pow(x, 3-x);

                        this.chart1.Series[0].Points.AddXY(x, y);
                        x=x+xh;
                    }

                    if (xn<=5 && xn>0)
                    {
                        y=Math.Exp(-x)+2*Math.Pow(x, 1/4);

                        this.chart1.Series[0].Points.AddXY(x, y);
                        x=x+xh;

                    }
                    if (xn>5)
                    {
                        y=Math.Log(x*x*x+x*x);

                        this.chart1.Series[0].Points.AddXY(x, y);
                        x=x+xh;

                    }

                }
            }

        }
    }
}
