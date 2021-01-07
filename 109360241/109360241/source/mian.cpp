private void Form1_Load(object sender, EventArgs e)//°ÊºA¥Í¦¨
{
	int i, j, number = 0;
	this.Width = 800;
	this.Height = 800;
	buttons = new Button[30, 30];
	for (i = 0; i < 30; i++)
	{
		for (j = 0; j < 30; j++)
		{
			buttons[i, j] = new Button
			{
				Name = i.ToString() + j.ToString(),
				Location = new Point(23 * i, 23 * j),
				BackColor = Color.White,
				Size = new Size(23, 23),

			};
			number++;
			buttons[i, j].MouseClick += buttonrecond;
			this.Controls.Add(buttons[i, j]);
		}
	}
}