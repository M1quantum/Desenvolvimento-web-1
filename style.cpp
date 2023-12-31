@import url('https://fonts.googleapis.com/css2?family=Montserrat&display=swap');
/*
	font-family: 'Montserrat', sans-serif;
    google.com/fonts
*/


:root {
   --amarelo: #F9D423;  /* F9D423 EDDE45*/ 
   --vermelho: #6B0103; /* ff0000 6B0103 A30006 F03C02 */ 
   --verde: #A8DBA8;    /* 00ff00 CFF09E A8DBA8 3B8686 */
   --azul: #00B4CC;     /* 0000ff 00DFFC 00B4CC 00B4CC */
   --branco: #ffffff;
}

html {
	font-family: 'Montserrat', sans-serif;
}

li {
    display: inline;
    margin-right: 50px;
}

li:hover {
    font-weight: bold;
}

header, footer {
	width: auto;
	background: rgba(80,80,80,0.2);
	line-height: 3em;
}

header {
	border-top-right-radius: 10px;
	border-top-left-radius: 10px;
	height: 11 0px;
}

footer {
	border-bottom-right-radius: 10px;
	border-bottom-left-radius: 10px;
	height: 50px;
}

header h1, footer h1 {
	text-align: center;
	text-shadow: 1px 1px black;
}

#content {
	width: 100%;
	height: auto;
	position: relative;
	float: left;
}

article {
	margin-top: 10px; 
	width: 40%;
	border: 1px dashed var(--vermelho);
	height: 400px;
	margin-left: 5%;
	position: relative;
	float: left;
}

a {
    text-decoration: none;
}

.bgBranco	{background-color: var(--branco);}
.bgAmarelo  {background-color: var(--amarelo);}
.bgAzul     {background-color: var(--azul);}
.bgVermelho {background-color: var(--vermelho);}
.bgVerde    {background-color: var(--verde);}
.bgPreto	{background-color: #000000;}
.bgFalha    {background-image: url(../img/falha.jpg);}

.mt-05 		{margin-top: 5px;}
.mt-10 		{margin-top: 10px;}
.mt-15 		{margin-top: 15px;}

.mb-05 		{margin-bottom: 5px;}
.mb-10 		{margin-bottom: 10px;}
.mb-15 		{margin-bottom: 15px;}

.pd-05 		{padding: 5px;}
.pd-10 		{padding: 10px;}
.pd-15 		{padding: 15px;}

.txtBranco   {color: #ffffff;} 
.txtAmarelo  {color: var(--amarelo);}
.txtAzul     {color: var(--azul);}
.txtVermelho {color: var(--vermelho);}
.txtVerde    {color: var(--verde);}
.txtPreto	 {color: #000000;}

.borda-0   {border: none;}
.borda-1   {border: solid 1px;}
.borda-2   {border: solid 2px;}
.borda-3   {border: solid 3px;}
.borda-r0  {border-radius: 0px;}
.borda-r5  {border-radius: 5px;}
.borda-r10 {border-radius: 10px;}

.bordaBranco   {border-color: var(--branco);} 
.bordaAmarelo  {border-color: var(--amarelo);}
.bordaAzul     {border-color: var(--azul);}
.bordaVermelho {border-color: var(--vermelho);}
.bordaVerde    {border-color: var(--verde);}
.bordaPreto	   {border-color: #000000;}


.imgpac {
	background-image: url(../img/pac.jpg);
}

.imgfeliz {
	background-image: url(../img/feliz.jpg);
}

.imgsusto {
	background-image: url(../img/susto.jpg);
}

.moveimg {
	float: left;
	position: relative;
	display: block;
	width: 210px;
	height: 157px;
	text-indent: -9999px;
	margin: 20px;
}

.moveimg:hover {
	background-position: -210px;
}