<!DOCTYPE html>

<html lang="pt-br">

	<head>

		<title> Vivimodas </title>
			<!-- CSS -->
			<link rel="stylesheet" type="text/css" href="css/estilo.css">
			<meta charset="utf-8">
			<link href="public/css/bootstrap.min.css" rel="stylesheet">
			<meta name="viewport" content="width=device-width, initial-scale=1">

	</head>

	<body>
	
		<div class="container-fluid">

			<header>  

			<div class="menu">
				<div id="logo">
					<img src="logo/logo5.jpg" height="140px">
				</div>
				
				<!-- Menu -->
				<div id="menu">
					<a href="index.html">Home</a>
					<a href="quem somos.html">Quem somos</a>	
					<a href="produtos.html">Produtos</a>
					<a href="contatos.html">Contatos</a>						
					<input type="text" placeholder="Buscar" name="Buscar">
					<input type="submit" class="btn btn-info" value="Buscar">
				</div>
			</div>	
			
			</header>	
				
					<div class="container-fluid container-group" style="background-image: url(img/form.jpg);">


						<form method="post" action="cadastrar.php">

							<div class="form text-center">
									
								</br></br></br></br>

									<h1 style="color: white"> <b> <u> Formulário de Cadastro  </b> </u> </h1> 

									</br></br>

									<div class="form-group">
										<label> <b> Digite seu nome completo: </b> </label>
										<input type="text" name="nome" placeholder="Nome completo"> 
									</div>

									<div class="form-group">
										<label> <b> Digite seu número de telefone: </b> </label>
										<input type="text" name="telefone" placeholder="Telefone">
									</div>

									<div class="form-group">
										<label> <b> Digite seu e-mail: </b> </label>
										<input type="email" name="email" placeholder="E-mail">
									</div>

									<input type="submit" name="cadastrar" value="Cadastrar" class="btn btn-secondary">
									<input type="reset" name="limpar" value="limpar" class="btn btn-secondary">

								</br></br></br></br></br></br></br></br>
									
								
							</div>	

						</form>	

					</div>

				

			<footer>

				<div id="footer"> 
					<img src="logo/logo5.jpg" height="110px" align="left">
					<p> Contato: +55 (11) 99128-6731 </p> 
					<p> Instagran: @_vivihmodas </p> 
					<p> Email: vvnsalles@gmail.com </p> 
				</div>

			</footer>	
			
		</div>	
					
	</body>

	</html>	