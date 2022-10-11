# IN PROGRESS
use lojacomercial;
# 1 
insert into cliente (numero,nomeCompleto, sobreNome, primeiroNome, telefone, endereloLinha1, cidade, pais)
	values (1,"Pämela Resende","Resende","Pamela","(32)3333-3333","Avenida Brasil","Rio de Janeiro","Brasil"),
    (2,"Cleiton","Resende","Cleiton","(32)3333-3333","Avenida","Salvador","Brasil");
#2
insert into venda (numero,data, dataPedido, dataEnvio,situacao,numCliente)
	values (1, "2022-10-10","2022-10-10","2022-10-11","Enviado",1),
    (2, "2022-10-10","2022-10-10","2022-10-11","Enviado",2);   

#3
select nome, valorVenda, descricao from produto;

#4
select nome, valorVenda, valorVenda*1.25 from produto;

#5
select * from produto;

#6
select codigo, estoque, estoque - 8 from produto;

#7
select * from produto where tipoProduto="Classic Cars" ;

#8
select * from venda order by situacao;

#9
select * from cliente order by pais;

#10
select * from cliente where substr(primeiroNome, 2,1) = "a";
select * from cliente where primeiroNome like '%_a';
select * from cliente where nomeCompleto like '%_a';

#11
select * from cliente where sobreNome like "%e";

#12 - O objetivo dessa consulta e identificar as vendas ocorridas entre os dias 1 de otubro de 2022 e 11 de outubro de 2022
select * from venda where data between "2022-10-01" and "2022-10-11";

#13FZER
select * from venda where data like "%2003-03-__%" union select * from venda where data like "%2004-03-__%" ;

#14 cmparacao limite de credito
select numero, nomeCompleto, limiteCredito, pais from cliente where pais="Australia" union select numero, nomeCompleto, limiteCredito, pais from cliente where pais="Austria" ;

#15


#16
select nomeCompleto, state from cliente where state is null;

#17
select * from 
