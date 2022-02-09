# Utilizando o GIT
## Antes do primeiro passo:
> #### É interessante ter uma chave SSH vinculada à sua conta;
> Criando uma [chave SSH](https://docs.github.com/pt/authentication/connecting-to-github-with-ssh/generating-a-new-ssh-key-and-adding-it-to-the-ssh-agent) e vinculando a sua conta ;
> 
> Após o procedimento presente no link, basta vincular a chave publica à sua conta no gitlab;
> 
> **OBS:** E muito importante que somente você tenha acesso à sua **chave privada**

## **Clonando o repositório na sua máquina** (provavelmente o primeiro passo):
 **OBS:** Tendo sua [chave SSH](https://docs.github.com/pt/authentication/connecting-to-github-with-ssh/generating-a-new-ssh-key-and-adding-it-to-the-ssh-agent) vinculada à sua conta ou não, é possível clonar um repositório do git.
 
 Encontre o link do diretório em questão entrando no projeto pelo gitlab e então encontre o botão **clone**:

 ![Git Clone](/imagem/gitmdnovo.PNG)
 
 Abra o terminal ou o bash do git e vá até o diretório no seu PC onde você quer armazenar todos os arquivos que você clonar, e estando no lugar ideal digite o comando: `git clone (link copiado por SSH ou HTTPS)`.

 Após o download já é possivel acessar os arquivos do repositório localmente.

## Trabalhando e modificando o repositório:

 Sempre que for trabalhar com o repositório é muito importante:
 > 1. Ter certeza que está no diretório correto;
 > 2. Ter certeza de que seu repositório local está atualizado utilizando o comando `git pull` antes de começar as alterações;
 > 3. Criar uma branch (utiliza-se geralmente o comando `git checkout -b nome-membro/problema-sendo-resolvido`) específica para a correção com um nome descritivo;

### Após a modificação ser finalizada:

 Após as modificações terem sido feitas e também ter organizado o diretório com apenas os arquivos relevantes, ou seja, excluindo possíveis arquivos temporários gerados pelo **vim** ou coisas semelhantes, chegou a hora de fazer o commit:

 ```
 git add .
 git commit -m "Comentário descritivo"
 git push
 ```

 **OBS:** É importante estar atento às saídas do git para ter certeza de que todos os comandos funcionaram como deveriam.

 ### Merge da branch paralela à main:

Todos os membros do CG tem role de maintener no nosso diretório, portanto qualquer um de nós pode fazer o merge de uma branch criada à main. Essa tarefa é a última desse ciclo que estamos usando como base pra manter o repositório atualizado e organizado.

**OBS:** Continua sendo muito importante os dois primeiros tópicos da seção "Trabalhando e modificando o repositório".

Após a confirmação com todos os membros de que sua branch está como deveria estar e também confirmar se os tópicos citados anteriormente estão sendo respeitados, serão utilizados os comandos a seguir:

```
git checkout main
git pull
git merge nome-mebro/problema-sendo-resolvido
```

Posteriormente aos comandos será possível perceber se os comandos funcionaram como deveriam ou não através das saídas do git.