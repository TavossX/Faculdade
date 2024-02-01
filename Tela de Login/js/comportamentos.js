window.onload = tratar_eventos;

function tratar_eventos(){
    /*Mostrar o formulário do cadastro de contato.*/

    document.getElementById("mostrar-form-cadastro").onclick = function(){
        this.style.display - 'none';
        document.getElementById("formulario-cadastro-contato").style.display='block';

        return false;
    }

    /*Botao de esconder (cancelar) o cadastro de contato*/

    document.getElementById("esconde-form-cadastro").onclick = function(){
        document.getElementById("formulario-cadastro-contato").style.display='none';
        document.getElementById("mostrar-form-cadastro").style.display = 'block';
    }

    /*botão de adicionar contatos.*/

    document.getElementById("form-contato").onsubmit = function(){

        var nome = document.getElementById("nome").value;
        var email = document.getElementById("email").value;
        var telefone = document.getElementById("telefone").value;
        var cidade = document.getElementById("cidade").value;

        var img_remove = document.createElement("img")
            img_remove.setAttribute('src', 'img/cross.png');
            img_remove.className = 'botao-remover-contato';

        var td_remove = document.createElement("td");
            td_remove.appendChild(img_remove);

        var img_avatar = document.createElement("img");
            img_avatar.setAttribute('src', 'img/' + this.avatar_selecionado.value);

        var td_avatar = document.createElement("td");
            td_avatar.appendChild(img_avatar);

        var td_nome = document.createElement("td");
            td_nome.appendChild(document.createTextNode(nome))
  
        var td_email = document.createElement("td");
            td_email.appendChild(document.createTextNode(email))

         var td_telefone = document.createElement("td");
             td_telefone.appendChild(document.createTextNode(telefone))

        var td_cidade = document.createElement("td");
            td_cidade.appendChild(document.createTextNode(cidade))

        var tr = document.createElement("tr");
            tr.appendChild(td_remove);
            tr.appendChild(td_avatar);
            tr.appendChild(td_nome);
            tr.appendChild(td_email);
            tr.appendChild(td_telefone);
            tr.appendChild(td_cidade);

        document.getElementById("tbl-contatos").getElementsByTagName("tbody")[0].appendChild(tr);

        document.getElementById("formulario-cadastro-contato").style.display = 'none';
        document.getElementById("mostrar-form-cadastro").style.display = 'block';

        ativar_botoes_exclusao();
        return false;
    }

    ativar_botoes_exclusao();
}

/*
botao de remover contato*/

function ativar_botoes_exclusao()
{

    var corpo_tabela = document.getElementById("tbl-contatos").getElementsByTagName("tbody")[0];
    var imagens_tabela = corpo_tabela.getElementsByTagName("img");

    for(var i=0; i < imagens_tabela.length; i++) {

        if(imagens_tabela[i].getAttribute('class') == 'botao-remover-contato'){

            imagens_tabela[i].onclick = function(){

                if(confirm("Tem certeza que deseja remover de sua lista?"))
                {
                    this.parentElement.parentElement.remove();
                }
            }
        }        
    }
}